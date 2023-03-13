#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
   unsigned int n;
   char *str;

   str = malloc((size+1)* sizeof(char));
   if(str == NULL)
   {
	return (NULL);
   }
   n=0;
   while (n<size)
   {
      str[n] = c;
      n++;
   }
   str[n]='\0';
   return (str);
}
int main(void)
{
   char *s;
   s=create_array(5,'H');
   printf("%s\n",s);
   return (0);
}
