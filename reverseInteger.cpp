#include <iostream>


/*
    Description:>
    Given a 32-bit signed integer, reverse digits of an integer.

    Resultado:
    Runtime: 28 ms, faster than 7.85% of C++ online submissions for Reverse Integer.
    Memory Usage: 5.9 MB, less than 66.43% of C++ online submissions for Reverse Integer.

*/


 long int reverse(int x) {

    //  int sig =0;
     
     
    //  if (x<0) {
    //     sig = -1;
    //     x = x * sig;
    //  }else{
    //     sig = 1;
    //  }





    int datoDivision = x;

    int datoRemanente = 0;

     long int datoNuevo = 0;



    while((datoDivision) !=0){
        
        datoRemanente = datoDivision%10;
        std::cout << "\n--->datoRemanente :" << datoRemanente <<"\n";

         if (datoNuevo > INT_MAX/10 || (datoNuevo == INT_MAX / 10 && datoRemanente > 7)) return 0;
        if (datoNuevo < INT_MIN/10 || (datoNuevo == INT_MIN / 10 && datoRemanente < -8)) return 0;

        datoNuevo = datoNuevo*10  + datoRemanente;
       
        
        std::cout << "datoNuevo :" << datoNuevo <<"\n";
        

        datoDivision = datoDivision/10;

        // datoNuevo = (datoNuevo * 10);

    }

    return datoNuevo;//*sig;        
}



/*
    Solucion original
*/
 int reverse2(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
            std::cout << "Reves:> " << rev<<"\n";
        }
        return rev;
    }


int main() {

   std::cout << "Resultado :>" << reverse(1534236469);
//    std::cout << "Resultado :>" << reverse2(1534236469);

    return 0;
}