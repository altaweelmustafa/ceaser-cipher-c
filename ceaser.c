#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* enc(int, char*);
char* dec(int, char*);

int main()
{
  int choice = 0;
  while(choice != -1)
  {
    char str[100];
    printf("Please enter your message:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Please enter your key (digit):\n");
    int k;
    scanf("%d",&k);

    printf("Select your option:\n1. Encryption\n2. Decryption\n3. Exit.");
    scanf("%d", &choice);

    if(choice == 1)
    {
      char* encrypted = enc(k, str);
      printf("Encypted: %s\n", encrypted);
      free(encrypted);
    } 
    else if (choice == 2)
    {
      char* decrypted = dec(k, str);
      printf("Decrypted: %s\n", decrypted);
      free(decrypted);
     
    }else if (choice == 3){
      choice = -1;
    }
  }
  return 0;
}

char* enc(int s, char* str)
{
  int len = strlen(str);
  
  char* res = malloc(len + 1);
  for(int i = 0; i < len; i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z') 
      res[i] = ((str[i] - 'a' + s) % 26) + 'a';
    else if(str[i] >= 'A' && str[i] <= 'Z')
      res[i] = ((str[i] - 'A' + s) % 26) + 'A';
    else
      res[i] = str[i];
  }
  res[len] = '\0';
  return res;
} 

char* dec(int s, char* str)
{
  int len = strlen(str);
  char* res = malloc(len + 1);
  
  for(int i = 0;i < len;i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
      res[i] = ((str[i] - 'a' - s + 26) % 26) + 'a';
    else if(str[i] >= 'A' && str[i] <= 'Z')
      res[i] = ((str[i] - 'A' - s + 26) % 26) + 'A';
    else
      res[i] = str[i];
  }
  res[len] = '\0';
  return res;
}
