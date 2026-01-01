#include <iostream>

using namespace std;
int a[100][100],n ,i ,j;

int cmmdc(int a,int b){
    while (b!=0){
    int r;
    r=a%b;
    a=b;
    b=r;
    }
    return a;
}

int main()
{
  cin>> n;
  for (i=0; i<n; i++)
    for(j=0; j<n;j++)
        cin>> a[i][j];

  int Sdeasupra=0, Ssub=0;

    for (i=0; i<n; i++)
        for(j=0; j<n;j++){
            if (i<j)
                Sdeasupra+=a[i][j];
            if (i>j)
                Ssub+=a[i][j];
        }
    cout << cmmdc(Sdeasupra,Ssub);


    return 0;
}