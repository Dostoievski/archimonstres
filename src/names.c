#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{

  FILE *names_1, names_2;

  names_1 = fopen("names_2.txt", "rw");
  if (names_1 == NULL)
    return EXIT_FAILURE;

  //ssize_t getline(char **lineptr, size_t *n, FILE *stream);

  char* line = NULL;
  ssize_t len = 0;
  ssize_t read = 0;

  ssize_t temp = 0;
  char* content;
  
   // TODO content = gets();
  temp = getline(&line, &len, names_1);
  

  content = fgets(line, temp, names_1);

  char* pch = strtok(temp, " ,.-");
  printf("%s\n", pch);

  // fwrite(

 
  fclose(names_1);
  exit(EXIT_SUCCESS);



}
