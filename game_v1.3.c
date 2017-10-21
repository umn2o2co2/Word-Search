#include <stdio.h>


char matrix1[4][4];
char word[4];
void locate(char word[4]);
int find(int point_i,int point_j,int letter_count,char word[4]);


void main()
{
	int i,j,flag;
	

	/*
	Code for generating the matrix of words
	*/

	/*matrix1[0][0]='a';
	matrix1[0][1]='b';
	matrix1[0][2]='c';
	matrix1[0][3]='d';

	matrix1[1][0]='e';
	matrix1[1][1]='f';
	matrix1[1][2]='g';
	matrix1[1][3]='h';

	matrix1[2][0]='i';
	matrix1[2][1]='j';
	matrix1[2][2]='k';
	matrix1[2][3]='l';

	matrix1[3][0]='m';
	matrix1[3][1]='n';
	matrix1[3][2]='o';
	matrix1[3][3]='p';


	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%c\t",matrix1[i][j]);
		}
		printf("\n");
	}

*/

	printf("Enter a word:");
	gets(word);
	
	

	flag=locate(word);

	if(flag==1)
		{
			printf("found");
		}
		else
		{
			printf("not found");
		}


}

int locate(char word[4])
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
					ans=find(i,j,letter_count,word);

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
			return 0
		}

}






int find(int i,int j,int letter_count,char word[4])
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