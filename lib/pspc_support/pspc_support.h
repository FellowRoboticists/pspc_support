// pspc_support Arduino library
//
// Copyright (c) 2014 Dave Sieh
// See LICENSE.txt for details.

#ifndef _pspc_support_h_
#define _pspc_support_h_

#define MAX_CHAR_LENGTH 80

extern char pspc_buffer[];

#define P(str) (strcpy_P(pspc_buffer, PSTR(str)), pspc_buffer)

#endif
