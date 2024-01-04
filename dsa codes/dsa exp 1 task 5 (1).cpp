#include <stdio.h>

// Define a structure to hold name and age
struct Person {
    char name[50];

    int age;

};

int main() {

struct Person people[] = {

{"Rahul", 28},
 {"Manoj", 15},
{"Aarav", 30},

{"Riya", 19}
};

int size = sizeof(people) / sizeof(people[0]);

struct Person *ptr = people;

for (int i = 0; i < size; i++) {
 if (people[i].age <25) {
 printf("Name: %s, Age: %d\n", ptr->name, ptr->age);
}
ptr++;
}
return 0;
}

