#include<stdio.h>
#include<stdlib.h>
#include<time.h>
  
  char s[5][4]={'F','O','U','R','D','I','C','E','D','O','L','L','N','O','S','E','P','A','N','T'};
  char a[8][8];
/*int check_right(int h,int k,char s[5][4],int r)
{ int h1=h,k1=k;
  int i;
  int flag=0;
  k++;
  for(i=0;i<3;i++)
  {
     if((a[h][k]!='a' && a[h][k]!=s[r][i+1]) || k<0 || k>5 || h<0 || h>5)
     {
       flag=1; 
     }
     k++;
     
  }
  return flag;
  
}*/  
int check_right(int h,int k,char s[5][4],int r)
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
int check_left(int h,int k,char s[5][4],int r)
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
int check_up(int h,int k,char s[5][4],int r)
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
int check_down(int h,int k,char s[5][4],int r)
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
int check_up_right(int h,int k,char s[5][4],int r)
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
int check_up_left(int h,int k,char s[5][4],int r)
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
int check_down_right(int h,int k,char s[5][4],int r)
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
int check_down_left(int h,int k,char s[5][4],int r)
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
void store_right(int h1,int k1, char s[5][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1++;
    }

}
void store_left(int h1,int k1, char s[5][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1--;
    }

}
void store_up(int h1,int k1, char s[5][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      h1--;
    }

}
void store_down(int h1,int k1, char s[5][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      h1++;
    }

}
void store_up_right(int h1,int k1, char s[5][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1++;h1--;
    }

}
void store_up_left(int h1,int k1, char s[5][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1--;h1--;
    }

}
void store_down_right(int h1,int k1, char s[5][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1++;h1++;
    }

}
void store_down_left(int h1,int k1, char s[5][4],int r)
{ int i;
  for(i=0;i<=3;i++)
    { 
      a[h1][k1]=s[r][i];
      k1--;h1++;
    }

}
generate_matrix()
{
  
  int i,j;
  int h,k;
  int r;
  int random;
  int h1,k1;
  int flagS=0;
  int flagR,flagL,flagU,flagD;
  int flagUR,flagUL,flagDR,flagDL;
   //Initialize eveything to A
  for(i=0;i<8;i++)
  { 
    for(j=0;j<8;j++)
    {
      a[i][j]='a';
    }
  }
  //


  srand(time(NULL));

for(r=0;r<5;r++)
{  flagS=0;

   h=rand() % 8;
   k=rand() % 8;
   h1=h;
   k1=k;
  
  if(a[h][k]=='a')
  {
    flagR = check_right(h,k,s,r);
    //printf("%d\n",flagR);
    flagL = check_left(h,k,s,r);
    //printf("%d\n",flagL);
    flagU = check_up(h,k,s,r);
    //printf("%d\n",flagU);
    flagD = check_down(h,k,s,r);
    //printf("%d\n",flagD);
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
 
  //Display
    for(i=0;i<8;i++)
  { 
    for(j=0;j<8;j++)
    {
      printf("%c\t",a[i][j]);
    }
    printf("\n");
  }


}

void main()
{

  generate_matrix();

}
