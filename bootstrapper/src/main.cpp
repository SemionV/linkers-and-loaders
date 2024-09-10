#include <iostream>
#include <filesystem>
#include <dlfcn.h>
#include <dory/service.h>

#include <math.h>

bool loadModule(const std::filesystem::path& modulePath);

int main() {
    auto sum = add(1.2, 3.1);

    std::cout << "sum: " << sum << "\n";

    loadModule("dyn-test-lib.so");

    auto service = ServiceC();
    auto result = service.add(3, 3);
    std::cout << "main service.add: " << result << "\n";

    return 0;
}

typedef bool (*ModuleInit)();

bool loadModule(const std::filesystem::path& modulePath) {
    void* handle = dlopen(modulePath.c_str(), RTLD_LAZY);
    if (!handle) {
        std::cerr << "Cannot open library: " << dlerror() << std::endl;
        return false;
    }

    // Reset errors
    dlerror();

    // Load the symbol (function)
    auto initModule = (ModuleInit) dlsym(handle, "initModule");
    const char* dlsym_error = dlerror();
    if (dlsym_error) {
        std::cerr << "Cannot load symbol 'initModule': " << dlsym_error << std::endl;
        dlclose(handle);
        return false;
    }

    initModule();

    // Close the library
    dlclose(handle);

    return true;
}
