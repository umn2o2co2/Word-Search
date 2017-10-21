#include <stdio.h>
#include "searchmat.h"


int locate(char word[4], char matrix1[8][8] )
{
int letter_count=0;
int i,j,ans=0,flag=1;

	while(word[letter_count]!='\0')
	{
	    printf("\n%c\t%d\t",word[letter_count],letter_count);
		letter_count++;
		
	}
    letter_count--;
	
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				if(word[0]==matrix1[i][j])
				{
                   // printf("\n%d\n%d\n",i,j);
					ans=find(i,j,letter_count,word,matrix1);

					if(ans==1)
					{
						flag=0;
						break;
					}
				}
			}

			if(flag==0)
				break;
		}

		if(flag==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}

}






int find(int i,int j,int letter_count,char word[4],char matrix1[8][8])
{

	int count,flag=1;
    int point_i,point_j;
	//going down
	count=1;
	point_i=i;
	point_j=j;
	while(count<=letter_count)
	{
		point_i++;
		if(point_i>8)
		{
			flag=0;
			break;
		}
		if(word[count]!=matrix1[point_i][point_j])
		{
			flag=0;
			break;
		}
		count++;
	}
	if(flag==1)
		return 1;


	//going up
	flag=1;
	count=1;
	point_i=i;
	point_j=j;
	while(count<=letter_count)
	{
		point_i--;
		if(point_i<0)
		{
			flag=0;
			break;
		}
		if(word[count]!=matrix1[point_i][point_j])
		{
			flag=0;
			break;
		}
		count++;
	}
	if(flag==1)
		return 1;



	//going right
	flag=1;
	count=1;
	point_i=i;
	point_j=j;
	while(count<=letter_count)
	{
		point_j++;
		if(point_j>8)
		{
			flag=0;
			break;
		}
		if(word[count]!=matrix1[point_i][point_j])
		{
			flag=0;
			break;
		}
		count++;
	}
	if(flag==1)
		return 1;
	

	//going left
	flag=1;
	count=1;
	point_i=i;
	point_j=j;
	while(count<=letter_count)
	{
		point_j--;
		if(point_j<0)
		{
			flag=0;
			break;
		}
		if(word[count]!=matrix1[point_i][point_j])
		{
			flag=0;
			break;
		}
		count++;
	}
	if(flag==1)
		return 1;



	//going diag left up
	flag=1;
	count=1;
	point_i=i;
	point_j=j;
	while(count<=letter_count)
	{
		point_i--;
		point_j--;
	//	printf("\n%d\n%d\n",point_i,point_j);
		if(point_j<0||point_i<0)
		{
			flag=0;
			break;
		}
	//	printf("\n%c,%c  ",word[count],matrix1[point_i][point_j]);
		if(word[count]!=matrix1[point_i][point_j])
		{
		  //  printf("hi");
			flag=0;
			break;
		}
		count++;
	}
	if(flag==1)
		return 1;



//going diag right up
	flag=1;
	count=1;
	point_i=i;
	point_j=j;
	while(count<=letter_count)
	{
		point_i--;
		point_j++;
		if(point_j>8||point_i<0)
		{
			flag=0;
			break;
		}
		if(word[count]!=matrix1[point_i][point_j])
		{
			flag=0;
			break;
		}
		count++;
	}
	if(flag==1)
		return 1;



	//going diag left down
	flag=1;
	count=1;
	point_i=i;
	point_j=j;
	while(count<=letter_count)
	{
		point_i++;
		point_j--;
		if(point_j<0||point_i>8)
		{
			flag=0;
			break;
		}
		if(word[count]!=matrix1[point_i][point_j])
		{
			flag=0;
			break;
		}
		count++;
	}
	if(flag==1)
		return 1;



	//going diag right down
	flag=1;
	count=1;
	point_i=i;
	point_j=j;
	while(count<=letter_count)
	{
		point_i++;
		point_j++;
		if(point_j>8||point_i>8)
		{
			flag=0;
			break;
		}
		if(word[count]!=matrix1[point_i][point_j])
		{
			flag=0;
			break;
		}
		count++;
	}
	if(flag==1)
		return 1;


return 0;

}
