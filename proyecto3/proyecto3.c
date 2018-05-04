#include <stdio.h>
 
int main(int argc, char **argv)
{
	long long int n,i,sum,no,k,j;
	int flag;
	flag=0;
	scanf("%lld",&n);
    //create subset array with lenght n
	long long int a[n];
    //fill the subset array with elements given in input
	for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
    //Iterate the array
	for(i=1;i<=n;i++)
	{	//set sum value to 0 
		sum=0;
		//iterate from j=i to n 
		for(j=i;j<=n;j++)
		{
			//sum elements from j=i to n
			sum+=a[j];
			//if the sum is divisible by n, then print the output of the program 
			if(sum%n==0)
			{
				flag=1;
				//calculate the number of elements that make the sum 
				no=(j-i+1);
				printf("%lld\n",no);
				//print elements in the subset
				for(k=i;k<=j;k++)
				    printf("%lld ",k);
				printf("\n");
				break;
			}
		}
		if(flag==1){
			break;
        }
	}
	// if there is no subset that answers the problems 
	if(flag==0){
		printf("-1\n");
    }
	return 0;
}