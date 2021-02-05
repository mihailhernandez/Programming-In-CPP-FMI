#pragma once

#include <iostream>

#define PI 3.14159
#define MAX(a, b) (a > b ? a : b)

#undef PI
#undef MAX(a, b)

#define TABLE_SIZE 10

#if TABLESIZE > 10
#undef TABLE_SIZE
#define TABLE_SIZE 10
#endif

#define FILE_NAME "preprocessor.h"
#line 777 FILE_NAME