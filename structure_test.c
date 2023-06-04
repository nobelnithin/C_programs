#include <stdio.h>
#include <conio.h>

struct fish{
    const char *name;
    const char *species;
    int teeth;
    int age;
};

 void main(){
     struct fish goldy={
         "goldy",
         "Piranha",
         55,
         5
     };
     printf ("%s",goldy.name);
 }

