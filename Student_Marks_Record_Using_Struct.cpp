#include<iostream>
using namespace std;
struct marks{
	int chem;
	int maths;
	int eng;
	int total;
	int obtmarks;
	float per;	
};
struct student
{
	string name;
	int rollno;
	marks m1;
};
int main()
{
	student std1,std2,std3,std4,std5;
	cout<<"student 1"<<endl;
	std1.name = "Arsal";
	std1.rollno = 44;
	cout<<"name: "<<std1.name<<endl;
	cout<<"roll number: "<<std1.rollno<<endl;
	
	std1.m1.total = 300;
	std1.m1.chem = 55;
	std1.m1.eng = 60;
	std1.m1.maths = 40;
	
	cout<<"Total marks: "<<std1.m1.total<<endl;
	std1.m1.obtmarks = std1.m1.chem+std1.m1.eng+std1.m1.maths;
	cout<<"Obtained marks: "<<std1.m1.obtmarks<<endl;
	std1.m1.per = (float) std1.m1.obtmarks/std1.m1.total*100;
	cout<<"Per: "<<std1.m1.per<<endl;
	cout<<endl;
	
	cout<<"student 2"<<endl;
	std2.name = "Arslan";
	std2.rollno = 22;
	cout<<"name: "<<std2.name<<endl;
	cout<<"roll number: "<<std2.rollno<<endl;
	
	std2.m1.total = 300;
	std2.m1.chem = 57;
	std2.m1.eng = 69;
	std2.m1.maths = 70;
	
	cout<<"Total marks: "<<std2.m1.total<<endl;
	std2.m1.obtmarks = std2.m1.chem+std2.m1.eng+std2.m1.maths;
	cout<<"Obtained marks: "<<std2.m1.obtmarks<<endl;

	
	std2.m1.per = (float) std2.m1.obtmarks/std2.m1.total*100;
	cout<<"Per: "<<std2.m1.per<<endl;
           cout<<endl;
	
	cout<<"student 3"<<endl;
	std3.name = "Ali";
	std3.rollno = 72;
	cout<<"name: "<<std3.name<<endl;
	cout<<"roll number: "<<std3.rollno<<endl;
	
	std3.m1.total = 300;
	std3.m1.chem = 85;
	std3.m1.eng = 69;
	std3.m1.maths = 70;
	
	cout<<"Total marks: "<<std3.m1.total<<endl;
	std3.m1.obtmarks = std3.m1.chem+std3.m1.eng+std3.m1.maths;
	cout<<"Obtained marks: "<<std3.m1.obtmarks<<endl;
	std3.m1.per = (float) std3.m1.obtmarks/std3.m1.total*100;
	cout<<"Per: "<<std3.m1.per<<endl;
	cout<<endl;
	
	cout<<"student 4"<<endl;
	std4.name = "Raza";
	std4.rollno = 8;
	cout<<"name: "<<std4.name<<endl;
	cout<<"roll number: "<<std4.rollno<<endl;
	
	std4.m1.total = 300;
	std4.m1.chem = 65;
	std4.m1.eng = 78;
	std4.m1.maths = 80;
	
	cout<<"Total marks: "<<std4.m1.total<<endl;
	std4.m1.obtmarks = std4.m1.chem+std4.m1.eng+std4.m1.maths;
	cout<<"Obtained marks: "<<std4.m1.obtmarks<<endl;
	std4.m1.per = (float) std4.m1.obtmarks/std4.m1.total*100;
	cout<<"Per: "<<std4.m1.per<<endl;
	cout<<endl;
	
	cout<<"student 5"<<endl;
	std4.name = "Aqeel";
	std4.rollno = 117;
	cout<<"name: "<<std4.name<<endl;
	cout<<"roll number: "<<std4.rollno<<endl;
	
	std4.m1.total = 300;
	std4.m1.chem = 55;
	std4.m1.eng = 47;
	std4.m1.maths = 79;
	
	cout<<"Total marks: "<<std4.m1.total<<endl;
	std4.m1.obtmarks = std4.m1.chem+std4.m1.eng+std4.m1.maths;
	cout<<"Obtained marks: "<<std4.m1.obtmarks<<endl;
	std4.m1.per = (float) std4.m1.obtmarks/std4.m1.total*100;
	cout<<"Per: "<<std4.m1.per<<endl;	
}
