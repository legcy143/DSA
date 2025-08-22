#include <iostream>
using namespace std;

int recursiveFib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recursiveFib(n - 1) + recursiveFib(n - 2);
}

int loopFib(int n ){
    if(n<=0) return 0;
    if(n <=2) return 1;

    int prev = 1;
    int ans = 1; 
    for(int i = 2 ; i <n; i++){
        int temp = prev;
        prev = ans;
        ans +=temp;
    }
    return ans;
}

int main()
{
    cout << "har har mahadev\n";
    cout<<recursiveFib(0);
    cout<<recursiveFib(1);
    cout<<recursiveFib(2);
    cout<<recursiveFib(5);
    cout<<" \n tabulation fib\n";
    cout<<loopFib(0);
    cout<<loopFib(1);
    cout<<loopFib(2);
    cout<<loopFib(5);

    cout << " \n*** end ***\n ";
    return 0;
}