
#include <iostream>

using namespace std;
int a[100][100],n,i,j;
int main()
{
    int Sn=0, Ss=0, Sv=0, Se=0, Smax=0;
    cin>>n;
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    for (i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(i<j && i+j<=n-2)
                Sn+=a[i][j];
            if (i>j && i+j>=n)
                Ss+=a[i][j];
            if (i>j && i+j<=n-2)
                Sv+=a[i][j];
            if (i<j && i+j>=n)
                Se+=a[i][j];
        }
    cout << Sn<<" "<< Ss<<" "<<Sv<<" "<<Se<< endl;

    int v[5];
    v[0]=Sn;
    v[1]=Ss;
    v[2]=Sv;
    v[3]=Se;

    for(i=0; i<4; i++)
        if (v[i]>Smax)
            Smax=v[i];
    cout<< Smax;
    return 0;
}
