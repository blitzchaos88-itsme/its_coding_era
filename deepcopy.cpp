// #include <iostream>
// #include <cstring>
// using namespace std;

// class Student{
//     private:
//     string roll_number;
//     char * name;

//     public:
//     Student(string rn,const char * n){
//         roll_number = rn;
//         name = new char (strlen(n)+1);
//         strcpy(name,n);
//     }
//     void display(){
//         cout << roll_number << endl << name << endl;
//     }
//     ~Student(){
//         delete[] name;
//         cout << "In the destructor " << endl;
//     }
// };

// int main()
// {
//     Student s1("101","Usman");
//     Student s2 = s1;
//     s1.display();
//     cout << endl;
//     s2.display();
//     cout << endl;
//     return 0;
// }   

// Question 1
// #include <iostream>
// #include <cstring>
// using namespace std;

// class Book {
// private:
//     char *title;
//     int pages;

// public:
//     // FIX 1: Proper default constructor
//     Book() {
//         title = new char[1];
//         title[0] = '\0';
//         pages = 0;
//     }

//     Book(const char *p, int pages) {
//         title = new char[strlen(p) + 1];
//         strcpy(title, p);
//         this->pages = pages;
//     }

//     Book(const Book &b) {
//         pages = b.pages;
//         title = new char[strlen(b.title) + 1];
//         strcpy(title, b.title);
//     }

//     // FIX 2: const + delete[]
//     Book &operator=(const Book &b) {
//         if (this != &b) {
//             pages = b.pages;

//             delete[] title;   // FIXED

//             title = new char[strlen(b.title) + 1];
//             strcpy(title, b.title);
//         }
//         return *this;
//     }

//     void display() const {
//         cout << "Pages : " << pages << endl;
//         cout << "Title : " << title << endl;
//     }

//     ~Book() {
//         cout << "Destructor called for: " << title << endl;
//         delete[] title;
//     }
// };

// int main() {
//     Book b1("Physics", 250);
//     Book b2 = b1;
//     Book b3;

//     b3 = b1;

//     b1.display();
//     cout << endl;

//     b2.display();
//     cout << endl;

//     b3.display();
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// class Employee{
//     private:
//     char *name;
//     int *salary;
//     int *experience;

//     public:

//     Employee(const char *n,int s,int e){

//         name = new char[strlen(n)+1];
//         strcpy(name,n);

//         salary = new int(s);
//         experience = new int(e);
//     }

//     // Copy Constructor
//     Employee(const Employee &emp){

//         name = new char[strlen(emp.name)+1];
//         strcpy(name,emp.name);

//         salary = new int(*emp.salary);
//         experience = new int(*emp.experience);
//     }

//     // Assignment Operator
//     Employee& operator=(const Employee &emp){

//         if(this != &emp){

//             delete[] name;
//             delete salary;
//             delete experience;

//             name = new char[strlen(emp.name)+1];
//             strcpy(name,emp.name);

//             salary = new int(*emp.salary);
//             experience = new int(*emp.experience);
//         }

//         return *this;
//     }

//     void setName(const char *n){
//         strcpy(name,n);
//     }

//     void setSalary(int s){
//         *salary = s;
//     }

//     void display(){

//         cout << "Name: " << name << endl;
//         cout << "Salary: " << *salary << endl;
//         cout << "Experience: " << *experience << endl;
//     }

//     ~Employee(){

//         delete[] name;
//         delete salary;
//         delete experience;
//     }
// };

// int main(){

//     Employee e1("Ali",50000,3);

//     Employee e2 = e1;

//     e1.setName("Ahmed");
//     e1.setSalary(90000);

//     cout << "Original Object\n";
//     e1.display();

//     cout << "\nCopied Object\n";
//     e2.display();

// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// class Employee{

//     private:
//     char *name;
//     int id;

//     public:

//     Employee(const char *n = "NA",int i = 0){

