#include<iostream>

int eWeightedSum(int a[ ], int len);

int main(){

    int len=4 ;
    int array [4]= {0,0,0,0};

    int resultado=  eWeightedSum(array, len);
    std::cout << "Resultado :> "<< resultado;


    return 0;
}

int eWeightedSum(int a[ ], int len){


    int i=0;
    int even=0;
    int odd=0;
    while(i<len){
        
        if(a[i]%2==0){
            
            even = even + a[i];
           
        }else{
            odd = odd +a[i];
           
        }
        i++;
    }
    
    return 2*(even) +3 *(odd);
}