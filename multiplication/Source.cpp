#include <iostream>
using namespace std;

int main()
{
    int a, b, s = 7;
    int c = s / 2;
    for (a = 0; a < s; a++)
    {
        for (b = 0; b < s; b++)
        {
            if (a <= c)
            {
                if (b >= c - a && b <= c + a)
                    cout << "*";
                else
                    cout << " ";
            }
            else
            {
                if (b >= c + a - s + 1 && b <= c - a + s - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    system("PAUSE");
    return 0;
}
