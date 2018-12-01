#ifndef STUDENTDATA_H_INCLUDED
#define STUDENTDATA_H_INCLUDED

#include <stdbool.h>

#define NAME_LEN 50
#define INDEX_LEN 6

struct StudentData{
 char name[NAME_LEN + 1];
 char index[INDEX_LEN + 1];
 unsigned char bDay;
 unsigned char bMonth;
 unsigned short bYear;
};
typedef struct StudentData StudentData;

StudentData* SDCopy(StudentData* destination, const StudentData* source);
bool SDIndexCompare(const char index[], const StudentData* student);
bool SDNameCompare(const char name[], const StudentData* student);
void SDPrint(const StudentData* student);

#endif // STUDENTDATA_H_INCLUDED
