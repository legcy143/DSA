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

int loopFib(int n)
{
    if (n < 1)
        return 0;
    if (n <= 2)
        return 1;

    int prev = 1;
    int current = 1;

    for (int i = 3; i <= n; i++)
    {
        int temp = prev;
        prev = current;
        current = current + temp;
    }
    return current;
}

int tabulationFibDp(int n, vector<long long> &dp)
{
    if (n < 1)
        return 0;
    if (n <= 2)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    for (int i = 3; i <= n; i++)
    {
        if (dp[i] == -1)
            dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{
    // you can see the diffrene 😊
    std::cout << "har har mahadev ~fib+dp \n";
    vector<long long> dp(1000, -1);
    auto start = high_resolution_clock::now();

    // for (int i = 0; i < 200; i++)
    // {
    //     long long res = fibRec(i, dp);
    //     cout << "Fib res DP of " << i << " = " << res << endl;
    // }

    // cout << "\nrecursive : \n";
    // for (int i = 0; i < 20; i++)
    // {
    //     int res = recursiveFib(i);
    //     cout << "Fib res DP of " << i << " = " << res << endl;
    // }
    // cout << "\n loop : \n";
    // for (int i = 0; i < 1000; i++)
    // {
    //     int res = loopFib(i);
    //     cout << "Fib res DP of " << i << " = " << res << endl;
    // }
    cout << "\n tabulation : \n";
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 0; i < 10; i++)
    {
        int res = tabulationFibDp(i, dp);
        cout << "Fib res = " << i << " = " << res << endl;
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " ms" << endl;

    return 0;
}
