
#include<iostream>
/*
An array is defined to be a 235 array if the number of elements divisible by 2 plus the number of elements divisible by 3 plus the number of elements divisible by 5 plus the number of elements not divisible by 2, 3, or 5 is equal to the number of elements of the array. Write a method named is123Array that returns 1 if its array argument is a 235 array, otherwise it returns 0.

If you are writing in Java or C#, the function signature is
int is235Array(int[ ] a)

If you are writing in C or C++, the function signature is
int is235Array(int a[ ], int len) where len is the length of a

Hint: remember that a number can be divisible by more than one number

Examples

In the following: <a, b, c, d> means that the array has a elements that are divisible by 2, b elements that are divisible by 3, c elements that are divisible by 5 and d elements that are not divisible by 2, 3, or 5


*/

int is235Array(int a[ ], int len);


int main(){

    int len=9;
    //int array [11]= {7, 2, 7, 2,7,2,7,2,3, 7,7};
    
   // int array [9]= {2, 3, 4, 5, 6, 7, 8, 9, 10};

   // int array [5]=  {2, 3, 6, 7, 11};

    int array[9]={3, 9, 27, 7, 1, 1, 1, 1, 1};
    int resultado=  is235Array(array, len);
    std::cout << "Resultado :> "<< resultado;

    //   std::cout<< "contador_2 : "<<contador_2<<"\n";
    // std::cout<< "contador_3 : "<<contador_3<<"\n";
    // std::cout<< "contador_5 : "<<contador_5<<"\n";
    // std::cout<< "contador_o : "<<contador_other<<"\n";

    return 0;
}


int is235Array(int a[ ], int len){

    int i=0;

    int contador_2=0;
    int contador_3=0;
    int contador_5=0;
    int contador_other=0;

    while(i<len){

         std::cout <<a[i] <<"\n";
        if(a[i] %2 ==0){
            contador_2++;
        }
        if(a[i] %3 ==0){
            contador_3++;
        }
        if(a[i] %5 ==0){
            contador_5++;
        }

        if ( !(a[i] %2 ==0) && !(a[i] %3 ==0) && !(a[i] %5 ==0)){
            contador_other++;
        }
         i++;
    }

  
    return contador_2+contador_3+contador_5 +contador_other== len;
    
}