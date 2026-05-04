#include <iostream>
using namespace std;
int main(){
int height, star_counter=2;
cout << "This program prints a 'pyramid' shape of a specific height on the screen.\n";
cout << "How high would you like the pyramid? ";
cin >> height;
while(height<1 || height>30){
    cout << "Pick another height <must be between 1 to 30>: ";
    cin >> height;
}
/*for(int i=1; i<=height; i++){
    for(int j=0; j<height-i; j++){
        cout << ' ';
    }
    for(int k=0; k<star_counter; k++){
        cout << '*';
    }
    cout << "\n";
    star_counter+=2;
}*/
for(int i=0; i<height; i++){
    for(int j=0; j<i; j++){
        cout << ' ';
    }
    for(int k=0; k<(height-i)*2; k++){
        cout << '*';
    }
    cout << "\n";
}
    return 0;
}