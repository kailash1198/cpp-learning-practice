#include <iostream>
#include <string>
using namespace std;

int l = S.length(), ans;
        if (l == 1) {
            //checking if S is integer of size 1
            if (isdigit(S[0]))
                ans = 4;
            else
                ans = 1;
        } else {
            int flag = 0;
            for (int i = 0; i < l; i++) {
                //checking whether S is integer or float/double
                if (S[i] == '.') {
                    flag = 1;
                    int j = l - i + 1;
                    //checking whether S is double
                    if (j > 7)
                        ans = 8;
                    else
                        ans = 4;
                }
            }
            if (!flag) ans = 4;
        }
        return ans;

int main()
{
    BasicDataType("ab");
    return 0;
}
