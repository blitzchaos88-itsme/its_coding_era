// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     string name;
//     int roll_number;
//     int marks;
// };

// int main(){
//     Student s1;
//     s1.marks = 90;
//     s1.roll_number = 3019;
//     s1.name = "Abdul Munim";

//     cout << s1.name << " " << s1.roll_number << " " << s1.marks << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Book{
//     private:
//     string BookTitle;
//     string AuthorName;
//     int price;

//     public:
//     Book(string Bt = "NA",string An = "Abdul Munim", int p = 90){
//         BookTitle = Bt;
//         AuthorName = An;
//         price = p;
//     }
//     void display()const{
//         cout << BookTitle;
//         cout << " " << AuthorName << " " << price << endl;
//     }
// };

// int main(){
//     Book b1("Physics","Paracha");
//     b1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Rectangle{
//     private:
//     int length;
//     int width;
    
//     public:
//     void set_Len(int l){
//         length = l;
//     }
//     void set_wid(int w){
//         width = w;
//     }
//     int calcArea(){
//         return length*width;
//     }
// };

// int main()
// {   
//     Rectangle r1;
//     r1.set_Len(6);
//     r1.set_wid(5);
//     cout << r1.calcArea();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Result{
//     private:
//     string name;
//     string roll_no;
//     int array[5];
//     float average;

//     public:
//     void inputData(){
//         cout << "Enter Name : ";
//         getline(cin>>ws,name);
//         cout << "Enter Roll Number : ";
//         getline(cin>>ws,roll_no);
//         cout << "Enter suject marks : ";
//         for(int i = 0; i < 5; i++){
//             cout << "Enter marks for subject " << i+1 << ":";
//             cin >> array[i];
//         }
//     }
//     void calculateAverage(){
//         float sum = 0;
//         for(int i = 0; i < 5; i++){
//             sum += array[i];
//         }

//         average = sum / 500.0  * 100;
//     }

//     void displayresult(){
//         cout << "Name : " <<name << " Roll no : " << roll_no << endl;
//         cout << "Marks " << endl;
//         for (int i = 0; i < 5; i++){
//             cout << "Marks of subject " << i + 1 << ": " << array[i];
//             cout << endl;
//         }
//         cout << "Average : " << average << endl;
//     }
// };

// int main()
// {
//     Result r1;
//     r1.inputData();
//     r1.calculateAverage();
//     r1.displayresult();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Employee{
//     private:
//     string Name;
//     int Eid;
//     long Basic_Salaray;

//     public:
//     void inputData();
//     float calculateBonus();
//     void displaydetails();
// };

// void Employee::inputData(){
//     cout << "Name : ";
//     getline(cin>>ws,Name);
//     cout << "Eid : ";
//     cin >> Eid;
//     cout << "Basic_Salary : ";
//     cin >> Basic_Salaray;
// }

// float Employee::calculateBonus(){
//     return Basic_Salaray * 0.10;
// }

// void Employee::displaydetails(){
//     cout << "Name : " << Name << endl;
//     cout << "Eid : " << Eid << endl;
//     cout << "Basic Salary : " << Basic_Salaray << endl;
//     cout << "Salaray AFter Bonus : " << Basic_Salaray + calculateBonus();

// }

// int main()
// {
//     Employee e1;
//     e1.inputData();
//     e1.displaydetails();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Result{
//     private:
//     string student_name;
//     string roll_number;
//     float marks[5];
//     float average;
//     public:
//     Result(string std,string rn, float *a){
//         student_name = std;
//         roll_number = rn;
//         for(int i = 0; i < 5; i++){
//             marks[i] = *(a+i);
//         }
//     }

//     void calcaver(){
//         float sum = 0;
//         for(int i = 0; i < 5; i++){
//             sum += marks[i];
//         }
//         average = sum / 500 * 100;
//     }

//     void display(){
//         cout << "Name : " << student_name << " ";
//         cout << "\n Roll Number : " << roll_number << " \n";
//         cout << "Marks : " << "\n";
//         for(int i = 0; i < 5; i++){
//             cout << "Marks " << i+1 << " : " << marks[i];
//             cout << "\n";
//         }
//         cout << "average : " << average << endl;
//         if(average >= 50){
//             cout << "Pass" << "\n";
//         }
//         else
//         {
//             cout << "Fail" << "\n";
//         }
//     }
// };

// int main()
// {
//     float array[5] = {90,67,77,87,66};
//     Result r1("Abd Mun","25p-3019",array);
//     r1.calcaver();
//     r1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class BankAccount{
//     private:
//     static int totalBalance;

