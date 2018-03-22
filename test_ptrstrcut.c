#include<stdio.h>
#include<string.h>


struct dog
{
    char name[10];
    char breed[10];
    int age;
    char color[10];
};

int main()
{
	
    struct dog my_dog = {"tyke", "Bulldog", 5, "white"};
    struct dog *ptr_dog;
    ptr_dog = &my_dog;

    printf("Dog's name: %s\n", ptr_dog->name);
    printf("Dog's breed: %s\n", ptr_dog->breed);
    printf("Dog's age: %d\n", ptr_dog->age);
    printf("Dog's color: %s\n", ptr_dog->color);

    // changing the name of dog from tyke to jack
    
    //strcpy(ptr_dog->name, "jack");
    my_dog.name[0]= 'A';
    my_dog.name[1]= 'l';
    my_dog.name[2]= 'd';
    ptr_dog->name[3] = 'z';
   // my_dog.name[3]= 'x';

    // increasing age of dog by 1 year
    ptr_dog->age++;

    printf("Dog's new name is: %s\n", ptr_dog->name);
    printf("Dog's age is: %d\n", ptr_dog->age);
    
    
    char *ptr_access;
    ptr_access = &my_dog.name[0];
    ptr_access[0] = 'M';
    ptr_access[1] = 'A';
    ptr_access[2] = 'N';
    ptr_access[3] = 'Y';
      
    
    printf("%c\n", ptr_access[0]);
    printf("%c\n", ptr_access[1]);
    printf("%c\n", ptr_access[2]);
    printf("%c\n", ptr_access[3]);
	
     printf("Dog's new name is: %s\n", ptr_dog->name);
    
    

    // signal to operating system program ran fine
    return 0;
}
