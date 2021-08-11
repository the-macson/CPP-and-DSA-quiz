// Take 10 integers from keyboard using loop and print their average value on the screen.

// #include<bits/stdc++.h>
//     using namespace std;
// int main(){

// }
#include <iostream>
using namespace std;
int main()
{
    int x, sum;
    sum = 0;
    float avg;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter the numbers"<<i<<"th number" ;
        cin >> x;
        sum = sum + x;
    }
    avg = (float)sum / 10;
    cout << "Average of total numbers: " << avg;
}