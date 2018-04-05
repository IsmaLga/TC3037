#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#include <string.h>

char * lookFor(int i,char *testCase){
  if(i == 0){
      int j;
      int size = strlen(testCase);
      //LOOKING FOR ZERO
      bool found0 = false, noMore0 = false;
      if (found0 == false){
         bool foundZ=false, foundE=false, foundR=false, foundO=false;
        for(j = 0; j<size;j++){
          if(testCase[j]=='Z'){
            foundZ = true;
          }
          if(testCase[j]=='E'){
            foundE = true;
          }
          if(testCase[j]=='R'){
            foundR = true;
          }
          if(testCase[j]=='O'){
            foundO = true;
          }
        }
        if(foundZ == true && foundE == true && foundR == true && foundO == true){
            found0 = true;
            return "0";
        }else{
        return"not found";
      }
      }
  }
  if (i == 1){
    int j;
    int size = strlen(testCase);
    //LOOKING FOR 1
    bool found1 = false, noMore1 = false;
    if (found1 == false){
       bool foundO=false, foundN=false, foundE=false;
      for(j = 0; j<size;j++){
        //printf("\n%d",j);
        if(testCase[j]=='O'){
          foundO = true;
        }
        if(testCase[j]=='N'){
          foundN = true;
        }
        if(testCase[j]=='E'){
          foundE = true;
        }
      }
      if(foundO == true && foundN == true && foundE== true){
          found1 = true;
          return "1";
      }else{
        return"not found";
      }
    }
  }
  if (i == 2){
    int j;
    int size = strlen(testCase);
    //LOOKING FOR 2
    bool found2 = false, noMore2 = false;
    if (found2 == false){
       bool foundT=false, foundW=false, foundO=false;
      for(j = 0; j<size;j++){
        //printf("\n%d",j);
        if(testCase[j]=='T'){
          foundT = true;
        }
        if(testCase[j]=='W'){
          foundW = true;
        }
        if(testCase[j]=='O'){
          foundO = true;
        }
      }
      if(foundT == true && foundW == true && foundO== true){
          found2 = true;
          return "2";
      }else{
        return"not found";
      }
    }
    
  }
  if (i == 3){
    int j;
    int size = strlen(testCase);
    //LOOKING FOR 3
    bool found3 = false, noMoreT = false;
    if (found3 == false){
       bool foundT=false, foundH=false, foundR=false, foundE=false, foundE2=false;
      for(j = 0; j<size;j++){
        //printf("\n%d",j);
        if(testCase[j]=='T'){
          foundT = true;
        }
        if(testCase[j]=='H'){
          foundH = true;
        }
        if(testCase[j]=='R'){
          foundR = true;
        }
        if(testCase[j]=='E'){
          if(foundE == true){
            foundE2 = true;
          }
        }
        if(testCase[j]=='E'){
          foundE = true;
        }       
      }
      if(foundT == true && foundH == true && foundR== true && foundE == true && foundE2== true){
          found3 = true;
          return "3";
      }else{
        return"not found";
      }
    }
    
  }
  if(i == 4){
      int j;
      int size = strlen(testCase);
      //LOOKING FOR 4
      bool found4 = false, noMore4 = false;
      if (found4 == false){
         bool foundF=false, foundO=false, foundR=false, foundU=false;
        for(j = 0; j<size;j++){
          if(testCase[j]=='F'){
            foundF = true;
          }
          if(testCase[j]=='O'){
            foundO = true;
          }
          if(testCase[j]=='U'){
            foundU = true;
          }
          if(testCase[j]=='R'){
            foundR = true;
          }
        }
        if(foundF == true && foundO == true && foundU == true && foundR == true){
            found4 = true;
            return "4";
        }else{
        return"not found";
      }
      }
      
  }
  if(i == 5){
      int j;
      int size = strlen(testCase);
      //LOOKING FOR 5
      bool found5 = false, noMore5 = false;
      if (found5 == false){
         bool foundF=false, foundI=false, foundV=false, foundE=false;
        for(j = 0; j<size;j++){
          if(testCase[j]=='F'){
            foundF = true;
          }
          if(testCase[j]=='I'){
            foundI = true;
          }
          if(testCase[j]=='V'){
            foundV = true;
          }
          if(testCase[j]=='E'){
            foundE = true;
          }
        }
        if(foundF == true && foundI == true && foundV == true && foundE == true){
            found5 = true;
            return "5";
        }else{
        return"not found";
      }
      }
  }
  if (i == 6){
    int j;
    int size = strlen(testCase);
    //LOOKING FOR 6
    bool found6 = false, noMore6 = false;
    if (found6 == false){
       bool foundS=false, foundI=false, foundX=false;
      for(j = 0; j<size;j++){
        //printf("\n%d",j);
        if(testCase[j]=='S'){
          foundS = true;
        }
        if(testCase[j]=='I'){
          foundI = true;
        }
        if(testCase[j]=='X'){
          foundX = true;
        }
      }
      if(foundS == true && foundI == true && foundX== true){
          found6 = true;
          return "6";
      }else{
        return"not found";
      }
    }
  }
  if (i == 7){
    int j;
    int size = strlen(testCase);
    //LOOKING FOR 7
    bool found7 = false, noMore7 = false;
    if (found7 == false){
       bool foundS=false, foundN=false, foundV=false, foundE=false, foundE2=false;
      for(j = 0; j<size;j++){
        //printf("\n%d",j);
        if(testCase[j]=='S'){
          foundS = true;
        }
        if(testCase[j]=='V'){
          foundV = true;
        }
        if(testCase[j]=='N'){
          foundN = true;
        }
        if(testCase[j]=='E'){
          if(foundE == true){
            foundE2 = true;
          }
        }
        if(testCase[j]=='E'){
          foundE = true;
        }
      }
      if(foundS == true && foundE == true && foundV== true && foundE2 == true && foundN== true){
          found7 = true;
          return "7";
      }else{
        return"not found";
      }
    }

  }
  if (i == 8){
    int j;
    int size = strlen(testCase);
    //LOOKING FOR 8
    bool found8 = false, noMore8 = false;
    if (found8 == false){
       bool foundT=false, foundH=false, foundG=false, foundE=false, foundI=false;
      for(j = 0; j<size;j++){
        //printf("\n%d",j);
        if(testCase[j]=='G'){
          foundG = true;
        }
        if(testCase[j]=='H'){
          foundH = true;
        }
        if(testCase[j]=='I'){
          foundI = true;
        }
        if(testCase[j]=='T'){
            foundT = true;
          
        }
        if(testCase[j]=='E'){
          foundE = true;
        }
      }
      if(foundE == true && foundI == true && foundH== true && foundG == true && foundT== true){
          found8 = true;
          return "8";
      }else{
        return"not found";
      }
    }
  }
  if(i == 9){
      int j;
      int size = strlen(testCase);
      //LOOKING FOR NINE
      bool found9 = false, noMore9 = false;
      if (found9 == false){
         bool foundN=false, foundI=false, foundN2=false, foundE=false;
        for(j = 0; j<size;j++){
          if(testCase[j]=='N'){
            if(foundN == true){
              foundN2 = true;
            }
          }
          if(testCase[j]=='I'){
            foundI = true;
          }
          if(testCase[j]=='N'){
            foundN = true;
          }
          if(testCase[j]=='E'){
            foundE = true;
          }
        }
        if(foundN == true && foundI == true && foundN == true && foundE == true){
            found9 = true;
            return "9";
        }else{
          return "not found";
        }
      }
  }
}

int main()
{
  char *variable = "ZTEWORO";
  printf("%s", lookFor(0, variable));
  printf("%s", lookFor(1, variable));
  printf("%s", lookFor(2, variable));
  printf("%s", lookFor(3, variable));
  printf("%s", lookFor(4, variable));
  printf("%s", lookFor(5, variable));
  printf("%s", lookFor(6, variable));
  printf("%s", lookFor(7, variable));
  printf("%s", lookFor(8, variable));
  printf("%s", lookFor(9, variable));
}