#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX_LENGTH 5
void main(){
  FILE *fp;
  char word_buffer[MAX_LENGTH],word_to_be_searched[MAX_LENGTH];
  int found=0,no_of_letters;
  printf("Enter the word to be searched : ");
  gets(word_to_be_searched);
  no_of_letters=strlen(word_to_be_searched);
  if(no_of_letters==4)
    fp=fopen("words_alpha_4letters.txt","r");
  else if(no_of_letters==3)
    fp=fopen("words_alpha_3letters.txt","r");
  while(!feof(fp)){
    fscanf(fp,"%s",&word_buffer);
    printf("%d\n",no_of_letters); //it doens't work without this :( plis fix
    if(strcmp(word_buffer,word_to_be_searched)==0){
      found=1;
      fclose(fp);
      break;
    }
  }
  if(found=1)
    printf("Word exists\n");
  else
    printf("Word doesn't exist\n");
  getch();
}
