/******************************************************************************
* \file      CppStandard.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Cpp Standard definitions
* \details
*
* \see       https://en.wikipedia.org/wiki/C%2B%2B
*            https://en.cppreference.com/w/cpp/preprocessor/replace#Predefined_macros
*            https://github.com/cpredef/predef
******************************************************************************/

#ifndef CPPSTANDARD_H
#define CPPSTANDARD_H		20250318L


#define CPPPRE98	1L

/* official standard 14882:1998 *//* ANSI/ISO C++ */
#define CPP98		199711L

/* official standard 14882:2003 *//* ANSI/ISO C++ *//* small changes */
/* (remains the same as C++98) */
#define CPP03		CPP98

/* official standard 14882:2011 *//* ANSI/ISO C++ */
#define CPP11		201103L

/* official standard 14882:2014 *//* ANSI/ISO C++ */
#define CPP14		201402L

/* official standard 14882:2017 *//* ANSI/ISO C++ */
#define CPP17		201703L

/* official standard 14882:2020 *//* ANSI/ISO C++ */
#define CPP20		202002L

/* official standard 14882:2024 *//* ANSI/ISO C++ */
#define CPP23		202302L


/******************************************************************************
* Example of use
*
* #if defined(__cplusplus) && __cplusplus == CPP11
* ...
* Cpp 11 code
* ...
* #endif
*
*/


#endif /* CPPSTANDARD_H */
