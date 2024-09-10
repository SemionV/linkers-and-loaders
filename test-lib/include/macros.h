#pragma once

#define API_SYMBOL_EXPORT __attribute__((__visibility__("default")))
#define API extern "C" API_SYMBOL_EXPORT