#include <stdio.h>




int main(void) {

  for (int i = 0; i < 10; i++)
  {
    printf("Hello World\n\n");
  }

  char name[20];
  printf("What's your name?\n");
  scanf("%s", name);
  printf("Nice to meet you, %s.\n", name);
 
  int age;
  printf("How old are you?\n");
  scanf("%d", &age);
  printf("Wow! You are %d years old.\n", age);
  
}