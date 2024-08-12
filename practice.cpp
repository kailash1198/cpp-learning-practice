class Solution {
  public:
    //Function to check if a number is prime or not.
    string isPrime(int n) {
        bool flag = false;
    
        //Checking if the number is less than 2, it is not prime.
        if (n < 2)
            return "No";
        else {
            //Iterating from 2 to square root of n to check if n is divisible by any number.
            for (int i = 2; i <= sqrt(n); i++) {
                //If n is divisible by any number, set flag to true and break the loop.
                if (n % i == 0) {
                    flag = true;
                    break;
                }
            }
    
            //If no number divides n, it is prime.
            if (flag == false)
                return "Yes";
            else
                return "No";
        }
    }
};