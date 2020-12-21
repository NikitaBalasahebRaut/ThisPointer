#include<iostream>
	#include<conio.h>
	#include<string.h>
using namespace std;

	class Student
	{

		int Roll;
		char Name[25];
		float Marks;

		public:

		Student(int R,float Mks,char Nm[])           //Constructor 1
		{
			Roll = R;                //assign value of R to Roll(assign value of local variable to class data member 
			strcpy(Name,Nm);
			Marks = Mks;
		}

		Student(char Name[],float Marks,int Roll)      //Constructor 2
		{
			Roll = Roll;     //not initialize class data members
			strcpy(Name,Name); //it will initialize values to itself local variables b'coz variables declared in argument list and variable declared as data members are of same name.
			Marks = Marks;
		}

		Student(int Roll,char Name[],float Marks)       //Constructor 3
		{
			this->Roll = Roll;               //we use 'this' pointer to differentiate local variable and class data members
			strcpy(this->Name,Name);
			this->Marks = Marks;            // // this pointer stores the address of object S3 and access dataMember
		}

		void Display()
		{
			cout<<"\n\tRoll : "<<Roll;
			cout<<"\n\tName : "<<Name;
			cout<<"\n\tMarks : "<<Marks;
		}
	};


	int  main()
	{

		Student S1(1,89.63,"Sumit");
		Student S2("Kumar",78.53,2);
		Student S3(3,"Gaurav",68.94);

		cout<<"\n\n\tDetails of Student 1 : ";
		S1.Display();

		cout<<"\n\n\tDetails of Student 2 : ";
		S2.Display();

		cout<<"\n\n\tDetails of Student 3 : ";
		S3.Display();

	}
	
	/*
	output:
	
	        Details of Student 1 :
        Roll : 1
        Name : Sumit
        Marks : 89.63

        Details of Student 2 :
        Roll : 2003660541
        Name : nmwuY@
        Marks : 8.99953e-039

        Details of Student 3 :
        Roll : 3
        Name : Gaurav
        Marks : 68.94
		*/
