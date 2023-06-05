/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int* arr=(int*) malloc(n * sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int* queries=(int*) malloc(m* sizeof(int));
	for(int i=0;i<m;i++)
	{
		scanf("%d",&queries[i]);
	}

	int* cost=(int*) malloc(m * sizeof(int));
	for(int i=0;i<m;i++)
	{
		int total_cost=0;
		for(int j=0;j<n;j++)
		{
			int diff=abs(arr[j]-queries[i]);
			total_cost+=diff;
		}
		cost[i]=total_cost;
	}

	for(int i=0;i<m;i++)
	{
		printf("%d ", cost[i]);
	}

	printf("\n");
	free(arr);
	free(queries);
	free(cost);
	return 0;
}


