#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include<string.h>
#include "searchmat.h" 
#include "searchdictionary.h" 

#define num_of_words 8

 
  char word[4]; 
  char a[8][8];
  char s[num_of_words][4];
  char buffer[5];

//Generating Random 4 letter Words from file 
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
//

int check_right(int h,int k,char s[num_of_words][4],int r)
{ int h1=h,k1=k;
  int i;
  
  int flag=0;
  k++;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>7 || h<0 || h>7)
     {
       flag=1; 
     }
     k++;
     
  }
  return flag;
  
}
int check_left(int h,int k,char s[num_of_words][4],int r)
{ int h1=h,k1=k;
  int i;
  
  int flag=0;
  k--;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>7 || h<0 || h>7)
     {
       flag=1; 
     }
     k--;
     
  }
  return flag;
  
}
int check_up(int h,int k,char s[num_of_words][4],int r)
{ int h1=h,k1=k;
  int i;
  
  int flag=0;
  h--;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>7 || h<0 || h>7)
     {
       flag=1; 
     }
     h--;
     
  }
  return flag;
  
}
int check_down(int h,int k,char s[num_of_words][4],int r)
{ int h1=h,k1=k;
  int i;
  int flag=0;
  
  h++;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>7 || h<0 || h>7)
     {
       flag=1; 
     }
     h++;
     
  }
  return flag;
  
}
int check_up_right(int h,int k,char s[num_of_words][4],int r)
{ int h1=h,k1=k;
  int i;
  
  int flag=0;
  k++;h--;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>7 || h<0 || h>7)
     {
       flag=1; 
     }
     k++;h--;
     
  }
  return flag;
  
}
int check_up_left(int h,int k,char s[num_of_words][4],int r)
{ int h1=h,k1=k;
  int i;
  
  int flag=0;
  k--;h--;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>7 || h<0 || h>7)
     {
       flag=1; 
     }
     k--;h--;
     
  }
  return flag;
  
}
int check_down_right(int h,int k,char s[num_of_words][4],int r)
{ int h1=h,k1=k;
  int i;
  
  int flag=0;
  k++;h++;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>7 || h<0 || h>7)
     {
       flag=1; 
     }
     k++;h++;
     
  }
  return flag;
  
}
int check_down_left(int h,int k,char s[num_of_words][4],int r)
{ int h1=h,k1=k;
  int i;
  
  int flag=0;
  k--;h++;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>7 || h<0 || h>7)
     {
       flag=1; 
     }
     k--;h++;
     
  }
  return flag;
  
}
void store_right(int h1,int k1, char s[num_of_words][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1++;
    }

}
void store_left(int h1,int k1, char s[num_of_words][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1--;
    }

}
void store_up(int h1,int k1, char s[num_of_words][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      h1--;
    }

}
void store_down(int h1,int k1, char s[num_of_words][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      h1++;
    }

}
void store_up_right(int h1,int k1, char s[num_of_words][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1++;h1--;
    }

}
void store_up_left(int h1,int k1, char s[num_of_words][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1--;h1--;
    }

}
void store_down_right(int h1,int k1, char s[num_of_words][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1++;h1++;
    }

}
void store_down_left(int h1,int k1, char s[num_of_words][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1--;h1++;
    }

}

