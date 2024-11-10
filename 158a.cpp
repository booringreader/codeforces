// multiply each a by 10, then add a number between 1-9 so that the new a is divisible by b
// map this number to be added with remainder; if the remainder is less than 10, add it, if not add the quotient of remainder/(b-1)
// if even remainder/(b-1) is also greater than 1, return -1

// the number 'b' will have some multiples less than 10, those are the only ones which can be added to the end of the a*10
// incase b does not has any number between 0-10, it should be divided by 10 until a number in this range is found
// not necessarily the operations need to be performed 'n' times, if any one operation can get a digit (upto length of n), cout it

// return a number that is divisible by 'b' and has 'n' additional digits in 'a'
#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;

    a *= 10;
    for (int i = 1; i < 10; i++)
    {
        if ((a + i) % b == 0)
        {
            a = (a + i);
            if (n > 1)
            {
                cout << a << string(n - 1, '0') << endl;
            }else{
            cout << a;
            }
            break;
        }
    }
    if (a % b != 0)
    {
        cout << -1;
    }
    return 0;
}
