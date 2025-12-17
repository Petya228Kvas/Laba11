#include <stddef.h>
#ifndef STRUCT
#define STRUCT
#define MAXSTR 10
#define MAXNAME 50

struct album {
    wchar_t exec[MAXNAME];
    wchar_t names[MAXNAME];
    wchar_t genre[MAXNAME];
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

void input(struct album *p, int count);
void out(const struct album *p, int count);
void clear();
#endif
