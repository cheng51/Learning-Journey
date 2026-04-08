#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name_list;
    char *tel_list;
} person;

int main() 
{   
    char *name = "Kelly";
    person people[3];

    people[0].name_list = "David";
    people[0].tel_list = "191";

    people[1].name_list = "Kelly";
    people[1].tel_list = "752";

    people[2].name_list = "Bob";
    people[2].tel_list = "742";


   for (int i = 0; i < 3; i++) {
        if (strcmp(people[i].name_list, name) == 0) {
            printf("%s", people[i].tel_list);
            return 0;
        }
   }
   

    return 1;
}