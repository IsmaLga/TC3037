#include <stdio.h>
#include <stdlib.h> 

int * anagram(int A[], int B[], int length)
{
    int C[length];
    for(int i= 0; i<length; i++)
    {
        for(int j=0; j<length; j++)
        {   
            //Verify that A[i], B[i] are integers in range [0, 10^5].
            if(A[i] >= 0 && A[i] <100001 && B[i] >= 0 && B[i] <100001 ){
                if(A[i] == B[j])
                {
                    C[i] = j;
                }
            }
            else
            {
                printf("A[i], B[i] are integers not in range [0, 10^5].");
            }    
        }
    }
    printf("[");
    for(int i=0; i<length;i++ )
    {
        printf("%i", C[i]);
        if(i < length-1)
        {
            printf(", ");

        }
    }
    printf("]");
}

int main()
{
    int A[] = {1, 2, 2, 4, 5};
    int B[] = {2, 2, 1, 5, 4};
    int length = sizeof(A)/sizeof(int);
    //Verify that A and B have the same length and length is in range [1, 100].
    if(sizeof(A) == sizeof(B) && length>0 && length<101)
    {
        anagram(A, B, length);
    }
}