//     public:
//     BankAccount(int tb){
//         totalBalance += tb;
//     }
//     static void showbalance(){
//         cout << "The total balance is : " << totalBalance << endl;
//     }
// };

// int BankAccount::totalBalance = 0;

// int main()
// {
//     BankAccount b1(2500),b2(4500),b3(6700);
//     b1.showbalance();
//     cout << "\n";
//     b2.showbalance();
//     cout << "\n";
//     b3.showbalance();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class LibraryBook{
//     private:
//     static int counter;

//     public:
//     LibraryBook(){
//         if(counter < 5){
//             cout << "BOOKKK ADDED ! " << endl;
//             counter++; 
//         }
//         else
//         {
//             cout << "MAX LIMIT REACHED ! " << endl;
//         }
//     }
//     static void show_count(){
//         cout << "The current book count is : " << counter << endl;
//     }
//     ~LibraryBook(){
//         if (counter > 0){
//             cout << "BOOK RETURNED ! " << endl;
//             counter--;
//         }
//         else {
//             cout << "The extra object being destroyed" << endl;
//         }
//     }
// };
// int LibraryBook::counter = 0;

// int main()
// {
//     LibraryBook b1,b2,b3,b4,b5,b6;
//     b6.show_count();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Circle{
//     private:
//     float radius;
//     public:
//     void inputradius(){
//         cout << "Enter radius : ";
//         cin >> radius;
//     }
//     float caclulatearea(){
//         return 3.14 * radius * radius;
//     }
//     float calculatecircumference(){
//         return 2 * 3.14 * radius;
//     }
// };

// int main()
// {
//     Circle c1;
//     c1.inputradius();
//     cout << c1.caclulatearea() << "\n";
//     cout << c1.calculatecircumference() << "\n";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class BankAccount{
//     private:
//     string account_number;
//     string account_holder_name;
//     long balance;

//     public:
//     void deposit(){
//         cout << "Enter money : ";
//         cin >> balance;
//     }

//     void withdrawal(){
//         if(balance <= 0){
//             cout << "Account balance is 0 .." << balance << endl;
//         }
//         else
//         {
//             again:
//             int moneywitdrawn = 0;
//             cout << "Your Balance is : " << balance << endl;
//             cout << "How many you want to withdraw : ";
//             cin >> moneywitdrawn;
//             if(moneywitdrawn > balance){
//                 cout << "Money can't be withdrwan insuffiecient amount" << endl;
//                 goto again;
//             }
//             else
//             {
//                 balance -= moneywitdrawn;
//                 cout << "Money left in account is : " << balance << endl;
//             }
//         }
//     }
// };

// int main(){
//     BankAccount b1,b2;
//     b1.deposit();
//     b1.withdrawal();
//     b2.deposit();
//     b2.withdrawal();
    // return 0;
// }

// #include<iostream>
// using namespace std;

// class Car{
//     private:
//     string car_name;
//     string model;
//     long long price;

//     public:
//     void inputdet(){
//         cout << "Enter Car Name : ";
//         getline(cin>>ws,car_name);
//         cout << "Enter Car Model : ";
//         getline(cin>>ws,model);
//         cout << "Enter the price : ";
//         cin >> price;
//     }

//     void applydiscount(){
//         float discount = 0;
//         if(price > 5000000){
//             discount = price * 0.05;
//             price -= discount;
//         }
//         else{
//             cout << "No discout " << endl;
//         }
        
//     }

//     void display(){
//         cout << "Name : " << car_name << endl;
//         cout << "Model : " << model << endl;
//         if(price > 5000000)
//         {
//             applydiscount();
//             cout << "Price with discount : " << price << endl;
//         }
//         else{
//             cout << "Price : " << price << endl;
//         }
//     }
// };

// int main()
// {
//     Car c1;
//     c1.inputdet();
//     c1.display();
//     return 0;

// }

// #include<iostream>
// using namespace std;

// class LibraryBook{
//     private:
//     int BookId;
//     string BookTitle;
//     int issuedstatus;

//     public:
//     void enter(){
//         cout << "Book Id : ";
//         cin >> BookId;
//         cout << "Book Title : ";
//         getline(cin>>ws,BookTitle);
//     }
//     void issebook(){
//         int choice;
//         again:
//         cout << "You wanna issue " << BookTitle;
//         cout << "Enter 1 or 0 ";
//         cin >> choice;
//         if(choice >=0 || choice <= 1){
//             if(choice == 1){
//                 issuedstatus = 1;
//                 cout << "Book issued" << endl;
//             }
//             else{
//                 issuedstatus = 0;
//                 cout << endl;
//             }
//         }
//         else{
//             goto again;
//         }
//     }

