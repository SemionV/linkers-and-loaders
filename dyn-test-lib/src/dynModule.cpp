#include <iostream>
#include <dory/service.h>
#include "dynModule.h"

API bool initModule()
{
    std::cout << "Init Module\n";

    auto service = ServiceC();
    auto result = service.add(1, 2);
    std::cout << "service.add: " << result << "\n";

    return true;
}