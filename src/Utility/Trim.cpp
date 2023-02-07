///////////////////////////////////////////////////////////////////////////////
//         University of Hawaii, College of Engineering
//         ee205_animal_farm - EE 205 - Spr 2023
//
/// General string-trimming functions
///
/// There are *so many ways* to implement string trimming...
///
///   - Maximize clarity and understandability
///   - Maximize efficiency
///   - Use advanced C++ features
///
/// This implementation is designed to try to balance all three.
///
/// @file    Trim.cpp
/// @author  @todo yourName <@todo yourMail@hawaii.edu>
///////////////////////////////////////////////////////////////////////////////

#include <string.h>

#include "Trim.h"


/// @see https://en.cppreference.com/w/cpp/string/byte/isspace
/// @see https://en.cppreference.com/w/cpp/string/basic_string/substr
extern char* trim_left( char inString[] ) {
   return inString;
}


/// @see https://en.cppreference.com/w/cpp/string/byte/isspace
/// @see https://en.cppreference.com/w/cpp/string/basic_string/substr
extern char* trim_right( char inString[] ) {
   return inString;
}


/// This trim function does not modify the interior of the string
///
/// @see https://en.cppreference.com/w/cpp/string/byte/isspace
/// @see https://en.cppreference.com/w/cpp/string/basic_string/substr
extern char* trim( char inString[] ) {
   return inString;
}


/// This function does the following:
///
///    - Trim the leading whitespace
///    - Trim trailing whitespace
///    - Replace consecutive whitespace characters inside the string with
///      a single `" "`
extern char* trim_in( char inString[] ) {
   return inString;
}
