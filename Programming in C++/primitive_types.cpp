// TABLES OF C++ PRIMITIVE TYPES

// Character types (symbols)
// |          Type             |      variable name       |      bytes     |                  range                |            alternative definitions            |
// |                           |                          |                |                                       |                                               |
      signed char               singed_char;            //|        1       |               -128 to 127             |                      char                     |
      unsigned char             unsigned_char;          //|        1       |                 0 to 255              |                       -                       |
      wchar_t                   wide_char;              //|        2       |               0 to 65,535             |                       -                       |
      char16_t                  signed_two_byte_char;   //|        2       |             -32,768 to 32,767         |                       -                       |
      char32_t                  signed_four_byte_char;  //|        4       |     -2,147,483,648 to 2,147,483,647   |                       -                       |


// Real number types
// |          Type             |      variable name       |      bytes     |                  range                |            alternative definitions            |
// |                           |                          |                |                                       |                                               |
      float                     signed_float;           //|        4       |                                       |                       -                       |
      double                    signed_double;          //|        8       |                                       |                       -                       |
      long double               signed_long_double;     //|       16       |                                       |                       -                       |


// Integer types
// |          Type             |      variable name       |      bytes     |                  range                |            alternative definitions            |
// |                           |                          |                |                                       |                                               |
      signed short int          signed_short_int;       //|        2       |           -32,768 to 32,767           |               short / short int               |
      unsigned short int        unsigned_short_int;     //|        2       |               0 to 65,535             |               unsigned short                  |
      signed int                signed_regular_int;     //|        4       |     -2,147,483,648 to 2,147,483,647   |                     int                       |
      unsigned int              unsigned_regualar_int;  //|        4       |           0 to 4,294,967,295          |                      -                        |
      signed long int           signed_long_int;        //|        8       |     -2,147,483,648 to 2,147,483,647   |                long int / long                |
      unsigned long int         unsigned_long_int;      //|        8       |           0 to 4,294,967,295		   |                  unsigned long                |
      signed long long int      signed_long_long_int;   //|       16       |           -(2^63) to (2^63)-1         |            long long int / long long          |
      unsigned long long int    unsgined_long_long_int; //|       16       |    0 to 18,446,744,073,709,551,615    |               unsigned long long              |


// Boolean types
// |          Type             |      variable name       |       bits     |                  range                |            alternative definitions            |
// |                           |                          |                |                                       |                                               |
      bool                      unsigned_bool;          //|        1       |                  0 to 1               |                       -                       |