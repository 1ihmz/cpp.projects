#include <iostream>
using namespace std;
double larger(double, double );
//a function to find the volume of a box
double findVolume(double length,double width,double high);
// a function that take a sentence and letter, and returns the number of
// time the letter appeared in the sentence.
int countOccurrences(string, char);
// write a function to check if a number is prime or not
bool isPrime(int);// 2,3 ,5,7, 11, 13, 17
int main()
{
	double num1, num2, maximum;
	double l,w,h;
	int count;
	char sentence[80];
		cout<<"Enter 2 value ";
		cin >> num1 >> num2;
		maximum=larger(num1,num2);
		cout << "The maiximum is " << maximum << endl;
		cout<<"Enter the lngth, width and high of the box ";
		cin>>l>>w>>h;
		cout<<"The volume of the box is "<<findVolume(l,w,h)<<endl;
	cout<<"Enter a sentence ";
	cin.get(sentence, 80);
	count =countOccurrences(sentence, 'i');
	cout<<count<<endl;
	cout<<"Enter a number o be checked ";
	cin>>count;
	if(isPrime(count)==true)
		cout<<count <<" is prime \n";
	else
		cout<<count<<" is not prime \n";
	return 0;
}
bool isPrime(int num){
	int i;
	for(i=2; i<=num-1; i++)	{
		if(num%i==0)
			return false;
	}
	return true;
}
int countOccurrences(string s, char ch)
{
	int count = 0, i;
	for ( i = 0; i < s.length(); i++){
		if (s[i] == ch){
			count++;}
	}
	return count;
}
double findVolume(double length,double width,double h)
{
	return length*width*h;
}
double larger(double x, double y)
{
	double max;
	if (x >= y)
		max = x;
	else
		max = y;
	return max;
}