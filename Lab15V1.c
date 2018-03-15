/*
 ============================================================================
 Name        : Lab15V2.c
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




void DecideGrade(StudentData students) 
{
	if (students.score > 90) students.grade = 'X';
	else if (students.score > 80) students.grade = 'B';
	else if (students.score > 65) students.grade = 'C';
	else if (students.score > 50) students.grade = 'D';
	else students.grade = 'F';
	printf("grade is %c\n", students.grade);
}
void Read(StudentData students) 
{
	int i;
	printf("Enter the studentID: ");
	scanf("%d", &students.studentID);
	printf("Enter the name: ");
	scanf("%s", &students.name);
	printf("Enter the score: ");
	scanf("%d", &students.score);
   	DecideGrade(students);
}
int main(void)
 {
	StudentData students;;
	Read(students);
	printf("Again grade is %c\n", students.grade);

	return 0;
}

