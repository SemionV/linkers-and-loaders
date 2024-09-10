#pragma once

#include <dory/genericService.h>

extern template class GenericService<int>;
using ServiceC = GenericService<int>;