void generate_matrix()
{
  
  int i,j;
  int h,k;
  int r;
  int random;
  int h1,k1;
  int flagS=0;
  int flagR,flagL,flagU,flagD;
  int flagUR,flagUL,flagDR,flagDL;
   //Initialize eveything to a
  for(i=0;i<8;i++)
  { 
    for(j=0;j<8;j++)
    {
      a[i][j]='a';
    }
  }
  //


  srand(time(NULL));

for(r=0;r<num_of_words;r++)
{  flagS=0;

   h=rand() % 8;
   k=rand() % 8;
   h1=h;
   k1=k;
  
  if(a[h][k]=='a')
  {
    flagR = check_right(h,k,s,r);
    flagL = check_left(h,k,s,r);
    flagU = check_up(h,k,s,r);
    flagD = check_down(h,k,s,r);
    flagUR = check_up_right(h,k,s,r);
    flagUL = check_up_left(h,k,s,r);
    flagDR = check_down_right(h,k,s,r);
    flagDL = check_down_left(h,k,s,r);
 

   random=rand()%8;
   if(random==0 && flagR==0 )
   {
     store_right(h1,k1,s,r);
     flagS=1;
   }
   else if(random==1 && flagL==0 )
   {
     store_left(h1,k1,s,r);
      flagS=1;
   }
   else if(random==2 && flagU==0)
   {
     store_up(h1,k1,s,r);
     flagS=1;
   }
   else if(random==3 && flagD==0)
   {
    store_down(h1,k1,s,r);
     flagS=1;
   }
   else if(random==4 && flagUR==0 )
   {
     store_up_right(h1,k1,s,r);
      flagS=1;
   }
   else if(random==5 && flagUL==0)
   {
     store_up_left(h1,k1,s,r);
     flagS=1;
   }
   else if(random==6 && flagDR==0)
   {
    store_down_right(h1,k1,s,r);
     flagS=1;
   }
    else if(random==7 && flagDL==0)
   {
    store_down_left(h1,k1,s,r);
     flagS=1;
   }
   if(flagS==0)
   { if(flagR==0)
     {
      store_right(h1,k1,s,r);
      flagS=1;
     }
     else if(flagL==0)
     {
      store_left(h1,k1,s,r);
      flagS=1;
     }
     else if(flagU==0)
     {
      store_up(h1,k1,s,r);
      flagS=1;
     }
     else if(flagD==0)
     {
      store_down(h1,k1,s,r);
      flagS=1;
     }
     else if(flagUR==0)
     {
      store_up_right(h1,k1,s,r);
      flagS=1;
     }
     else if(flagUL==0)
     {
      store_up_left(h1,k1,s,r);
      flagS=1;
     }
     else if(flagDR==0)
     {
      store_down_right(h1,k1,s,r);
      flagS=1;
     }
      else if(flagDL==0)
     {
      store_down_left(h1,k1,s,r);
      flagS=1;
     }
   } 
  }  
}  
 


}

void main()
{ 
  FILE *fp;
  int i,j;
  int b;
  int bye=0;
  int len=3;
  int is_word_in_matrix;
  char alpha[26]={'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
  fp=fopen("words_alpha_4letters_new_use.txt","r");
  generate_words(fp);
  fclose(fp);
  generate_matrix();
   //Test
     for(i=0;i<8;i++)
  { 
    for(j=0;j<8;j++)
    {
      printf("%c  ",a[i][j]);
    }
    printf("\n");
  }
  printf("\n\n\n\n");
  //
  for(i=0;i<8;i++)
  { 
    for(j=0;j<8;j++)
    {
      if(a[i][j]=='a')
      {
        b=rand()%26;
        a[i][j]=alpha[b];
      }
    }
   
  }
 

    //Display
    for(i=0;i<8;i++)
  { 
    for(j=0;j<8;j++)
    {
      printf("%c  ",a[i][j]);
    }
    printf("\n");
  }
 
 while(bye==0)
 { 
   do
   { printf("Enter a 3-letter / 4-letter Word:");
    scanf("%s",word);
    len=strlen(word);
     for(i=0;i<len;i++)
    {word[i]=toupper(word[i]);}
   }while(len<3 || len>4);
  is_word_in_matrix=locate(word,a); 
  if(is_word_in_matrix==1)
  {printf("\nWord Found in Matrix\n");
   searchdictionary(word);
  } 
  else{printf("\nWord Not in Matrix\n");}
  printf("Press 0 to try another word OR Press 1 to Stop: ");
  scanf("%d",&bye);
 }

}
