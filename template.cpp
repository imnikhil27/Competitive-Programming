#include <bits/stdc++.h>
#define SEIVE_SIZE 1000000
using namespace std;

//Sieve for a size SEIVE_SIZE
vector<bool> sieve(SEIVE_SIZE, true);

//Generates sieve for range 2 to n
void buildSieve(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

int main()
{

    return 0;
}