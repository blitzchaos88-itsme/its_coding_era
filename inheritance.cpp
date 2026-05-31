// #include<iostream>
// using namespace std;

// class Person{
//     protected:
//     string Name;
//     int Age;

//     public:
//     void SetPersonDetails(){
//         cout << "Name : ";
//         getline(cin>>ws,Name);
//         cout << "Age : ";
//         cin >> Age;
//     }
//     void DisplayPersonDetails() const {
//         cout << "Name : " << Name << endl;
//         cout << "Age : " << Age << endl;
//     }
// };

// class AcademicRecord : public Person{
//     protected:
//     float GPA;
//     string Major;

//     public:
//     void SetAcadmeicDetails(){
//         cout << "GPA : ";
//         cin >> GPA;
//         cout << "Major : ";
//         getline(cin>>ws,Major);
//     }

//     void DisplayAcademicRecords() const {
//         cout << "GPA : " << GPA << endl;
//         cout << "Major : " << Major << endl;
//     }
// };

// class Scholarship : public AcademicRecord{
//     public:
//     long Scholarship;

//     void EvaluateScholarship(){
//         if(GPA >= 3.5 && Age < 25){
//             Scholarship = 50000;
//         }
//         else{
//             Scholarship = 0;
//         }
//     }

//     void displayScholarshipDetails(){
//         cout << "Scholarship : " << Scholarship << endl; 
//     }
// };

// int main()
// {
//     Scholarship s1;
//     s1.SetPersonDetails();
//     s1.SetAcadmeicDetails();
//     s1.EvaluateScholarship();
//     s1.DisplayPersonDetails();
//     s1.DisplayAcademicRecords();
//     s1.displayScholarshipDetails();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Employee{
//     protected:
//     int EmployeeID;
//     string EmployeeName;
//     long BasicSalary;

//     public:
//     void setemployee(int id,string name,long bs){
//         EmployeeID = id;
//         EmployeeName = name;
//         BasicSalary = bs;
//     }
//     void display() const{
//         cout << "Employee ID : " << EmployeeID << endl;
//         cout << "Employee Name : " << EmployeeName << endl;
//         cout << "Basic Salary : " << BasicSalary << endl;
//     }
// };

// class Manager : public Employee{
//     private:
//     int Bonus;
//     string Department;
//     int total_salary;

//     public:
//     void setManagerdetails(int Bonus,string Department){
//         this->Bonus = Bonus;
//         this->Department = Department;
//     }

//     void CalculateTotalSalary(){
//         total_salary = BasicSalary + Bonus;
//     }

//     void display(){
//         Employee ::display();
//         cout << "Department : " << Department << endl;
//         CalculateTotalSalary();
//         cout << "Total Salary After the Bonus : " << total_salary << endl;
//     }
// };

// int main()
// {
//     Manager m1;
//     m1.setemployee(3019,"Abdul Munim",25000000);
//     m1.setManagerdetails(3000000,"ISI");
//     m1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Product{
//     protected:
//     int ProductID;
//     string ProductName;
//     int ProductPrice;

//     public: 
//     void setProduct(){
//         cout << "Product Id : ";
//         cin >> ProductID;
//         cout << "Product Name : ";
//         getline(cin>>ws,ProductName);
//         cout << "Product Price : ";
//         cin >> ProductPrice;
//     }

//     void display(){
//         cout << "Product Id : " << ProductID << endl;
//         cout << "Product Name : " << ProductName << endl;
//         cout << "Product Price : " << ProductPrice << endl;
//     }

// };

// class Electornics : public Product{
//     private:
//     int WarrantyPeriod;
//     string Brand;

//     public:
//     void discountedprice(){
//         float discount = 0;
//         discount = ProductPrice * 0.10;
//         ProductPrice -= discount;
//         WarrantyPeriod = 3;
//         Brand = "Haier";
//     }