//         name = new char[strlen(n)+1];
//         strcpy(name,n);

//         id = i;
//     }

//     // Copy Constructor
//     Employee(const Employee &e){

//         name = new char[strlen(e.name)+1];
//         strcpy(name,e.name);

//         id = e.id;
//     }

//     void setName(const char *n){
//         strcpy(name,n);
//     }

//     void display(){

//         cout << "Employee Name: " << name << endl;
//         cout << "ID: " << id << endl;
//     }

//     ~Employee(){
//         delete[] name;
//     }
// };

// class Department{

//     private:
//     char *deptName;
//     Employee *emp;

//     public:

//     Department(const char *d,const char *ename,int id){

//         deptName = new char[strlen(d)+1];
//         strcpy(deptName,d);

//         emp = new Employee(ename,id);
//     }

//     // Deep Copy Constructor
//     Department(const Department &d){

//         deptName = new char[strlen(d.deptName)+1];
//         strcpy(deptName,d.deptName);

//         emp = new Employee(*d.emp);
//     }

//     void changeEmployeeName(const char *n){
//         emp->setName(n);
//     }

//     void display(){

//         cout << "Department: " << deptName << endl;

//         emp->display();
//     }

//     ~Department(){

//         delete[] deptName;
//         delete emp;
//     }
// };

// int main(){

//     Department d1("IT","Ali",101);

//     Department d2 = d1;

//     d1.changeEmployeeName("Ahmed");

//     cout << "Original Object\n";
//     d1.display();

//     cout << "\nCopied Object\n";
//     d2.display();

// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// class BankAccount{

//     private:
//     char *holderName;
//     int *transactions;
//     int totalTransactions;

//     public:

//     // Constructor
//     BankAccount(const char *name,int total){

//         holderName = new char[strlen(name)+1];
//         strcpy(holderName,name);

//         totalTransactions = total;

//         transactions = new int[totalTransactions];

//         cout << "Enter Transactions:\n";

//         for(int i=0;i<totalTransactions;i++){
//             cin >> transactions[i];
//         }
//     }

//     // Deep Copy Constructor
//     BankAccount(const BankAccount &b){

//         holderName = new char[strlen(b.holderName)+1];
//         strcpy(holderName,b.holderName);

//         totalTransactions = b.totalTransactions;

//         transactions = new int[totalTransactions];

//         for(int i=0;i<totalTransactions;i++){
//             transactions[i] = b.transactions[i];
//         }
//     }

//     // Assignment Operator
//     BankAccount& operator=(const BankAccount &b){

//         if(this != &b){

//             delete[] holderName;
//             delete[] transactions;

//             holderName = new char[strlen(b.holderName)+1];
//             strcpy(holderName,b.holderName);

//             totalTransactions = b.totalTransactions;

//             transactions = new int[totalTransactions];

//             for(int i=0;i<totalTransactions;i++){
//                 transactions[i] = b.transactions[i];
//             }
//         }

//         return *this;
//     }

//     void modifyTransaction(int index,int value){

//         if(index >=0 && index < totalTransactions){
//             transactions[index] = value;
//         }
//     }

//     void display(){

//         cout << "\nHolder Name: " << holderName << endl;

//         cout << "Transactions: ";

//         for(int i=0;i<totalTransactions;i++){
//             cout << transactions[i] << " ";
//         }

//         cout << endl;
//     }

//     // Destructor
//     ~BankAccount(){

//         delete[] holderName;
//         delete[] transactions;
//     }
// };

// int main(){

//     BankAccount b1("Ali",5);

//     // Copy Constructor
//     BankAccount b2 = b1;

//     // Modify Original Object
//     b1.modifyTransaction(0,9999);

//     cout << "\nOriginal Object";
//     b1.display();

//     cout << "\nCopied Object";
//     b2.display();

//     // Assignment Operator
//     BankAccount b3("Ahmed",3);

//     b3 = b1;

