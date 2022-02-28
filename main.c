
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char palavra[50];
  
  printf("Digite uma palavra: \n");
  scanf("%s", palavra);
  printf("Palavra digitada foi %s\n\n",palavra);
  system("PAUSE");	
  return 0;
}
