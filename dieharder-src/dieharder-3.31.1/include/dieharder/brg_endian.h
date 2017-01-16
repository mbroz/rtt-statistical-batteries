/*
 ---------------------------------------------------------------------------
 Copyright (c) 2003, Dr Brian Gladman, Worcester, UK.   All rights reserved.

 LICENSE TERMS

 The free distribution and use of this software in both source and binary
 form is allowed (with or without changes) provided that:

   1. distributions of this source code include the above copyright
      notice, this list of conditions and the following disclaimer;

   2. distributions in binary form include the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other associated materials;

   3. the copyright holder's name is not used to endorse products
      built using this software without specific written permission.

 ALTERNATIVELY, provided that this notice is retained in full, this product
 may be distributed under the terms of the GNU General Public License (GPL),
 in which case the provisions of the GPL apply INSTEAD OF those given above.

 DISCLAIMER

 This software is provided 'as is' with no explicit or implied warranties
 in respect of its properties, including, but not limited to, correctness
 and/or fitness for purpose.
 ---------------------------------------------------------------------------
 Issue 16/08/2006
*/

#define IS_BIG_ENDIAN      4321 /* byte 0 is most significant (mc68k) */
#define IS_LITTLE_ENDIAN   1234 /* byte 0 is least significant (i386) */

/*
 * Endianness is (now) set in configure.ac, using what is supposedly the
 * right/portable way to determine byte order on all platforms.  This test
 * (and the derived makefiles) pass LITTLE_ENDIAN in as 1 (true) or 0
 * (false).  We pass this in the defines in Makefile.am, test here, and
 * set PLATFORM_BYTE_ORDER without any of the full on any GBT-supporting
 * platform, we hope.   rgb, for dieharder version.
 */
#ifdef LITTLE_ENDIAN
#  define PLATFORM_BYTE_ORDER IS_LITTLE_ENDIAN
#else
#  define PLATFORM_BYTE_ORDER IS_BIG_ENDIAN
#endif
