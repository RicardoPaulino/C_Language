
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
  
  strcpy(copia_2,copia_1);
  printf("Copia #2 manual da palavra -> %s\n\n",copia_2);
  
  
    
  // Invertendo uma string
  char str[20] = "Linguagem C";
  char c;
  int x, tam = strlen(str);
  for(x = 0; x < tam/2; x++)
  {
        c = str[x];
        str[x] = str[tam-1-x];
        str[tam-1-x] = c;      
  } 
  printf("str -> %s\n\n", str);
  
  printf("--------------- Address Memory ---------------\n\n");
  printf("Address palavra = %d\n", &palavra);
  printf("Address copia_1 = %d\n", &copia_1);
  printf("Address copia_2 = %d\n", &copia_2);
  printf("Address str = %d\n\n", &str);
  system("PAUSE");	
  return 0;
}
