#pragma once

#include <iostream>

#define PI 3.14159                        // define a macro for the constant PI
#define MAX(a, b) (a > b ? a : b)         // define a function macro with two variables 'a' and 'b'

#undef PI                                 // undefine the macro for the constant PI
#undef MAX(a, b)                          // undefine the function macro with two variables 'a' and 'b'

#define TABLE_SIZE 10                     // define a new macro for table size with 10

#if TABLESIZE > 10                        // if the table size macros is larger than 10
#undef TABLE_SIZE                         // undefine the table mactro
#define TABLE_SIZE 10                     // define it again with a new constant
#endif                                    // end the if statement

#define FILE_NAME "preprocessor.h"
#line 777 FILE_NAME


// header guard
#ifndef SOME_HEADER_GUARD_WITH_UNIQUE_NAME 
#define SOME_HEADER_GUARD_WITH_UNIQUE_NAME 

#endif
// end of header guard