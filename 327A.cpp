//4057739   Jul 13, 2013 7:54:54 AM	fuwutu	 327A - Flipping Game	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, a, count1=0, count0=0, alag0max=-1;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            count1 += 1;
            if (count0 > 0)
            {
                count0 -= 1;
            }
        }
        else
        {
            count0 += 1;
            if (count0 > alag0max)
            {
                alag0max = count0;
            }
        }
    }
    cout << count1 + alag0max << endl;
    return 0;
}