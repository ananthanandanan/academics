#include<stdio.h>
#include<limits.h>

void Btrans(int a[][20],int n,int m,int k,int limit1a,int limit1b,int limit0a,int limit0b)
{
	int l=0,i=0,j=0,count=0,arr[20][20];
	for(l=0;l<k;l++)
	{
		printf("After %d iteration:\n",l+1);
		int arr[20][20];;
		for(i=1;i<n-1;i++)
		{
			
			for(j=1;j<m-1;j++)
			{
				
				count=0;
				if(a[i][j]==1)
				{
					if(a[i+1][j]==1)
						count++;
					if(a[i-1][j]==1)
						count++;
					if(a[i][j+1]==1)
						count++;
					if(a[i][j-1]==1)
						count++;
					if(a[i-1][j-1]==1)
						count++;
					if(a[i-1][j+1]==1)
						count++;
					if(a[i+1][j-1]==1)
						count++;
					if(a[i+1][j+1]==1)
						count++;
					if(count>=limit1a && count<=limit1b)
						arr[i][j]=1;
					else
						arr[i][j]=0;
				}
				else if(a[i][j]==0)
				{
					if(a[i+1][j]==1)
						count++;
					if(a[i-1][j]==1)
						count++;
					if(a[i][j+1]==1)
						count++;
					if(a[i][j-1]==1)
						count++;
					if(a[i-1][j-1]==1)
						count++;
					if(a[i-1][j+1]==1)
						count++;
					if(a[i+1][j-1]==1)
						count++;
					if(a[i+1][j+1]==1)
						count++;
					if(count>=limit1a && count<=limit1b)
						arr[i][j]=1;
					else
						arr[i][j]=0;
				}
				printf("%d ",arr[i][j]);
				
			}
			printf("\n");
		}
	for(i=1;i<n-1;i++)
			for(j=1;j<m-1;j++)
				a[i][j]=arr[i][j];
	}
}
int main()
{
	int i,j,n,m,k,l1a,l1b,l0a,l0b;
	printf("Enter the number of rows and columns:"); //Taking the input of row and column
	scanf("%d %d",&n,&m);
	n++;
	m++;
	n++;
	m++;
	int a[20][20],arr[20][20];
	printf("Enter your Array:"); 
	for (i=1;i<n-1;i++)  
		for(j=1;j<m-1;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	for (i=0;i<=n;i++)  
		for(j=0;j<=m;j++)
		{
			if(i==0 || j==0 || i==n-1 || j==m-1)
				a[i][j]=INT_MAX;
			else
			a[i][j]=arr[i][j];
		}
	
	printf("Array before changing the anti diagonal:\n");
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<m-1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the value for k:");
	scanf("%d",&k);
	printf("\nEnter the limits:");
	scanf("%d%d%d%d",&l1a,&l1b,&l0a,&l0b);
	Btrans(a,n,m,k,l1a,l1b,l0a,l0b);
	return 0;
	
}

