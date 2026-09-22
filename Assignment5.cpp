#include<iostream>
using namespace std;
class Student 
{
    public : 
    
            int rollno;
            int id;
            string name;

            void display()
            {
                cout<<"Roll NO. of student is : "<<rollno<<endl;
                cout<<"Id of the student is : "<<id<<endl;
                cout<<"Name of student is : "<<name<<endl;

            }
             
            Student(int rollno,int id,string name)
            {
                this->rollno = rollno;
                this->id = id;
                this->name = name;

            }

};

int main()
{
   Student s1(32,2502,"Samarth");
   s1.display();
   return 0;
}
