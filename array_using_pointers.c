#include <stdio.h>
int main()
{
    int n, i,j,arr[50][50],sum=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
    	for(j=0;j<n;j++){
        	scanf("%d",(*(arr+i)+j) );
		}
    }
    printf("Array elements: \n");
    for (i = 0; i < n; i++)
    {
    	for(j=0;j<n;j++) {
        	printf("%d ",*(*(arr+i)+j));
    	}
    	printf("\n");
    }
	for (i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j) {
				sum+=arr[i][j];
			}
		}
	}
	printf("Sum of diagonal elements = %d\n",sum);
    return 0;
}
