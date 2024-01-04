#include <stdio.h>

// Define a structure to hold name and age

struct Person {
	
char name[50];

int age;

};

int main() {

struct Person people[] = {
{"Rahul", 28},
{"Manoj",15},
{"Aarav" , 30},
{"Riya", 19},

};

int size= sizeof (people)/sizeof(people[0]);

for (int i=0; i < size; i++) {
    if (people[i].age >= 25) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
        }

    }
 return 0;
}
