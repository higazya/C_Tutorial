/*
 ============================================================================
 Name        : access_strct_ptr.c
 Author      : Abdelrahman Higazy
 Version     : 1
 Copyright   : AMIT Learning
 Description : This program is part of C Course in AMIT Learning
 Section : 
 
 ========================================================
 Implement a program that demonstrates a Bubble sort

 -Case study:  Structure
 
 ============================================================================
*/

#include<stdio.h>
#include<string.h>
struct Player
{
    char name[10]; // Address of the first element is the address of the structure
    char breed[10];
    int age;
    char color[10];
   
};

int main()
{
	
    struct Player my_Player = {"Messi", "BullPlayer", 23, "white"};
    struct Player *ptr_Player;
    ptr_Player = &my_Player;

    printf("Player's name: %s\n", ptr_Player->name);
    printf("Player's breed: %s\n", ptr_Player->breed);
    printf("Player's age: %d\n", ptr_Player->age);
    printf("Player's color: %s\n", ptr_Player->color);

    // changing the name of Player from tyke to jack
    
    //strcpy(ptr_Player->name, "jack");
    my_Player.name[0]= 'A';
    my_Player.name[1]= 'l';
    my_Player.name[2]= 'd';
    ptr_Player->name[3] = 'z';
   // my_Player.name[3]= 'x';

    // increasing age of Player by 1 year
    ptr_Player->age++;

    printf("Player's new name is: %s\n", ptr_Player->name);
    printf("Player's age is: %d\n", ptr_Player->age);
    
    
    char *ptr_access;
   // ptr_access = &my_Player.name[0];
    ptr_access = (char*)&my_Player;   
        
    ptr_access[0] = 'M';
    ptr_access[1] = 'O';
    ptr_access[2] = 'S';
    ptr_access[3] = 'A';
    ptr_access[4] = 'l';
    ptr_access[5] = 'h';
      
    
    printf("%c\n", ptr_access[0]);
    printf("%c\n", ptr_access[1]);
    printf("%c\n", ptr_access[2]);
    printf("%c\n", ptr_access[3]);
    printf("%c\n", ptr_access[4]);
    printf("%c\n", ptr_access[5]);   
    
   printf("age is %d\n", ptr_access[20]); // serializer 
   printf("Player's new name is: %s\n", ptr_Player->name);
   printf("sizeof(my_Player):%d\n", sizeof(my_Player));   
    

    // signal to operating system program ran fine
    return 0;
}
