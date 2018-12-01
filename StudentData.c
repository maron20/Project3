#include "StudentData.h"
#include <string.h>
#include <stdio.h>

StudentData* SDCopy(StudentData* destination, const StudentData* source)
{
    if(destination && source)
	{
		strcpy(destination->name, source->name);
		strcpy(destination->index, source->index);
    	destination->bDay = source->bDay;
    	destination->bMonth = source->bMonth;
    	destination->bYear = source->bYear;
	}
    return destination;
}

bool SDIndexCompare(const char index[], const StudentData* student) /** true - equal, false - different / non-existent*/
{
	if(student)
		return strcmp(index, student->index) == 0;
	return false;
}

bool SDNameCompare(const char name[], const StudentData* student) /** true - equal, false - different / non-existent*/
{
	if(student)
		return (strcmp(name, student->name) == 0);
	return false;
}

void SDPrint(const StudentData* student)
{
	if(student)
		printf("%s %hhu-%hhu-%hu %s\n", student->name, student->bDay, student->bMonth, student->bYear, student->index);
}
