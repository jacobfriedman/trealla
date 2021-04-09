#pragma once

#include <stdio.h>

/*
 *  These relate to similar stdc functions...
 */

extern int readc_utf8(int fd, int *ch);
extern int fgetc_utf8(FILE *fp);
extern int isalpha_utf8(int ch);
extern int isalnum_utf8(int ch);
extern int isspace_utf8(int ch);
extern int isupper_utf8(int ch);
extern int islower_utf8(int ch);
extern const char *strchr_utf8(const char *s, int ch);
extern const char *strrchr_utf8(const char *s, int ch);
extern int toupper_utf8(int ch);
extern int tolower_utf8(int ch);

extern size_t strlen_utf8(const char *s);						// returns #chars
extern size_t substrlen_utf8(const char *s, const char *end);	// returns #chars

/*
 *  These just get/put a memory buffer...
 */

extern int get_char_utf8(const char **src);
extern int peek_char_utf8(const char *src);
extern int put_char_utf8(char *dst, int ch);					// returns #bytes
extern int put_char_bare_utf8(char *dst, int ch);				// returns #bytes
extern int put_len_utf8(int ch);								// returns #bytes
extern int is_char_utf8(const char *src);
extern size_t len_char_utf8(const char *src);					// returns #bytes

/*
 * This allows supplying a getter function...
 */

extern int xgetc_utf8(int(*fn)(), void*);
