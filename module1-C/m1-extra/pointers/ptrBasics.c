#include <stdio.h> 

void printAge(int *pAge) {

   printf("\nadd of age: %p\n", pAge);
   printf("age: %d", *pAge);

}

int main() {
   
   int age = 21;
   int *pAge = &age;

   printf("address of age: %p\n", &age);
   printf("value of pAge: %p\n\n", pAge);

   printf("size of age: %d\n", sizeof(age));
   printf("size of pAge: %d\n\n", sizeof(pAge));

   printf("value of age: %d\n", age);
   printf("value at stored address: %d\n", *pAge); //derefrencing

   printAge(pAge);

   return 0;
}