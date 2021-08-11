// Take integer inputs from user until he / she presses q(Ask to press q to quit after every integer input).Print average and product of all numbers.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum =0;
    int av = 0;
    int pro = 1;
    int cont=0;
    bool check = true;
    while (check)
    {
        int n;
        char ch;
        cin >> n;
        cout << "press q to quit"<< endl;
        cin >> ch ;
        sum = sum + n;
        pro = pro * n;
        cont ++;
        if (ch == 'q')
        {
           check = false;
        }
    }
    cout << "averge " << (float)sum/(float)cont << endl;
    cout << "product "<< pro << endl;
}