//     void display(){
//         cout << "Product Id : " << ProductID << endl;
//         cout << "Product Name : " << ProductName << endl;
//         cout << "Product Price : " << ProductPrice << endl;
//         discountedprice();
//         cout << "Warranty Period : " << WarrantyPeriod << endl;
//         cout  << "Brand : " << Brand << endl;
//         cout << "Discounted Price : " << ProductPrice << endl;    
//     }

// };

// class Clothing : public Product{
//     private:
//     int Size;
//     string FabricType;

//     public:
//     void discountedprice(){
//         float discount = 0;
//         discount = ProductPrice * 0.15;
//         ProductPrice -= discount;
//         Size = 10;
//         FabricType = "Cotton";
//     }
//     void display(){
//         cout << "Product Id : " << ProductID << endl;
//         cout << "Product Name : " << ProductName << endl;
//         cout << "Product Price : " << ProductPrice << endl;
//         discountedprice();
//         cout << "Size  : " << Size  << endl;
//         cout  << "Fabric Type : " << FabricType << endl;
//         cout << "Discounted Price : " << ProductPrice << endl;    
//     }
// };

// int main()
// {
//     Electornics e1;
//     Clothing c1;
//     e1.setProduct();
//     e1.display();
//     cout << endl;
//     c1.setProduct();
//     c1.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Student{
//     protected:
//     string roll_number;
//     string Name;

//     public:
//     void SetStudent(){
//         cout << "Roll Number : ";
//         getline(cin>>ws,roll_number);
//         cout << "Name : ";
//         getline(cin>>ws,Name);
//     }

//     void displaystudent(){
//         cout << "Name : " << Name << endl;
//         cout << "Roll Number : " << roll_number << endl;
//     }
// };

// class Marks : public Student{
//     protected:
//     int OOPmarks,DSAmarks,Calculusmarks;
//     int total;
//     public:
//     void SetMarks(){
//         cout << "Enter OOP Marks : ";
//         cin >> OOPmarks;
//         cout << "Enter DSA Marks : ";
//         cin >> DSAmarks;
//         cout << "Enter Calculus Marks : ";
//         cin >> Calculusmarks;
//     }

//     int CalculateTotal(){
//         total = OOPmarks + DSAmarks + Calculusmarks;
//        return total;
//     }
// };

// class Result : public Marks{
//     public:
//     float percentage;
//     char grade;
//     void calculatepercentage(){
//         int sum = CalculateTotal();
//         percentage = (sum / 300.0) * 100;
//     }

//     void calculateGrade(){
//         if(percentage >= 80){
//             grade = 'A';
//         }
//         else if(percentage >= 70){
//             grade = 'B';
//         }
//         else if(percentage >= 60){
//             grade = 'C';
//         }
//         else
//         grade = 'F';
//     }
//         void displaystudent() {
//         cout << "Name : " << Name << endl;
//         cout << "Roll Number : " << roll_number << endl;
//         cout << "Total Marks : " << total << endl;
//         cout << "Percentage : " << percentage << "%" << endl;
//         cout << "Grade : " << grade << endl;
//     }
// };

// int main()
// {
//     Result r1;
//     r1.SetStudent();
//     r1.SetMarks();
//     r1.calculatepercentage();
//     r1.calculateGrade();
//     r1.displaystudent();
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// // Base Class: Account
// class Account {
// protected: // Protected so derived classes can access
//     long accountNumber;
//     string holderName;
//     double balance;

// public:
//     Account(long accNum, string name, double bal) 
//         : accountNumber(accNum), holderName(name), balance(bal) {}

//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             cout << "Deposited: $" << amount << " | New Balance: $" << balance << endl;
//         }
//     }

//     // Virtual to allow override in derived classes
//     virtual void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             cout << "Withdrawn: $" << amount << " | New Balance: $" << balance << endl;
//         } else {
//             cout << "Insufficient funds or invalid amount." << endl;
//         }
//     }

//     void display() const {
//         cout << "-----------------------" << endl;
//         cout << "Account Holder: " << holderName << endl;
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: $" << balance << endl;
//     }
// };

