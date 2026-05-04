#include <iostream>
using namespace std;
int main(){
int n, number=0;
cout << "Enter n: ";
cin >> n;
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        number+=1;
        cout << number << ' ';
    }
    cout << "\n";
}
for(int k=n-1; k>=1; k--){
    int row_peak=(k*(k+1))/2;
    for(int l=1; l<=k; l++){
        cout << row_peak << ' ';
        row_peak-=1;
    }
    cout << "\n";
}
    return 0;
}