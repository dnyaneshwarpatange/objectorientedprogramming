#include<iostream>
#include<string>
using namespace std;
class student {
	string name,blood_group,adress;
	int roll_no,div;
	long mobile_no;
	public:
	friend class teacher;
	student() {
         int *roll_no = new int;
		 name,blood_group,adress,div,mobile_no;

	}
	student(student & obj ) {
		this -> name = obj.name;
		this -> blood_group = obj.blood_group;
		this -> roll_no = obj.roll_no;
		this -> div = obj.div;
		this -> mobile_no = obj.mobile_no;



	}

	void getdata() {
		cout<<"Enter name:";
		cin>>name;
		cout<<"Enter roll no:";
		cin>>roll_no;
		cout<<"Enter division:";
		cin>>div;
		cout<<"Enter adress:";
		cin>>adress;
		cout<<"Enter mobile no:";
		cin>>mobile_no;
		cout<<"Enter blood group:";
		cin>>blood_group;


	}
	void displaydata() {
		cout<<"\n"<<name<<"\t"<<div<<"\t"<<blood_group<<"\t"<<adress<<"\t"<<mobile_no<<"\t"<<"blood_group"<<endl;
	}

	inline static void display() {
		cout<<":::Student Information System:::";
	}
};
class teacher{
	int id;
	public:    
		teacher()
		{
			id=0;
		}
		void display_t(student &obj1,int t_d)   //(s[0],3)  s[1],3
		{
		try
		{
			if(obj1.div==t_d) //s[0].div==3   3==3   s[1].div ==3 2==3
			obj1.display();
			else
			throw(obj1.div);
			}
			catch(int x)  //x=2
			{
				cout<<"student & teacher division can not matched";
				}	
		}

};
int 
main()
{
	 student s[10];
	 teacher t;
	 int ch,count=0;
	 do
	 {
	 
	 cout<<"\n --------------------- Student information system ----------------------";
	 cout<<"\n -------------------- Menu------------------------";
	 cout<<"\n 1. add student record";
	 cout<<"\n 2. Display student record";
	 cout<<"\n 3. Copy constructor";
	 cout<<"\n 4. Divison wise information";
	 cout<<"\n 5. Exit";
	 cout<<"\n Enter choice";
	 cin>>ch;

	 switch(ch)
	 {
	 	case 1:
	 		s[count].getdata();   //s[0].getdata()  s[1].getdata()
	 		count++;
	 		break;
	 	case 2:
	 		student::display();
		   for(int i=0;i<count;i++)
		   {
		   	s[i].display();
			   	
	       }
		   break;
		case 3:
			{
			cout<<"\n copy constructor";
			student s1;
			s1.getdata();
			student s2(s1);
			student::display();
			s2.display();
		
		}
		break;
		case 4:
			int t_div;
			cout<<"\n Enter division";
			cin>>t_div;
			for(int i=0;i<count;i++)
			{
				t.display_t(s[i],t_div);   //s[1],3
			}
			break;
		case 5:
		 exit(0);     
}
}while(ch!=5);
return 0;
}
