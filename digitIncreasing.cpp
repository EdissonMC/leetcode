#include<iostream>

/*
    A number is called digit-increasing if it is equal to n + nn + nnn + ... for some digit n between 1 and 9. For example 24 is digit-increasing because it equals 2 + 22 (here n = 2)

Write a function called isDigitIncreasing that returns 1 if its argument is digit-increasing otherwise, it returns 0.

The signature of the method is
int isDigitIncreasing(int n)

    Ejempl:	because 36 = 3 + 33
    because 7404 = 6 + 66 + 666 + 6666

*/
int isDigitIncreasing(int n);

int main(){

   

    int resultado=  isDigitIncreasing(37);
    std::cout << "\n:>Resultado :> "<< resultado;


    return 0;
}

int isDigitIncreasing(int n){

    int bound= n*10;
    int nGen=0;
    int sum= 0;

   for(int i=1 ; i<10; i++) {
   
       nGen=i;
     
       while(nGen < bound){
          
            sum = sum + nGen;
            nGen = (nGen*10)+i;
          
           if(sum == n){
               return 1;
           }
           
       }

       nGen=0;
       sum=0;
   }
    
    return 0;
}