//     b1.modifyTransaction(1,7777);

//     cout << "\nAfter Assignment\n";

//     cout << "\nObject b1";
//     b1.display();

//     cout << "\nObject b3";
//     b3.display();

// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// class BankAccount{

//     private:
//     char *holderName;
//     int *transactions;
//     int totalTransactions;

//     public:

//     // Constructor
//     BankAccount(const char *name,int total){

//         holderName = new char[strlen(name)+1];
//         strcpy(holderName,name);

//         totalTransactions = total;

//         transactions = new int[totalTransactions];

//         cout << "Enter Transactions:\n";

//         for(int i=0;i<totalTransactions;i++){
//             cin >> transactions[i];
//         }
//     }

//     // Deep Copy Constructor
//     BankAccount(const BankAccount &b){

//         holderName = new char[strlen(b.holderName)+1];
//         strcpy(holderName,b.holderName);

//         totalTransactions = b.totalTransactions;

//         transactions = new int[totalTransactions];

//         for(int i=0;i<totalTransactions;i++){
//             transactions[i] = b.transactions[i];
//         }
//     }

//     // Assignment Operator
//     BankAccount& operator=(const BankAccount &b){

//         if(this != &b){

//             delete[] holderName;
//             delete[] transactions;

//             holderName = new char[strlen(b.holderName)+1];
//             strcpy(holderName,b.holderName);

//             totalTransactions = b.totalTransactions;

//             transactions = new int[totalTransactions];

//             for(int i=0;i<totalTransactions;i++){
//                 transactions[i] = b.transactions[i];
//             }
//         }

//         return *this;
//     }

//     void modifyTransaction(int index,int value){

//         if(index >=0){
//             transactions[index] = value;
//         }
//     }

//     void display(){

//         cout << "\nHolder Name: " << holderName << endl;

//         cout << "Transactions: ";

//         for(int i=0;i<totalTransactions;i++){
//             cout << transactions[i] << " ";
//         }

//         cout << endl;
//     }

//     // Destructor
//     ~BankAccount(){

//         delete[] holderName;
//         delete[] transactions;
//     }
// };

// int main(){

//     BankAccount b1("Ali",5);

//     // Copy Constructor
//     BankAccount b2 = b1;

//     // Modify Original Object
//     b1.modifyTransaction(0,9999);

//     cout << "\nOriginal Object";
//     b1.display();

//     cout << "\nCopied Object";
//     b2.display();

//     // Assignment Operator
//     BankAccount b3("Ahmed",3);

//     b3 = b1;

//     b1.modifyTransaction(1,7777);

//     cout << "\nAfter Assignment\n";

//     cout << "\nObject b1";
//     b1.display();

//     cout << "\nObject b3";
//     b3.display();

// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// class Document{
//     private:
//     string title;
//     char *content;

//     public:
//     Document(){
//         title = "Unknown";
//         content = new char[10];
//     }
//     Document(string title, char *p){
//         this->title = title;
//         content = new char(strlen(p)+1);
//         strcpy(content,p);
//     }
//     void setcontent(char*p){
//         delete[] content;
//         content = new char(strlen(p)+1);
//         strcpy(content,p);
//     }
//     Document(const Document &d){
//         title = d.title;
//         content = new char(strlen(d.content)+1);
//         strcpy(content,d.content);
//     }
//     void display () const{
//         cout << "Title : " <<  title << endl;
//         cout << "Content : " << content << endl;
//     }
//     ~Document(){
//         delete[] content;
//         cout << "Dynamic content deleted"<< endl;
//     }
// };

// int main(){
//     char array[] = "Initial draft";
//     Document d1("Munim",array);
//     d1.display();
//     cout << endl;

//     Document d2 = d1;
//     d2.display();
//     cout << endl;
//     char arrayy[] = "New Document";
//     d2.setcontent(arrayy);
//     d2.display();
//     return 0;
// }