//     void returnBook(){
//         int choice;
//         again:
//         cout << "You wanna return " << BookTitle;
//         cout << "Enter 1 or 0 ";
//         cin >> choice;
//         if(choice >=0 || choice <= 1){
//             if(choice == 1){
//                 issuedstatus = 0;
//                 cout << "Book  returned " << endl;
//             }
//             else{
//                 issuedstatus = 1;
//                 cout << endl;
//             }
//         }
//         else{
//             goto again;
//         }
//     }

//     void displaystatus(){
//         cout << BookId << "  " << BookTitle << " " << issuedstatus << endl;
//     }
// };

// int main(){
//     LibraryBook b1;
//     b1.enter();
//     b1.issebook();
//     b1.returnBook();
//     b1.displaystatus();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Patient{
//     private:
//     int PatientId;
//     string Name;
//     string Disease;
//     long doctor_fee;

//     public:
//     void inputpatient(){
//         cout << "Id : ";
//         cin >> PatientId;
//         cout << "Name : ";
//         getline(cin>>ws,Name);
//         cout << "Disease Name : ";
//         getline(cin>>ws,Disease);
//         cout << "Doctor Fees : ";
//         cin >> doctor_fee;
//     }

//     void CalculateBill(){
//         float charges = 0;
//         charges = doctor_fee * 0.15;
//         doctor_fee += charges;

//         cout << "The total bill after medicine charges : " << doctor_fee << endl;
//     }

//     void display()
//     {
//         cout << "PatientId : " << PatientId << endl;
//         cout << "Name : " << Name << endl;
//         cout << "Disease Name : " << Disease << endl;
//         cout << "Total Doctor Fee : " << doctor_fee << endl;
//     }
// };

// int main()
// {
//     Patient p1;
//     p1.inputpatient();
//     p1.CalculateBill();
//     p1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class HotelRom{
//     private:
//     int Room_Number;
//     string Room_Type;
//     long Rent_pd;
//     int number_of_days;
//     long total_bill;

//     public:
//     void bookRoom(){
//         cout << "Enter Room Number : ";
//         cin >> Room_Number;
//         cout << "Enter Room Type : ";
//         getline(cin>>ws,Room_Type);
//         cout << "Rent Per day : ";
//         cin >> Rent_pd;
//         cout << "Total number of days to stay : ";
//         cin >> number_of_days;
//     }
//     void Calculate_Bill(){
//         float tax = 0;
//          total_bill = Rent_pd * number_of_days;
//          tax = total_bill * 0.10;
//          total_bill += tax;
//     }
//     void display()
//     {
//         cout << "Room Number : " << Room_Number << endl;
//         cout << "Room Type : " << Room_Type << endl;
//         cout << "Rent Per Day : " << Rent_pd << endl;
//         cout << "Number of days stayed : " << number_of_days << endl;
//         cout << "Total Bill " << total_bill << endl;
//     }
// };

// int main()
// {
//     HotelRom r1;
//     r1.bookRoom();
//     r1.Calculate_Bill();
//     r1.display();
//     return 0;
// }

// All the operator overloading codes
// #include<iostream>
// using namespace std;

// class Distance{
//     private:
//     int feet;
//     int inches;

//     public:
//     Distance(){

//     }
//     Distance(int f,int inc){
//         feet = f;
//         inches = inc;
//     }

//     Distance operator +(Distance&d){
//         Distance temp;
//         temp.feet = d.feet + feet;
//         temp.inches = d.inches + inches;
//         if(temp.inches >= 12){
//             temp.feet += (temp.inches / 12);
//             temp.inches = (temp.inches % 12);
//         }
//         return temp;
//     }

//     bool operator == (const Distance &d){
//         if(feet == d.feet && inches == d.inches){
//             return true;
//         }
//         else
//         {
//             return false;
//         }

//     }
//     void display(){
//         cout << feet << "Feet" << inches << "inshes" << endl;
//     }
// };

// int main()
// {
//     Distance d1(5,7),d2(5,7),d3;
//     d3 = d1 + d2;  // d1.add(d2)
//     d3.display();
//     if(d1==d2){
//         cout << "Distances are equal" << endl;
//     }
//     else 
//     {
//         cout << "Distances are not equal" << endl;
//     }
//     return 0;

