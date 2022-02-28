
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char palavra[50];
  
  printf("Digite uma palavra: \n");
  scanf("%s", palavra);
  printf("\nPalavra digitada foi %s\n\n",palavra);
  
  // Mudando a primeira letra da string
  palavra[0] = 'L';
  printf("Palavra com nova inicial -> %s\n\n",palavra);
  system("PAUSE");	
  return 0;
}
