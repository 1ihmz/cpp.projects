#include <iostream>

#include<cmath>

#include<cstring>

using namespace std;

double larger(double x,double );

//Write a function to find the volume of a box

double findVolume(double length, double, double high);

// Write a function that takes a sentence and a letter

// and tells how many times did this letter appear in the sentence

int countOccurrences(string, char);

//Write a function that takes an interg and tell you

//whether this integer is a prime number or not.

bool isPrime(int);

int main()

{

	double num1,num2, maximum;

	double volume, length, w, h;

	int count;

	count=countOccurrences("This is an example", 'e');

	cout<<count<<endl;

	cout<<"Enter the length, width and height of the box ";

	cin>>length>>w>>h;

	volume=findVolume(length,w,h);

	cout<<"The volume is "<<volume<<endl;

	cout<<"Enter 2 values ";

	cin>>num1>>num2;

	maximum=larger(num1,num2);

	cout<<"THe largest number is "<<maximum<<endl;

	return 0;

}

int countOccurrences(string s, char ch)

{

	int i,counter=0;

	for(i=0; i<s.length(); i++) //for(i=0;s[i]!='\0'; i++)

	{

		if(s[i]==ch)

			counter++;

	}

	return counter;

}

bool isPrime(int num)

{

   

}

double larger(double x,double y)

{

	double max;

	if(x>y)

		max=x;

	else

		max=y;

	return max;

}

double findVolume(double len, double w, double high)

{

	double vol;

	vol=len*w*high;

	return vol;

}