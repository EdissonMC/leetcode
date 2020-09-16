
#include <iostream>
#include <sstream>

/*
    Description:>

    Determine whether an integer is a palindrome. 
    An integer is a palindrome when it reads the same backward as forward.
    
    Example1
    Input: 121
    Output: true

    Example2
    Input: -121
    Output: false

    Results leetcode: 
    Runtime: 36 ms, faster than 14.29% of C++ online submissions for Palindrome Number.
    Memory Usage: 6.1 MB, less than 19.79% of C++ online submissions for Palindrome Number.

*/

bool isPalindrome(int x);
bool isPalindromeString(std::string myNumber, int pI, int pF);

bool isPalindromeStringVs2(std::string str,  int p1, int p2 );

int main() {
    int number= 11;
    std::string resultado = isPalindrome(number) ==1 ? "si": "no";

   std::cout << number <<"\n\n:> RESULTADO "<< number <<  "  isPalindombre? > "<< resultado<<"\n" ;

}








  bool isPalindrome(int x) {

        // if (x < 9) {
        //     return true;
        // }    
        std::stringstream converter ;
        std::string stringNumber ="";

        converter <<x;
        converter >>stringNumber;


        // std::cout <<stringNumber <<"\n";

        int pI=0;
        int pF=stringNumber.length()-1;

        bool resultadoTemp = isPalindromeString( stringNumber ,  pI,  pF);
        // std::string resultString = resultadoTemp ==1? "si" : "no";
        
        // std::cout << "ResultadoTemp para "<< stringNumber <<  resultString  <<"\n\n";
        
        return resultadoTemp;
    }




    bool isPalindromeString(std::string myNumber, int pI, int pF){

        // std::cout <<"\n\n<-------iterating in Number ----> :  " << myNumber <<"\n";
        // std::cout <<"pI = "<<pI << " pF = "<< pF<<"\n";
        // int pItemp= pI+1;
        if(pI==pF){
            //  std::string resultString = "si" ;
            // std::cout << "ResultadoTemp para "<< myNumber <<" " <<  resultString  <<"\n\n";
            return true;
        }else if( pI+1 == pF ) {

            if( myNumber[pI] == myNumber[pF]){
            //      std::string resultString = "si" ;
            //    std::cout << "ResultadoTemp para "<< myNumber <<  resultString  <<"\n\n";
                return true;
            }else{
                //  std::string resultString = "no?" ;
                //    std::cout <<"myNumber[pI] =" << myNumber[pI] <<"  myNumber[pF] = " << myNumber[pF]<<"\n";
                
                // std::cout << "ResultadoTemp para "<< myNumber <<" "<<  resultString  <<"\n\n";
                return false;
            }
            
        }

        if(myNumber[pI]==myNumber[pF]){
            // std::cout <<"si es palindrome en este punto \n\n";

            // int _pI = pI+ 1;
            // int _pF = pF- 1;
            // bool resultadoTemp = isPalindromeString( myNumber,  _pI,  _pF);
            // std::string resultString = resultadoTemp ==1? "si" : "no";
            // std::cout << "ResultadoTemp para "<< myNumber <<  resultString  <<"\n\n";
            return isPalindromeString( myNumber,  pI+ 1 ,  pF- 1);

        }

        return false;
    }



bool isPalindromeStringVs2(std::string str,  int p1, int p2 ) {

    if(p1 >= p2 ) {
        return true;
    }else {
        return str[p1] == str[p2] && isPalindromeStringVs2(str,  p1+1,  p2-1);
    }
}