// }

// Sir's provided question
// #include <iostream>
// using namespace std;

// class Distance
// {
// private:
//     int feet;
//     int inches;

//     // Static variable to count objects
//     static int count;

//     // Function to normalize inches
//     void normalize()
//     {
//         if (inches >= 12)
//         {
//             feet += inches / 12;
//             inches = inches % 12;
//         }

//         // Handle negative inches
//         while (inches < 0)
//         {
//             feet--;
//             inches += 12;
//         }
//     }

// public:

//     // Default Constructor
//     Distance()
//     {
//         feet = 0;
//         inches = 0;
//         count++;
//         cout << "Constructor Called\n";
//     }

//     // Parameterized Constructor
//     Distance(int f, int i)
//     {
//         feet = f;
//         inches = i;
//         normalize();
//         count++;
//         cout << "Parameterized Constructor Called\n";
//     }

//     // Copy Constructor
//     Distance(const Distance &d)
//     {
//         feet = d.feet;
//         inches = d.inches;
//         count++;
//         cout << "Copy Constructor Called\n";
//     }

//     // Destructor
//     ~Distance()
//     {
//         cout << "Destructor Called\n";
//         count--;
//     }

//     // Setter Functions
//     void setFeet(int f)
//     {
//         feet = f;
//     }

//     void setInches(int i)
//     {
//         inches = i;
//         normalize();
//     }

//     // Getter Functions
//     int getFeet() const
//     {
//         return feet;
//     }

//     int getInches() const
//     {
//         return inches;
//     }

//     // Input Function
//     void getDistance()
//     {
//         cout << "Enter Feet: ";
//         cin >> feet;

//         cout << "Enter Inches: ";
//         cin >> inches;

//         normalize();
//     }

//     // Display Function
//     void showDistance() const
//     {
//         cout << feet << "'-" << inches << "\"";
//     }

//     // Overload + Operator
//     Distance operator+(const Distance &d)
//     {
//         Distance temp;

//         temp.feet = feet + d.feet;
//         temp.inches = inches + d.inches;

//         temp.normalize();

//         return temp;
//     }

//     // Overload < Operator
//     bool operator<(const Distance &d)
//     {
//         if (feet < d.feet)
//             return true;

//         if (feet == d.feet && inches < d.inches)
//             return true;

//         return false;
//     }

//     // Overload += Operator
//     Distance operator+=(const Distance &d)
//     {
//         feet += d.feet;
//         inches += d.inches;

//         normalize();

//         return *this;
//     }

//     // Prefix Increment ++
//     Distance operator++()
//     {
//         inches++;
//         normalize();

//         return *this;
//     }

//     // Prefix Decrement --
//     Distance &operator--()
//     {
//         inches--;

//         normalize();

//         return *this;
//     }

//     // Stream Insertion <<
//     friend ostream &operator<<(ostream &out, const Distance &d);

//     // Stream Extraction >>
//     friend istream &operator>>(istream &in, Distance &d);

//     // Static Function
//     static int getCount()
//     {
//         return count;
//     }
// };

// // Initialize Static Variable
// int Distance::count = 0;

// // << Operator
// ostream &operator<<(ostream &out, const Distance &d)
// {
//     out << d.feet << "'-" << d.inches << "\"";
//     return out;
// }

// // >> Operator
// istream &operator>>(istream &in, Distance &d)
// {
//     cout << "Enter Feet: ";
//     in >> d.feet;

//     cout << "Enter Inches: ";
//     in >> d.inches;

//     d.normalize();

//     return in;
// }

// // Main Function
// int main()
// {
//     Distance d1(15, 8);
//     Distance d2;

//     cin >> d2;

//     cout << "\nDistance 1: " << d1 << endl;
//     cout << "Distance 2: " << d2 << endl;

//     // Addition
//     Distance d3 = d1 + d2;
//     cout << "\nAfter Addition: " << d3 << endl;

//     // Less Than
//     if (d1 < d2)
//         cout << "d1 is smaller than d2\n";
//     else
//         cout << "d1 is greater or equal to d2\n";

//     // += Operator
//     d1 += d2;
//     cout << "\nAfter += : " << d1 << endl;

//     // Increment
//     ++d1;
//     cout << "After ++ : " << d1 << endl;

//     // Decrement
//     --d1;
//     cout << "After -- : " << d1 << endl;

//     // Object Count
//     cout << "\nTotal Objects: " << Distance::getCount() << endl;

