#include<stdio.h>
//#include<conio.h>
#include<string.h>
#include "searchdictionary.h"
#define MAX_LENGTH 5

void searchdictionary(char word_to_be_searched[4])
{
  FILE *fp;
  char word_buffer[MAX_LENGTH];
  int found=0,no_of_letters;
 // printf("Enter the word to be searched : ");
 // gets(word_to_be_searched);
  no_of_letters=strlen(word_to_be_searched);
  if(no_of_letters==4)
    fp=fopen("words_alpha_4letters_new_use.txt","r");
  else if(no_of_letters==3)
    fp=fopen("words_alpha_3letters.txt","r");
  while(!feof(fp))
  {
    fscanf(fp,"%s",word_buffer);
    if(strcmp(word_buffer,word_to_be_searched)==0)
    {
        found=1;
        fclose(fp);
        break;
     
    }
    
  }
  if(found==1)
    printf("Word exists\n");
  else
    printf("Word doesn't exist\n");
  //getch();
}
