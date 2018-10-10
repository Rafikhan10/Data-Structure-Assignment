#include<stdio.h>

int main()
{
int a[10];
int i, n, sum;
sum =0;

printf("How many element you want  \n");
scanf("%d", &n);

printf("enter element one by one \n");


for(i = 0; i<n; i++)
{

scanf("%d", &a[i]);

}

printf("The Even Number you entered\n");

for(i = 0; i<n; i++)
{   if(a[i]%2==0)
	{sum = sum + a[i];
	printf("%d ", a[i]);
	}
}
printf("\nSum of your Even Number= %d\n",sum);

return 1;
}
