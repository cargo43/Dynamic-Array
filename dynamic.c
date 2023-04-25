#include <stdio.h>
#include <stdlib.h>

int main()
{
	int*ptr;
	int n,i;
	scanf("%d",&n);
	printf("Enter number of elements: %d\n ");
	ptr=(int*)malloc(n,sizeof(int));
	
	if(ptr==NULL)
	{
	printf("unable to locate memory\n ");
	exit (0);	
	}
	

else
{
	printf("memory allocated using malloc()function\n");
}
for(i=0;i<n;++i)
{
	ptr[i]=i+1;
}
printf("The elements of the array are: \n");
for(i=0;i<n;++i)
{
	printf("%d",ptr[i]);
}
return 0;
}
