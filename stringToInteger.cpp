#include <iostream>
#include <string>
#include <sstream>

/*
    Description:>

    Implement atoi which converts a string to an integer.

    The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

    The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

    If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters, no conversion is performed.

    If no valid conversion could be performed, a zero value is returned.
*/

// My solution
int myAtoi(std::string str) {
        
    std::stringstream converter;

    int result =0;
    converter << str;
    converter >> result;
    if(converter.fail() ) {
        return 0;
    }
    return result;

}


// Leetcode Solution
int myAtoi2_large(std::string str) {
        int i = 0;
        int sign = 1;
        int result = 0;
        if (str.length() == 0) return 0;

        //Discard whitespaces in the beginning
        while (i < str.length() && str[i] == ' ')
            i++;

        // Check if optional sign if it exists
        if (i < str.length() && (str[i] == '+' || str[i] == '-'))
            sign = (str[i++] == '-') ? -1 : 1;

        // Build the result and check for overflow/underflow condition
        while (i < str.length() && str[i] >= '0' && str[i] <= '9') {
            
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && str[i] - '0' > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            result = result * 10 + (str[i++] - '0');
        }
        return result * sign;
}


int main() {

    std::cout <<myAtoi ("-91283472332") << "\n";

    std::cout <<myAtoi2_large ("-91283472332") << "\n";

    // int dato =INT_MAX/10;
    // std::cout << dato;

}