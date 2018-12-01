#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StudentData.h"

int main()
{
    StudentData st1;
    st1.bDay = 10;
    st1.bMonth = 11;
    st1.bYear = 1999;
    strcpy(st1.index, "000000");
    strcpy(st1.name, "Adam Pawlot");

    SDPrint(&st1);

    StudentData st2;
    SDCopy(&st2, &st1);
    SDPrint(&st2);

    printf("%hhu, %hhu", (char)SDIndexCompare("000000", &st1), (char)SDNameCompare("Adam Aawlot", &st2));
    return 0;
}
