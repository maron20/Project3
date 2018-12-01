#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include "StudentData.h"

struct Student{
 StudentData studentData;
 struct Student* next;
};
typedef struct Student Student;

Student* Add(const StudentData* studentData, Student** listHead);
void Remove(const char index[], Student** listHead);
void DeleteList(Student** listHead);

void FindIndex(const char index[], Student** listHead);
void FindName(const char name[], Student** listHead);

#endif // LIST_H_INCLUDED
