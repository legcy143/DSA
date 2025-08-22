#include <iostream>
#include <vector>
using namespace std;
#include <chrono>
using namespace std::chrono;

long long fibRec(int n, vector<long long> &dp)
{
    if (n < 1)
        return 0;
    if (n <= 2)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    cout << "it ";

    dp[n] = fibRec(n - 1, dp) + fibRec(n - 2, dp);
    return dp[n];
}

int recursiveFib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    cout << " i ";
    return recursiveFib(n - 1) + recursiveFib(n - 2);
}

int main()
{
    // you can see the diffrene 😊
    std::cout << "har har mahadev ~fib+dp \n";
    vector<long long> dp(1000, -1);
    auto start = high_resolution_clock::now();

    for (int i = 0; i < 200; i++)
    {
        long long res = fibRec(i, dp);
        cout << "Fib res DP of " << i << " = " << res << endl;
    }

    // cout << "\nrecursive : \n";
    // for (int i = 0; i < 20; i++)
    // {
    //     int res = recursiveFib(i);
    //     cout << "Fib res DP of " << i << " = " << res << endl;
    // }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " ms" << endl;
    // cout << "\nrecursive : \n";
    // for (int i = 0; i < 1000; i++)
    // {
    //     int res = recursiveFib(i);
    //     cout << "Fib res DP of " << i << " = " << res << endl;
    // }

    return 0;
}