//     return 0;
// // }

// #include <iostream>
// using namespace std;

// class Time
// {
//     int hr, min, sec;

// public:
//     Time(int h = 0, int m = 0, int s = 0)
//     {
//         hr = h;
//         min = m;
//         sec = s;
//     }

//     void normalize()
//     {
//         min += sec / 60;
//         sec = sec % 60;

//         hr += min / 60;
//         min = min % 60;
//     }

//     Time operator+(Time t)
//     {
//         Time temp;

//         temp.hr = hr + t.hr;
//         temp.min = min + t.min;
//         temp.sec = sec + t.sec;

//         temp.normalize();

//         return temp;
//     }

//     void display()
//     {
//         cout << hr << ":" << min << ":" << sec << endl;
//     }
// };

// int main()
// {
//     Time t1(1, 59, 50), t2(0, 0, 20);

//     Time t3 = t1 + t2;

//     t3.display();
// }

// Library Book Management System
// #include<iostream>
// using namespace std;

// class Book{
//     private:
//     int BookId;
//     string BookName;
//     int numberofpages;

//     public:
//     Book(int b = 1,string s = "NA",int np = 10){
//         BookId = b;
//         BookName = s;
//         numberofpages = np;
//     }
    
//     Book operator +(Book &b1){
//         Book temp;
//         temp.numberofpages = numberofpages + b1.numberofpages;
//         temp.BookId = 2;
//         temp.BookName = "The Beleiver";
//         return temp;
//     }
    
//     bool operator == (Book &b){
//         if(BookId == b.BookId){
//             return true;
//         }
//         return false;
//     }

//     bool operator > (Book &b){
//         if(numberofpages > b.numberofpages){
//             return true;
//         }
//         return false;
//     }

//     Book &operator ++(){
//         numberofpages += 10;
//         return *this;
//     }

//     friend istream& operator >>(istream& in,Book &b);
//     friend ostream& operator <<(ostream& out,Book &b);
// };

// istream& operator >> (istream& in,Book &b){
//     cout << "Enter ID Name Pages : ";
//     in >> b.BookId >> b.BookName >> b.numberofpages;
//     return in;
// }

// ostream& operator << (ostream& out,Book &b){
//     out << b.BookId << b.BookName << b.numberofpages;
//     return out;
// }

// int main()
// {
//     Book b1,b2;
//     cin >> b1;
//     cout << b1;
//     cin >> b2;
//     Book b3 = b1 + b2;

//     ++b3;

//     cout << b3 << endl;
//     if(b1 == b2){
//         cout << "ID SAME" << endl;
//     }
//     else cout << "Not same";

//     if(b3 > b1){
//         cout << "Number of pages are more. " << endl;
//     }
//     else cout << "Not "<< endl;
    
//     return 0;
// }

// University Result System
// #include <iostream>
// using namespace std;

// class Result
// {
//     string name;
//     int roll, marks[5];

// public:
//     Result(int r = 0, string n = "")
//     {
//         roll = r;
//         name = n;

//         for (int i = 0; i < 5; i++)
//             marks[i] = 0;
//     }

//     void input()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cin >> marks[i];
//         }
//     }

//     Result operator+(Result r)
//     {
//         Result temp;

//         for (int i = 0; i < 5; i++)
//         {
//             temp.marks[i] = marks[i] + r.marks[i];
//         }

//         return temp;
//     }

//     bool operator>(Result r)
//     {
//         int sum1 = 0, sum2 = 0;

//         for (int i = 0; i < 5; i++)
//         {
//             sum1 += marks[i];
//             sum2 += r.marks[i];
//         }

//         return sum1 > sum2;
//     }

//     bool operator==(Result r)
//     {
//         return roll == r.roll;
//     }

//     Result operator++()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             marks[i] += 5;

//             if (marks[i] > 100)
//                 marks[i] = 100;
//         }

//         return *this;
//     }

//     void display()
//     {
//         int total = 0;

//         for (int i = 0; i < 5; i++)
//         {
//             cout << marks[i] << " ";
//             total += marks[i];
//         }

//         cout << "\nAverage: " << total / 5.0 << endl;
//     }
// };

// int main()
// {
//     Result r1(1, "Ali");
//     Result r2(2, "Ahmed");

//     r1.input();
//     r2.input();

//     ++r1;

//     Result r3 = r1 + r2;

//     r3.display();

//     if (r1 > r2)
//         cout << "Ali has higher marks";
//         return 0;
// }

