#include "syscall.h"

void main()
{
    int i;
    char * c;
    for (i = 0; i < 200; i++)
        PrintChar('B');
    ConsolePrint(" endb ");
}