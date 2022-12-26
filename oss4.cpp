// #include<iostream>
// #include<fstream>
// #include<string.h>
// using namespace std;
// class student
// {
// 	private:
// 	string name;
// 	int rollno;
// 	int mark;
// 	public:
// 		void getdata()
// 		{
// 	ofstream o2;
// 			o2.open("stud99.txt",ios::app);
			
// 			if(o2.fail())
// 			cout<<"Problem in file creation";
// 			else
// 			{
									
// 			cout<<"enter name of student";
// 			cin>>name;
// 			cout<<"enter roll no.";
// 			cin>>rollno;
			
// 			cout<<"enter mark";
// 			cin>>mark;
			
// 			o2<<rollno;
// 			o2<<"       ";
// 			o2<<name;
// 			o2<<"     ";
// 			o2<<mark;
// 			o2<<"\n";
// 			o2.close();
// 		}
// 	}
// 	void display()
// 	{
// 	    ifstream i1;
// 	    i1.open("stud99.txt");
// 	    if(i1.fail())
// 	    cout<<"error in reading file";
// 	    else
// 	    {
	    //    while(!i1.eof())
	    //   // while(i1>>rollno>>name>>mark)
	    //     {
// 	            i1>>rollno;
// 	          i1>>name;
// 	           i1>>mark;
// 	            cout<<rollno<<" ";
// 	            cout<<name<<" ";
// 	            cout<<mark<<" ";
// 	            cout<<"\n";
// 	        }
// 	    }
// 	}
// 	};
// int main()
// {

// 	student s1;
// 	int ch;
// 	do
// 	{
// 	    cout<<"\n Student database:";
// 	    cout<<"\n Menu";
// 	    cout<<"\n 1. Add student record";
// 	    cout<<"\n 2. Display student record";
// 	    cout<<"\n 3. Exit";
// 	    cout<<"\n Enter your choice";
// 	    cin>>ch;
// 	    switch(ch)
// 	    {
// 	        case 1:
// 	        s1.getdata();
// 	        break;
// 	        case 2:
// 	        s1.display();
// 	        break;
// 	        case 3:
// 	        exit(0);
// 	    }
// 	}while(ch!=3);
	
	        
// return 0;
// }
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class student{
	string name;
	int roll,div;
	public:

	void getdata()
	{ 
		ofstream o1;
		o1.open("Hello.txt",ios::app);
		if(o1.fail()){"fila cant be opened";

		}else{
			cout<<"Enter name";
			cin>>name;
			cout<<"Enter roll no";
			cin>>roll;
			cout<<"Enter division";
			cin>>div;

		}
	}
	void display() {
         ifstream i1;
		 i1.open("Hello.txt");
		 if (i1.fail()){
			cout<<"unable to read:";

		 }else{
			while(!i1.eof()){
                i1>>name;
				i1>>roll;
				i1>>div;
				cout<<"Name:"<<name;
				cout<<"Roll_no:"<<roll;
				cout<<"div:"<<div;


			}



		 }
		 

	}

};
int main() 
{
	student s1;
	int ch;
	do{
        cout<<"\n Student database:";
	    cout<<"\n Menu";
	    cout<<"\n 1. Add student record";
	    cout<<"\n 2. Display student record";
	    cout<<"\n 3. Exit";
	    cout<<"\n Enter your choice";
	    cin>>ch;
		switch(ch){
			case1:
			s1.getdata();
			break;
			case2:
			s1.display();
			break;
			case3:
			exit(0);
	    }
	}while(ch!=3);
	
	        
return 0;
}