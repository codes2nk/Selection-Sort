#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void Input(int *,int);
void Display(int *,int);
void SelectionSort(int *,int);
int main()
{
	int a[100];
	Input(a,100);
	Display(a,100);
	SelectionSort(a,100);
	Display(a,100);
}

void Input(int *p,int s)
{
	int i;
	printf("Random 100 no. of elements  has been taken in range ( 0-1000 ):\n");
	srand(getpid());
	for(i=0;i<s;i++)
		p[i]=rand()%1001;
}


void Display(int *p,int s)
{
	int i;
	for(i=0;i<s;i++)
		printf("%d ",p[i]);
	printf("\n");
}

void SelectionSort(int *p,int s)
{
	int i,j,temp;
	for(i=0;i<s-1;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}


	}
	printf("Selection sorted elements are :\n");
}


