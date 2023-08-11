#include<iostream>
using namespace std;
int main()
{
    int N, X, Y, idx = 0;
    cin >> N >> X;
    
    int a[N];

    for(int i = 0; i < N; i++){
        cin >> Y;
        if (Y < X){
            a[idx] = Y;
            idx++;
        }
    }

    for (int i = 0; i < idx; i++){
        cout<<a[i]<<' ';
    }
    return 0;
}