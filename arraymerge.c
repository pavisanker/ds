#include<stdio.h>
int main()
{
 	int a[100],b[100],c[200],i,i1,j,j1,k,n,m,t,p;
 	printf("Enter the first array limit :");
 	scanf("%d",&n);
 	printf("\nEnter the first array numbers\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 	for(i=0;i<n;i++)
 	{
 		for(i1=i+1;i1<n;i1++)
 		{
 			if(a[i]>a[i1])
 			{
 				t=a[i];
 				a[i]=a[i1];
 				a[i1]=t;

 			}
 		}
	}
 	for(i=0;i<n;i++)
 	{
 		printf("%d\t",a[i]);
 	}
 	printf("\nEnter the second array limit :");
	scanf("%d",&m);
 	printf("\nEnter the second array numbers\n");
 	for(j=0;j<m;j++)
 	{
 		scanf("%d",&b[j]);
 	}
 	for(j=0;j<m;j++)
 	{
 		for(j1=j+1;j1<m;j1++)
 		{
 			if(b[j]>b[j1])
 			{
	 			p=b[j];
 				b[j]=b[j1];
 				b[j1]=p;
 			}
 		}
	}
	for(j=0;j<m;j++)
 	{
 		printf("%d\t",b[j]);
 	}
 	i=j=k=0;
 	while(i<n&&j<m)
 		if(a[i]>=b[j])
 			c[k++]=b[j++];
 		else
 			c[k++]=a[i++];
 	while(i<n)
 		c[k++]=a[i++];
 	while(j<m)
 		c[k++]=b[j++];


 	printf("\nAfter merging\n");
 	for(k=0;k<n+m;k++)
 	{
		printf("%d\t",c[k]);
 	}

}
