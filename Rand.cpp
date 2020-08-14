#include<bits/stdc++.h>

using namespace std;

int main(){


int a,b;
cin >> a >> b;
int arr[10];

for(int i=0;i<10;i++){
    arr[i]= (rand() % (b-a) +1) + a;
}
sort(arr,arr+10);
for(int i=0;i<10;i++){
    cout << arr[i] << " ";
}

return 0;
}
