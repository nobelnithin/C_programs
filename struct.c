#include <stdio.h>
#include <conio.h>

typedef struct {
    const char *name;
	const char *species;
	int age;
}turtle;

void birthday(turtle t){
     t.age=t.age+1;
	 t.name="nithin";
	 printf("\nname: %s\n",t.name);
}
 
void main(){
   turtle myrtle = {"Myrtle","Leather-Back sea turtle",99};
   printf("\nname: %s\n",myrtle.name);
   birthday(myrtle);
   printf("\nname: %s\n",myrtle.name);
}