#include "main.h"

/**
 * get_flag.c turns on the flags if printf finds a
 * flag modifier in the format string
 * @s is the character that holds the flag specifier
 * @f is the pointer to the struct flags in which they are turned on
 * returns 1 if a flag has been turned on, 0 otherwise
 */

int get_flag(char s, flags_t *f)
{
    int i = 0;
  
    switch (swich)
    {
        case '+':
            f->plus = 1;
            i = 1;
            break;
        case ' ':
            f->space = 1;
            i = 1;
            break;
        case '#':
            f->hash = 1;
            i = 1;
            break;
    }
  
    return (i);
}
