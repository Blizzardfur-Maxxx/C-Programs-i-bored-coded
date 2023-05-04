#include <stdlib.h>
#include <stdio.h>


char commandinput[] = "";
c = 1;

int main() {
printf("welcome to balls cmd \n");
while(c = 1){
  logo();
  printf("type a command or program to run: \n");
  scanf("%s", &commandinput);
  system(commandinput);
  }
 return 0;
}

int logo() {
printf("   ____    \n");
printf("  _|___ \\ \n");
printf(" (_) __) | \n");
printf("    |__ <  \n");
printf("  _ ___) | \n");
printf(" (_)____/  \n");                       
}