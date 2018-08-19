#include <stdio.h>
#include <string.h>

int main ()
{
  char str[80];

  strcpy (str,"Ola! ");
  strcat (str," isso eh so pra dizer ");
  strcat (str,"que estamos ");
  strcat (str,"concatenadas.");
  puts (str);

  return 0;
}