// // Derived Class 1: SavingsAccount
// class SavingsAccount : public Account {
// private:
//     double interestRate;

// public:
//     SavingsAccount(long accNum, string name, double bal, double rate)
//         : Account(accNum, name, bal), interestRate(rate) {}

//     void calculateInterest() {
//         double interest = (balance * interestRate) / 100;
//         balance += interest;
//         cout << "Interest added: $" << interest << " | New Savings Balance: $" << balance << endl;
//     }
// };

// // Derived Class 2: CurrentAccount
// class CurrentAccount : public Account {
// private:
//     double overdraftLimit;

// public:
//     CurrentAccount(long accNum, string name, double bal, double limit)
//         : Account(accNum, name, bal), overdraftLimit(limit) {}

//     // Overriding withdraw to include overdraft check
//     void withdraw(double amount) override {
//         if (amount > 0 && (balance + overdraftLimit) >= amount) {
//             balance -= amount;
//             cout << "Withdrawn: $" << amount << " | New Current Balance: $" << balance << endl;
//         } else {
//             cout << "Overdraft limit exceeded!" << endl;
//         }
//     }

//     void checkOverdraft() const {
//         cout << "Current Overdraft Limit: $" << overdraftLimit << endl;
//     }
// };

// int main() {
//     cout << "=== Savings Account Operations ===" << endl;
//     SavingsAccount s1(101, "Alice", 5000.0, 5.0); // 5% interest
//     s1.display();
//     s1.deposit(1000);
//     s1.calculateInterest();
//     s1.display();

//     cout << "\n=== Current Account Operations ===" << endl;
//     CurrentAccount c1(201, "Bob", 1000.0, 2000.0); // $2000 Overdraft
//     c1.display();
//     c1.withdraw(2500); // Allowed due to overdraft
//     c1.checkOverdraft();
//     c1.display();

//     return 0;
// }

// ================= QUESTION 7 =================
// SMART HOME SYSTEM
// Hybrid Inheritance

// #include<iostream>
// using namespace std;

// class Device{
// protected:
//     int deviceID;
//     bool power;

// public:
//     void setDevice(int id,bool p){
//         deviceID = id;
//         power = p;
//     }

//     void displayDevice(){
//         cout << "Device ID : " << deviceID << endl;
//         cout << "Power Status : ";

//         if(power)
//             cout << "ON" << endl;
//         else
//             cout << "OFF" << endl;
//     }
// };

// class SmartDevice : virtual public Device{
// protected:
//     bool wifi;
//     bool appControl;

// public:
//     void setSmartDevice(bool w,bool a){
//         wifi = w;
//         appControl = a;
//     }

//     void displaySmartDevice(){

//         cout << "WiFi : ";

//         if(wifi)
//             cout << "Connected" << endl;
//         else
//             cout << "Disconnected" << endl;

//         cout << "App Control : ";

//         if(appControl)
//             cout << "Enabled" << endl;
//         else
//             cout << "Disabled" << endl;
//     }
// };

// class SecurityDevice : virtual public Device{
// protected:
//     bool alarm;
//     string resolution;

// public:
//     void setSecurity(bool a,string r){
//         alarm = a;
//         resolution = r;
//     }

//     void displaySecurity(){

//         cout << "Alarm : ";

//         if(alarm)
//             cout << "Active" << endl;
//         else
//             cout << "Inactive" << endl;

//         cout << "Camera Resolution : " << resolution << endl;
//     }
// };

// class SmartSecurityCamera : public SmartDevice, public SecurityDevice{

// public:

//     void displayFullDetails(){

//         displayDevice();
//         displaySmartDevice();
//         displaySecurity();
//     }
// };

// int main(){

//     SmartSecurityCamera s;

//     s.setDevice(101,true);
//     s.setSmartDevice(true,true);
//     s.setSecurity(true,"1080p");

//     s.displayFullDetails();

//     return 0;
// }

// ================= QUESTION 8 =================
// LIBRARY SYSTEM
// Virtual Functions

// #include<iostream>
// using namespace std;

