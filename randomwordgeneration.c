#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define num_of_words 5
char s[num_of_words][5];
char buffer[5];
void generate_words(FILE *fp){
    int random,i,num=0,got=0;
    char c;
    srand(time(NULL));
    for(c=getc(fp);c!=EOF;c=getc(fp)){
      if(c='\n'){
        num++;
      }
    }
    for(;;){
      random=rand()%num;
      for(i=0;i<=random;i++){
        if(!feof(fp)){
          fgets(buffer,5,fp);
        }
        else{
          rewind(fp);
        }
      }
      fgets(buffer,5,fp);
      if(strstr(buffer,"\n")!=NULL){
        continue;
      }
      else{
        strcpy(s[got],buffer);
        got++;
      }
      if(got==num_of_words)
        break;
    }
}
void main(){
  FILE *fp;
  int i,j;
  fp=fopen("words_alpha_4letters_new_use.txt","r");
  generate_words(fp);
  fclose(fp);
  for(i=0;i<num_of_words;i++)
  {
    printf("%s\n",s[i]);
  }
  getch();
}
