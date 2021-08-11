#include <iostream>
using namespace std;
int main()
{
    bool check = true;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = false;
                break;
            }
        }
        if (check == true)
        {
            cout << i << " ";
        }
        else
        {
            check = true;
        }
    }
}