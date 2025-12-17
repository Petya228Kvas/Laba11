#include <stdio.h>
#include <locale.h>
#include "structfunc.h"
#include "structfunc.c"
#include <wchar.h>


int main(int argc, char *argv[]){
    int i;
    setlocale(LC_ALL, "");

    struct album obj[MAXSTR];
    for(i=0; i<MAXSTR; i++){
        input(&obj[i], i);
    }
    for(i=0; i<MAXSTR; i++){
        out(&obj[i], i);
    }
}