// class LibraryItem{
// protected:
//     string title;
//     int id;

// public:

//     void setItem(string t,int i){
//         title = t;
//         id = i;
//     }

//     virtual void calculateFine(int days){
//         cout << "Fine Calculation" << endl;
//     }

//     void displayItem(){
//         cout << "Title : " << title << endl;
//         cout << "ID : " << id << endl;
//     }
// };

// class Book : public LibraryItem{

// public:

//     void calculateFine(int days){

//         cout << "Book Fine : " << days * 5 << endl;
//     }
// };

// class Magazine : public LibraryItem{

// public:

//     void calculateFine(int days){

//         cout << "Magazine Fine : " << days * 3 << endl;
//     }
// };

// class DVD : public LibraryItem{

// public:

//     void calculateFine(int days){

//         cout << "DVD Fine : " << days * 10 << endl;
//     }
// };

// int main(){

//     Book b;

//     b.setItem("OOP",11);

//     b.displayItem();

//     b.calculateFine(4);

//     return 0;
// }

// ================= QUESTION 9 =================
// PAYROLL SYSTEM
// Abstract Class

// #include<iostream>
// using namespace std;

// class Employee{
// protected:
//     int id;
//     string name;

// public:

//     void setEmployee(int i,string n){
//         id = i;
//         name = n;
//     }

//     virtual void calculateSalary() = 0;
// };

// class FullTimeEmployee : public Employee{
// private:
//     float monthlySalary;

// public:

//     void setSalary(float s){
//         monthlySalary = s;
//     }

//     void calculateSalary(){

//         cout << "Full Time Salary : "
//              << monthlySalary << endl;
//     }
// };

// class PartTimeEmployee : public Employee{
// private:
//     int hours;
//     float rate;

// public:

//     void setPartTime(int h,float r){
//         hours = h;
//         rate = r;
//     }

//     void calculateSalary(){

//         cout << "Part Time Salary : "
//              << hours * rate << endl;
//     }
// };

// int main(){

//     FullTimeEmployee f;

//     f.setEmployee(1,"Ali");

//     f.setSalary(50000);

//     f.calculateSalary();

//     return 0;
// }

// ================= QUESTION 10 =================
// AIRLINE RESERVATION SYSTEM

// #include<iostream>
// using namespace std;

// class Flight{
// protected:
//     int flightNo;
//     string destination;
//     float ticketPrice;

// public:

//     void setFlight(int f,string d,float p){

//         flightNo = f;
//         destination = d;
//         ticketPrice = p;
//     }

//     void displayFlight(){

//         cout << "Flight Number : "
//              << flightNo << endl;

//         cout << "Destination : "
//              << destination << endl;

//         cout << "Ticket Price : "
//              << ticketPrice << endl;
//     }
// };

// class Passenger : public Flight{
// protected:
//     string passengerName;
//     string passportNumber;

// public:

//     void setPassenger(string n,string p){

//         passengerName = n;
//         passportNumber = p;
//     }

//     void displayPassenger(){

//         cout << "Passenger Name : "
//              << passengerName << endl;

//         cout << "Passport Number : "
//              << passportNumber << endl;
//     }
// };

// class BusinessClassPassenger : public Passenger{
// private:
//     bool loungeAccess;
//     int extraBaggage;

// public:

//     void setBusiness(bool l,int b){

//         loungeAccess = l;
//         extraBaggage = b;
//     }

//     void calculateFinalFare(){

//         float finalFare;

//         finalFare = ticketPrice +
//                     (ticketPrice * 0.40);

//         cout << "Final Fare : "
//              << finalFare << endl;
//     }

//     void displayDetails(){

//         displayFlight();

//         displayPassenger();

//         cout << "Extra Baggage : "
//              << extraBaggage << " KG" << endl;
//     }
// };

// int main(){

//     BusinessClassPassenger b;

//     b.setFlight(1001,"Dubai",50000);

//     b.setPassenger("Ahmed","PK12345");

//     b.setBusiness(true,30);