// Sir Zulqarnain Codes for understanding
// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     int salary;

// public:
//     Employee(int s) : salary{ s } {}

//     bool operator>(const Employee& e) const {
//         return this->salary > e.salary;
//     }

//     bool operator<(const Employee& e) const {
//         return this->salary < e.salary;
//     }

//     int getSalary()  {
//         return salary;
//     }
// };

// int main() {
//     Employee emp1(50000);
//     Employee emp2(140000);

//     if (emp1 > emp2) {
//         cout << "Employee 1 has a higher salary."<<endl;
//     }
//     else {
//         cout << "Employee 2 has a higher salary."<<endl;
//     }

//     if(emp1 < emp2){
//         cout << "Employee 2 has a higher salaary."<<endl;
//     }
//     else {
//         cout << "Employee 1 has a higher salary."<<endl;
//     }  

//     return 0;
// }

//  #include <iostream>
// using namespace std;

// class Employee {
// private:
//     int salary;

// public:
//     Employee(int s = 0) : salary(s) {}

//     Employee operator+(int bonus) {
//         Employee temp;
//         temp.salary = salary + bonus;
//         return temp;
//     }

//     void show() {
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main() {
//     int bonus = 5000;
//     Employee emp1(30000), emp2;

//     emp2 = emp1 + bonus;
//     emp2.show();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class student {
//     float gpa[8];
// public:
//     student(float s1, float s2, float s3, float s4, float s5, float s6, float s7, float s8 ) {
//         gpa[0] = s1;
//         gpa[1] = s2;
//         gpa[2] = s3;
//         gpa[3] = s4;
//         gpa[4] = s5;
//         gpa[5] = s6;
//         gpa[6] = s7;
//         gpa[7] = s8;
//     }
//     //  [] array subscript overloading
//    float& operator[](int index) {   // & ia used to return current object gpa at that index
        
//        return gpa[index];
//     }


// };
//     int main() {
//         student musadiq(2.6, 3.01, 3.03, 3.05, 3.4, 3.2, 3.21, 3.3);
//         cout << musadiq[1] <<endl;

//         musadiq[0] = 2.8;
//         cout << musadiq[0];

//         return 0;
//     }

// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     int eID;
//     float salary;

// public:
//     Employee() : eID(0), salary(0.0) {}
//     Employee(int id, float sal) : eID(id), salary(sal) {}

//     friend ostream& operator<<(ostream& out, const Employee& e);
//     friend istream& operator>>(istream& in, Employee& e);
// };

// ostream& operator<<(ostream& out, const Employee& e) {
//     out << "Employee ID: " << e.eID
//          << ", Salary: " << e.salary;
//     return out;
// }

// istream& operator>>(istream& in, Employee& e) {
//     cout << "Enter Employee ID: ";
//     in >> e.eID;
//     cout << "Enter Salary: ";
//     in >> e.salary;
//     return in;
// }

// int main() {
//     Employee e1, e2;

//     cout << "Enter details for Employee 1:"<<endl;
//     cin >> e1;

//     cout << "Enter details for Employee 2:"<<endl;
//     cin >> e2;

//     cout << "Employee Details:"<<endl;
//     cout << e1 << endl;
//     cout << e2 << endl;

//     return 0;
// }

// = assignment overloading
// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     int eID;
//     float *salary;

// public:
//     Employee() : eID(0), salary(new float(0.0)) {
//         cout << "Default Constructor is Called." << endl;
//     }

//     Employee(int id, float sal) : eID(id) {
//         salary = new float(sal);
//     }

//     // Copy Constructor
//     Employee(const Employee &e) {
//         eID = e.eID;
//         salary = new float(*(e.salary));
//     }

//     // Assignment Operator
//     Employee &operator=(const Employee &e) {
//         if (this != &e) {
//             eID = e.eID;
//             delete salary;
//             salary = new float(*(e.salary));
//         }
//         return *this;
//     }

//     void setSalary(float sal) {
//         delete salary;
//         salary = new float(sal);
//     }

//     void display() {
//         cout << "ID = " << eID << ", Salary = " << *salary << endl;
//     }

//     ~Employee() {
//         delete salary;
//     }
// };

// int main() {
//     Employee e1(101, 50000);
//     Employee e2;
//     Employee e3;

//     e3 = e2 = e1;

//     e1.display();
//     e1.setSalary(60000);
//     e1.display();

//     e2.display();
//     e2.setSalary(2300);
//     e2.display();
//     e3.display();

//     return 0;
// }

