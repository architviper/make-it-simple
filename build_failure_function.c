#include<stdio.h>
#include<string.h>
#define max 20
int F[max];

void bff(char p[])
{
	int q,k=0;
	F[0]=F[1]=0;
	for(q=1;p[q]!='\0';q++)
	{
		while(k>0 && (p[k]!=p[q]))
			k=F[k];
		if(p[k]==p[q])
			k++;
		F[q+1]=k;
	}
}

int main()
{
	int i;
	char pattern[max];
	printf("Enter pattern:\n");
	scanf("%s",pattern);
	bff(pattern);
	for(i=0;pattern[i]!='\0';i++)
		printf("%d ",F[i+1]);
}