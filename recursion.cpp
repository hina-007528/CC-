#include<iostream>
using namespace std;
int sum(int x,int y)
{
    cout<<x+y<<endl;
return 0;
}
int main()
{
    int n = 5;
    if (n == 1)
    {
        return 1;
    }

    int z = sum(n-1, 1); // Providing both arguments to sum
    cout << z << endl; 
    return 0;
}
