#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long int A, B;
        cin >> A >> B;
        if(A > B)
        {
            cout << ">" << endl;
        }
        else if(A < B)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }

    return 0;
}