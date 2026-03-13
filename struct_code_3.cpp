// #include<iostream>
// using namespace std;

// class Student_Data{
//     public:
//     string Name;
//     string Roll_Number;  // USING STRING FOR ROLL NUMBER AS HYPHEN WILL BE THERE (25P-3019)
//     int Marks;
// };

// int main()
// {
//     Student_Data student1; // OBJECT OF STUDENT DATA CLASS IS CREATED 
//     cout<<"Enter the name of thw student : ";
//     getline(cin,student1.Name);
//     cout<<"Enter the roll number(25P-0000) of the student : ";
//     getline(cin,student1.Roll_Number);
//     cout<<"Enter the marks of the student : ";
//     cin>>student1.Marks;

//     cout<<endl;

//     cout<<"Displaying the student information : "<<endl;
//     cout<<"Name : "<<student1.Name<<endl;
//     cout<<"Roll Number : "<<student1.Roll_Number<<endl;
//     cout<<"Marks : "<<student1.Marks<<endl;

//     return 0;
// }

// // Question 2
// #include<iostream>
// using namespace std;
// class Book_Data{
//     public:
//     string Book_Title;
//     string Author_Name;
//     int Price;
// };
// int main()
// {
//     Book_Data book1,book2,book3;
//     cout<<"Put the information for book 1 : "<<endl;
//     cout<<"Enter the Book Title : ";
//     getline(cin,book1.Book_Title);
//     cout<<"Enter the Author Name : ";
//     getline(cin,book1.Author_Name);
//     cout<<"Enter the Price of the book : ";
//     cin>>book1.Price;
//     cin.ignore();
//     cout<<endl;
//     cout<<"Put the information for book 2 : "<<endl;
//     cout<<"Enter the Book Title : ";
//     getline(cin,book2.Book_Title);
//     cout<<"Enter the Author Name : ";
//     getline(cin,book2.Author_Name);
//     cout<<"Enter the Price of the book : ";
//     cin>>book2.Price;
//     cin.ignore();
//     cout<<endl;
//     cout<<"Put the information for book 3 : "<<endl;
//     cout<<"Enter the Book Title : ";
//     getline(cin,book3.Book_Title);
//     cout<<"Enter the Author Name : ";
//     getline(cin,book3.Author_Name);
//     cout<<"Enter the Price of the book : ";
//     cin>>book3.Price;   
//     cout<<endl;
//     cout<<"Information of All three Books : "<<endl;
//     cout<<"Book 1 : "<<endl;
//     cout<<"Book Title : "<<book1.Book_Title<<endl;
//     cout<<"Author Name : "<<book1.Author_Name<<endl;
//     cout<<"Price : "<<book1.Price<<endl;
//     cout<<endl;
//     cout<<"Book 2 : "<<endl;
//     cout<<"Book Title : "<<book2.Book_Title<<endl;
//     cout<<"Author Name : "<<book2.Author_Name<<endl;
//     cout<<"Price : "<<book2.Price<<endl;
//     cout<<endl;
//     cout<<"Book 3 : "<<endl;
//     cout<<"Book Title : "<<book3.Book_Title<<endl;
//     cout<<"Author Name : "<<book3.Author_Name<<endl;
//     cout<<"Price : "<<book3.Price<<endl;
//     cout<<endl;
//     return 0;
// }   

// Question 3
// #include<iostream>
// using namespace std;

// class Rectanglee{
//     public:
//     float length;
//     float width;
//     float Calculate_Area()
//     {
//         return length * width;
//     }
// };
// int main()
// {
//     Rectanglee r1;
//     cout<<"Enter the length : ";
//     cin>>r1.length;
//     cout<<"Enter the width : ";
//     cin>>r1.width;
//     cout<<"The Area is : "<<r1.Calculate_Area();
//     return 0;
// }

// Question 4
#include<iostream>
using namespace std;

class result{
    public:
    string name;
    string roll_number;
    float sub_marks[5];

    void Input_Data()
    {
        cout<<"Enter the Name of the Student : ";
        getline(cin,name);
        cout<<"Enter the Roll Number of the Student : ";
        getline(cin,roll_number);
        cout<<"Enter the Subject Marks : "<<endl;
        for(int i = 0; i < 5; i++)
        {
            cout<<"Enter the marks for subject "<<i+1<<" : ";
            cin>>sub_marks[i];
            if(sub_marks[i]<0){
                cout<<"Enter the marks between 0 to 100."<<endl;
                i--;
            }
        }
    }

    float calculate_average()
    {
        float sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum += sub_marks[i];
        }
        return sum / 5;
    }

    void Display_Result(float a)
    {
        cout<<"============================================"<<endl;
        cout<<"RESULT OF THE STUDENT : "<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<roll_number<<endl;
        cout<<"Subject Marks :"<<endl;
        for(int i = 0; i < 5; i++)
        {
            cout<<"Subject "<<i+1<<" Marks : "<<sub_marks[i]<<endl;
        }
        cout<<"Average : "<<a<<endl;
        cout<<"Pass/Fail : ";
        if(a>=50){
            cout<<"Pass"<<endl;
        }
        else cout<<"Fail"<<endl;
        cout<<"============================================"<<endl;
    }
};

int main()
{
    result std1;
    std1.Input_Data();
    float average;
    average = std1.calculate_average();
    std1.Display_Result(average);
    return 0;
}