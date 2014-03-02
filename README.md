pspc_support Arduino Library
=======================

This library provides support for putting strings into PROGMEM in a
reasonably elegant way.

    #include <pspc_support.h>

    ...

    // Instead of the following:
    String.println("A string");

    // You can use the following
    String.println(P("A string"));

    // With the macro, the string won't take up valuable SRAM.

More PROGMEM support may be added to this library in the future, 
but for the moment, this should be enough to help out some.

Copyright
=========
Copyright (c) 2014 Dave Sieh

See LICENSE.txt for details.

