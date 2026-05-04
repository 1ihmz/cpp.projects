#include <iostream>
using namespace std;
int main(){
for(int i=0; i<5; i++){
for(int j=0; j<5-i-1; j++){
    cout << ' ';
}
for(int k=0; k<(2*i+1); k++){
    cout << '*';
}
    cout << "\n";
}
for(int l=3; l>=0; l--){
for(int m=5-l-1; m>0; m--){
    cout << ' ';
}
for(int n=0; n<(2*l+1); n++){
    cout << '*';
}
    cout << "\n";
}
    return 0;
}