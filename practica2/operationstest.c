#include <stdio.h>
#include "operations.h" //brackets la busca en el path

void printTestMessage(int, char*, char*);

int main(){
    //Test Adddition
    int a = 2147483644;
    int b = 2;
    int result = add(a,b);
    int expected = a + b;
    printTestMessage(result == expected, "Addition test passed", "Addition test failed");

    //Test Substraction
    int d = 214744;
    int f = 44;
    int resultSubstraction = substraction(a,b);
    int expectedSubstraction = d - f;
    printTestMessage(resultSubstraction == expected, "Substraction test passed", "Substraction test failed");
    return 0;
}

void printTestMessage(int testResult, 
                      char *passedMessage, 
                      char *failedMessage)
{
    if(testResult)
    {
        printf("%s\n", passedMessage);
    }
    else
    {
        printf("%s\n", failedMessage);

    }
}