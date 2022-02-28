
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  char palavra[50];
  
  printf("Digite uma palavra: \n");
  gets(palavra);
  printf("\nPalavra digitada foi %s\n\n",palavra);
  
  // Copiar o conteúde de uma string para outra manualmente
  char copia_1[50];
  int i;
  for(i = 0; i < 50; i++)
        copia_1[i] = palavra[i];      
  copia_1[i] = "\0";
  printf("Copia #1 manual da palavra -> %s\n\n",copia_1);
  
  // Copiar o conteúdo de uma string utilizando strcpy
  char copia_2[60];
  
  strcpy(copia_2, "alguma coisa digitada");
  printf("Copia #2 manual da palavra -> %s\n\n",copia_2);
  
  printf("--------------- Address Memory ---------------\n\n");
  printf("Address palavra = %d\n", &palavra);
  printf("Address copia_1 = %d\n", &copia_1);
  printf("Address copia_2 = %d\n", &copia_2);
  
   char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
 
  system("PAUSE");	
  return 0;
}
