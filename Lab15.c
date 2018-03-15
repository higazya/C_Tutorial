/*
 ============================================================================
 Name        : Lab15V1.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : "Functions"
 
 ========================================================
 Implement a program that use structure
  
 ============================================================================
*/

#include <stdio.h>

#define NUM_STUDENTS 20

typedef struct student
{
	int studentID;
	char name[30];
	int score;
	char grade;
	
}StudentData;

void Read(StudentData students) 
{
	int i;
//	for (i = 0; i < NUM_STUDENTS; i++)
	 {
		printf("Enter the studentID: ");
		scanf("%d", &students.studentID);
		printf("Enter the name: ");
		scanf("%s", &students.name);
		printf("Enter the score: ");
		scanf("%d", &students.score);
   	}
}


void DecideGrade(StudentData students) 
{
	int i;
//	for (i = 0; i < NUM_STUDENTS; i++) 
		{
			if (students.score > 90) students.grade = 'X';
			else if (students.score > 80) students.grade = 'B';
			else if (students.score > 65) students.grade = 'C';
			else if (students.score > 50) students.grade = 'D';
			else students.grade = 'F';
		}
		printf("grade is %c\n", students.grade);
}
int main(void)
 {
	StudentData students;;
	int i;
	Read(students);
	DecideGrade(students);
	printf("Again grade is %c\n", students.grade);
	return 0;
}

