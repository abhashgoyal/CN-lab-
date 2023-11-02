using namespace std;
#include <bits/stdc++.h>
#include <ctime>
#define ll long int
// i=current seq, n window, tf, tt transmiiiomn
void transmission(ll &i, ll &N, ll &tf, ll &tt)
{
    while (i <= tf)
    {
        // z= current ack count
        int z = 0;
        for (int k = i; k < i + N && k <= tf; k++)
        {
            cout << "Sending Frame " << k << "..." << endl;
            tt++;
        }
        for (int k = i; k < i + N && k <= tf; k++)
        {

            if (!0)
            {
                cout << "Acknowledgment for Frame " << k << "..." << endl;
                z++;
            }
            else
            {
                cout << "\Error!:" << k << "Not Received" << endl;
                cout << "Retransmitting Window" << endl;
                break;
            }
        }
        cout << "\n";
        i = i + z;
    }
}

int main()
{
    ll tf, N, tt = 0;
    cout << "Enter the Total number of frames : ";
    cin >> tf;
    cout << "Enter the Window Size : ";
    cin >> N;
    ll i = 1;
    transmission(i, N, tf, tt);
    cout << "Total number of frames : " << tt << endl;
    return 0;
}