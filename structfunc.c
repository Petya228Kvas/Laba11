#include <stdio.h>
#include <stddef.h>
#include <wchar.h>
#include "structfunc.h"

void clear(){
    wint_t c;
    while ((c = getwchar()) != L'\n' && c != WEOF) {}
}

void input(struct album *p, int count){
        wprintf(L"Введите информацию про %d альбом\n", count+1);
        fputws(L"Исполнитель: ", stdout);
        fgetws(p->exec, sizeof(p->exec), stdin);
        
        fputws(L"Название альбома: ", stdout);
        fgetws(p->names, sizeof(p->names), stdin);
        
        fputws(L"Жанр: ", stdout);
        fgetws(p->genre, sizeof(p->genre), stdin);
        
        fputws(L"Дата год: ", stdout);
        wscanf(L"%d", &p->year);
        clear();

        fputws(L"Дата месяц: ", stdout);
        wscanf(L"%d", &p->month);
        clear();

        fputws(L"Дата день: ", stdout);
        wscanf(L"%d", &p->day);
        clear();
}                                          

void out(const struct album *p, int count){
    wprintf(L"\nИнформация про альбом %d\n", count+1);
    fputws(L"Исполнитель: ", stdout); fputws(p->exec, stdout);
    fputws(L"Название: ", stdout); fputws(p->names, stdout);
    fputws(L"Жанр: ", stdout); fputws(p->genre, stdout);
    fputws(L"Дата: ", stdout); wprintf(L"%d.%d.%d", p->year, p->month, p->day);
    fputws(L"\n", stdout);
}
