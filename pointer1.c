#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
 int age;
 char name[];

}Node;


int main()
{
   Node *Liming=malloc(sizeof(Node));
   int *a=malloc(sizeof(int));
   *a=5;
   Liming->age=19;
   strcpy(Liming->name,"Liming");
   printf("%d %s %d",Liming->age,Liming->name,*a);
}