//     b.displayDetails();

//     b.calculateFinalFare();

//     return 0;
// }

// ================= QUESTION 11 =================
// DIAMOND PROBLEM
// Virtual Inheritance

// #include<iostream>
// using namespace std;

// class Person{
// protected:
//     string name;
//     string cnic;

// public:

//     void setPerson(string n,string c){

//         name = n;
//         cnic = c;
//     }

//     void displayPerson(){

//         cout << "Name : " << name << endl;

//         cout << "CNIC : " << cnic << endl;
//     }
// };

// class Employee : virtual public Person{
// protected:
//     int empID;
//     float salary;

// public:

//     void setEmployee(int e,float s){

//         empID = e;
//         salary = s;
//     }

//     void displayEmployee(){

//         cout << "Employee ID : "
//              << empID << endl;

//         cout << "Salary : "
//              << salary << endl;
//     }
// };

// class Student : virtual public Person{
// protected:
//     int rollNo;
//     float cgpa;

// public:

//     void setStudent(int r,float c){

//         rollNo = r;
//         cgpa = c;
//     }

//     void displayStudent(){

//         cout << "Roll Number : "
//              << rollNo << endl;

//         cout << "CGPA : "
//              << cgpa << endl;
//     }
// };

// class Intern : public Employee, public Student{
// private:
//     int duration;
//     string project;

// public:

//     void setIntern(int d,string p){

//         duration = d;
//         project = p;
//     }

//     void displayIntern(){

//         displayPerson();

//         displayEmployee();

//         displayStudent();

//         cout << "Duration : "
//              << duration << " Months" << endl;

//         cout << "Project : "
//              << project << endl;
//     }
// };

// int main(){

//     Intern i;

//     i.setPerson("Ali","42101");

//     i.setEmployee(101,50000);

//     i.setStudent(22,3.7);

//     i.setIntern(6,"AI System");

//     i.displayIntern();

//     return 0;
// }

// // ================= QUESTION 12 =================
// // SCHOOL ERP SYSTEM
// // Hybrid Inheritance

// #include<iostream>
// using namespace std;

// class Person{
// protected:
//     string name;
//     int age;

// public:

//     void setPerson(string n,int a){

//         name = n;
//         age = a;
//     }
// };

// class Teacher : virtual public Person{
// protected:
//     string subject;
//     float salary;

// public:

//     void setTeacher(string s,float sal){

//         subject = s;
//         salary = sal;
//     }

//     void displayTeacher(){

//         cout << "Teacher Subject : "
//              << subject << endl;

//         cout << "Salary : "
//              << salary << endl;
//     }
// };

// class Student : virtual public Person{
// protected:
//     int rollNo;
//     float marks;

// public:

//     void setStudent(int r,float m){

//         rollNo = r;
//         marks = m;
//     }

//     void displayStudent(){

//         cout << "Roll Number : "
//              << rollNo << endl;

//         cout << "Marks : "
//              << marks << endl;
//     }
// };

// class Administrator{
// protected:
//     int adminID;
//     string department;

// public:

//     void setAdmin(int a,string d){

//         adminID = a;
//         department = d;
//     }

//     void displayAdmin(){

//         cout << "Admin ID : "
//              << adminID << endl;

//         cout << "Department : "
//              << department << endl;
//     }
// };

// class SchoolManagement :
// public Teacher,
// public Student,
// public Administrator{

// public:

//     void displayAll(){

//         cout << "Name : "
//              << name << endl;

//         cout << "Age : "
//              << age << endl;

//         displayTeacher();

//         displayStudent();

//         displayAdmin();

//         cout << "Percentage : "
//              << marks << "%" << endl;

//         cout << "Annual Salary : "
//              << salary * 12 << endl;
//     }
// };

// int main(){

//     SchoolManagement s;

//     s.setPerson("Ahmed",25);

//     s.setTeacher("OOP",50000);

//     s.setStudent(101,85);

//     s.setAdmin(1,"Management");

//     s.displayAll();

//     return 0;
// }