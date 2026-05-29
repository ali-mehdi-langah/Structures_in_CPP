#include<iostream>
using namespace std;
struct student{
	int obtmarks;
	int totalmarks;
	float percentage; 
};
int main()
{
	student s1,s2;
	cout<<"Enter a marks of 1st student: ";
	cin>>s1.obtmarks;
	cout<<"Enter a total marks of 1st student: ";
	cin>>s1.totalmarks;
	s1.percentage = (float) s1.obtmarks/s1.totalmarks*100;
	cout<<"Percentage of 1st student: "<<s1.percentage<<endl;
	
	cout<<"Enter a marks of 2nd student :";
	cin>>s2.obtmarks;
	cout<<"Enter a total marks of 2nd student: ";
	cin>>s2.totalmarks;
	s2.percentage = (float) s2.obtmarks/s2.totalmarks*100;
	cout<<"Percentage of 2nd student: "<<s2.percentage<<endl;
}