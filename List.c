#include "List.h"
#include <stdio.h>
#include <stdlib.h>

Student* Add(const StudentData* studentData, Student** listHead)
{
	Student* newStudent = (Student*)malloc(sizeof(Student));
	if(newStudent)
	{
		SDCopy(&(newStudent->studentData), studentData);
		if(!(*listHead))
		{
			newStudent->next = NULL;
			(*listHead) = newStudent;
		}
		else
		{
			newStudent->next = (*listHead)->next;
			(*listHead)->next = newStudent;
		}
	}
	return newStudent;
}

void DeleteList(Student** listHead)
{
	while(*listHead)
	{
		Student* temp = *listHead;
		*listHead = (*listHead)->next;
		free(temp);
	}
}

void Remove(const char index[], Student** listHead)
{

}

void FindIndex(const char index[], Student** listHead)
{

}

void FindName(const char name[], Student** listHead)
{

}
