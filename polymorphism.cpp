// #include<iostream>
// using namespace std;

// class PaymentSystem{
//     protected:
//     double amount;

//     public:

//     void getAmount(){
//         cout << "Enter Amount : ";
//         cin >> amount;
//     }

//     virtual void pay() = 0;
//     virtual void refund() = 0;
// };

// class EasyPaisa : public PaymentSystem{
//     public:

//     void pay(){
//         double fee = amount * 0.02;
//         double finalAmount = amount + fee;

//         cout << "\n----- EasyPaisa Payment -----" << endl;
//         cout << "Original Amount : " << amount << endl;
//         cout << "Service Fee (2%) : " << fee << endl;
//         cout << "Final Amount : " << finalAmount << endl;
//     }

//     void refund(){
//         double fee = amount * 0.02;
//         double refundAmount = amount - fee;

//         cout << "\n----- EasyPaisa Refund -----" << endl;
//         cout << "Original Amount : " << amount << endl;
//         cout << "Service Fee Deducted : " << fee << endl;
//         cout << "Refund Amount : " << refundAmount << endl;
//     }
// };

// class JazzCash : public PaymentSystem{
//     public:

//     void pay(){
//         double fee = amount * 0.05;
//         double finalAmount = amount + fee;

//         cout << "\n----- JazzCash Payment -----" << endl;
//         cout << "Original Amount : " << amount << endl;
//         cout << "Service Fee (5%) : " << fee << endl;
//         cout << "Final Amount : " << finalAmount << endl;
//     }

//     void refund(){
//         double fee = amount * 0.05;
//         double refundAmount = amount - fee;

//         cout << "\n----- JazzCash Refund -----" << endl;
//         cout << "Original Amount : " << amount << endl;
//         cout << "Service Fee Deducted : " << fee << endl;
//         cout << "Refund Amount : " << refundAmount << endl;
//     }
// };

// int main(){

//     PaymentSystem *ptr;

//     EasyPaisa e;
//     ptr = &e;

//     cout << "\n===== Customer 1 =====" << endl;
//     ptr->getAmount();
//     ptr->pay();
//     ptr->refund();

//     JazzCash j;
//     ptr = &j;

//     cout << "\n===== Customer 2 =====" << endl;
//     ptr->getAmount();
//     ptr->pay();
//     ptr->refund();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class FeeSystem{
//     protected:
//     double fee;

//     public:

//     void getFee(){
//         cout << "Enter Fee Amount : ";
//         cin >> fee;
//     }

//     virtual void submitFee() = 0;
//     virtual void returnFee() = 0;
// };

// class BankTransfer : public FeeSystem{
//     public:

//     void submitFee(){
//         double transactionFee = 100;
//         double finalAmount = fee - transactionFee;

//         cout << "\n----- Bank Transfer Receipt -----" << endl;
//         cout << "Submitted Fee : Rs." << fee << endl;
//         cout << "Transaction Fee : Rs." << transactionFee << endl;
//         cout << "Amount Received : Rs." << finalAmount << endl;
//     }

//     void returnFee(){
//         double transactionFee = 100;
//         double refund = fee - transactionFee;

//         cout << "\n----- Bank Transfer Refund -----" << endl;
//         cout << "Original Fee : Rs." << fee << endl;
//         cout << "Transaction Fee Deducted : Rs." << transactionFee << endl;
//         cout << "Refund Amount : Rs." << refund << endl;
//     }
// };

// class CreditCard : public FeeSystem{
//     public:

//     void submitFee(){
//         double charge = fee * 0.03;
//         double totalPaid = fee + charge;

//         cout << "\n----- Credit Card Receipt -----" << endl;
//         cout << "Submitted Fee : Rs." << fee << endl;
//         cout << "Processing Charge (3%) : Rs." << charge << endl;
// //         cout << "Total Paid : Rs." << totalPaid << endl;
// //     }

// //     void returnFee(){
// //         double charge = fee * 0.03;
// //         double refund = fee - charge;

// //         cout << "\n----- Credit Card Refund -----" << endl;
// //         cout << "Original Fee : Rs." << fee << endl;
// //         cout << "Processing Charge Deducted : Rs." << charge << endl;
// //         cout << "Refund Amount : Rs." << refund << endl;
// //     }
// // };

// // int main(){

// //     FeeSystem *ptr;

// //     BankTransfer b;
// //     ptr = &b;

// //     cout << "\n===== Student 1 =====" << endl;
// //     ptr->getFee();
// //     ptr->submitFee();
// //     ptr->returnFee();

// //     CreditCard c;
// //     ptr = &c;

// //     cout << "\n===== Student 2 =====" << endl;
// //     ptr->getFee();
// //     ptr->submitFee();
// //     ptr->returnFee();

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class Animal{
// //     public:
// //     virtual void sound() = 0;
// // };

// // class Dog : public Animal{
// //     public:
// //     void sound(){
// //         cout << "Dog is barking" << endl;
// //     }
// // };

// // class Cat : public Animal{
// //     public:
// //     void sound(){
// //         cout << "Cat is meowing" << endl;
// //     }
// // };

// // class Cow : public Animal{
// //     public:
// //     void sound(){
// //         cout << "Cow is doing sound" << endl;
// //     }
// // };

// // int main(){
// //     Animal *ptr;
// //     Dog d1;
// //     Cat c1;
// //     Cow c;
// //     ptr = &d1;
// //     ptr->sound();
// //     ptr = &c1;
// //     ptr->sound();
// //     ptr = &c;
// //     ptr->sound();
// //     return 0;
// // }   

// # Polymorphism Practice Codes in C++

// ---

// # 1. Animal Sound System

// ```cpp
// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//     virtual void sound(){
//         cout << "Animal Sound" << endl;
//     }
// };

// class Dog : public Animal{
//     public:
//     void sound(){
//         cout << "Dog Barks" << endl;
//     }
// };

// class Cat : public Animal{
//     public:
//     void sound(){
//         cout << "Cat Meows" << endl;
//     }
// };

// class Cow : public Animal{
//     public:
//     void sound(){
//         cout << "Cow Moos" << endl;
//     }
// };

// int main(){

//     Animal *ptr;

//     Dog d;
//     Cat c;
//     Cow cw;

//     ptr = &d;
//     ptr->sound();

//     ptr = &c;
//     ptr->sound();

//     ptr = &cw;
//     ptr->sound();

//     return 0;
// }
// ```

// ---

// # 2. Shape Area Calculator

// ```cpp
// #include<iostream>
// using namespace std;

// class Shape{
//     public:
//     virtual void calculateArea() = 0;
// };

// class Rectangle : public Shape{
//     int length, breadth;

//     public:
//     Rectangle(int l,int b){
//         length = l;
//         breadth = b;
//     }

//     void calculateArea(){
//         cout << "Rectangle Area : " << length * breadth << endl;
//     }
// };

// class Circle : public Shape{
//     float radius;

//     public:
//     Circle(float r){
//         radius = r;
//     }

//     void calculateArea(){
//         cout << "Circle Area : " << 3.14 * radius * radius << endl;
//     }
// };

// int main(){

//     Shape *ptr;

//     Rectangle r(4,5);
//     Circle c(3);

//     ptr = &r;
//     ptr->calculateArea();

//     ptr = &c;
//     ptr->calculateArea();

//     return 0;
// }
// ```

// ---

// # 3. Employee Salary System

// ```cpp
// #include<iostream>
// using namespace std;

// class Employee{
//     public:
//     virtual void calculateSalary() = 0;
// };

// class FullTimeEmployee : public Employee{
//     int salary;

//     public:
//     FullTimeEmployee(int s){
//         salary = s;
//     }

//     void calculateSalary(){
//         cout << "Full Time Salary : " << salary << endl;
//     }
// };

// class PartTimeEmployee : public Employee{
//     int hours, rate;

//     public:
//     PartTimeEmployee(int h,int r){
//         hours = h;
//         rate = r;
//     }

//     void calculateSalary(){
//         cout << "Part Time Salary : " << hours * rate << endl;
//     }
// };

// int main(){

//     Employee *ptr;

//     FullTimeEmployee f(50000);
//     PartTimeEmployee p(5,1000);

//     ptr = &f;
//     ptr->calculateSalary();

//     ptr = &p;
//     ptr->calculateSalary();

//     return 0;
// }
// ```

// ---

// # 4. Online Shopping Payment

// ```cpp
// #include<iostream>
// using namespace std;

// class Payment{
//     protected:
//     double amount;

//     public:
//     void getAmount(){
//         cout << "Enter Amount : ";
//         cin >> amount;
//     }

//     virtual void pay() = 0;
//     virtual void refund() = 0;
// };

// class DebitCard : public Payment{
//     public:
//     void pay(){
//         double fee = amount * 0.02;
//         cout << "Final Payment : " << amount + fee << endl;
//     }

//     void refund(){
//         double fee = amount * 0.02;
//         cout << "Refund : " << amount - fee << endl;
//     }
// };

// class PayPal : public Payment{
//     public:
//     void pay(){
//         double fee = amount * 0.05;
//         cout << "Final Payment : " << amount + fee << endl;
//     }

//     void refund(){
//         double fee = amount * 0.05;
//         cout << "Refund : " << amount - fee << endl;
//     }
// };

// int main(){

//     Payment *ptr;

//     DebitCard d;
//     ptr = &d;
//     ptr->getAmount();
//     ptr->pay();

//     PayPal p;
//     ptr = &p;
//     ptr->getAmount();
//     ptr->pay();

//     return 0;
// }
// ```

// ---

// # 5. University Grading System

// ```cpp
// #include<iostream>
// using namespace std;

// class Student{
//     public:
//     virtual void calculateGrade() = 0;
// };

// class Undergraduate : public Student{
//     int assignment, mids;

//     public:
//     Undergraduate(int a,int m){
//         assignment = a;
//         mids = m;
//     }

//     void calculateGrade(){
//         int total = assignment + mids;
//         cout << "Undergraduate Marks : " << total << endl;
//     }
// };

// class Graduate : public Student{
//     int assignment, research;

//     public:
//     Graduate(int a,int r){
//         assignment = a;
//         research = r;
//     }

//     void calculateGrade(){
//         int total = assignment + research;
//         cout << "Graduate Marks : " << total << endl;
//     }
// };

// int main(){

//     Student *ptr;

//     Undergraduate u(30,40);
//     Graduate g(25,50);

//     ptr = &u;
//     ptr->calculateGrade();

//     ptr = &g;
//     ptr->calculateGrade();

//     return 0;
// }
// ```

// ---

// # 6. Transport Fare System

// ```cpp
// #include<iostream>
// using namespace std;

// class Transport{
//     protected:
//     double fare;

//     public:
//     void getFare(){
//         cout << "Enter Fare : ";
//         cin >> fare;
//     }

//     virtual void bookTicket() = 0;
//     virtual void cancelTicket() = 0;
// };

// class Bus : public Transport{
//     public:
//     void bookTicket(){
//         double tax = fare * 0.05;
//         cout << "Bus Fare : " << fare + tax << endl;
//     }

//     void cancelTicket(){
//         cout << "Refund : " << fare - 50 << endl;
//     }
// };

// class Train : public Transport{
//     public:
//     void bookTicket(){
//         double tax = fare * 0.10;
//         cout << "Train Fare : " << fare + tax << endl;
//     }

//     void cancelTicket(){
//         cout << "Refund : " << fare - 100 << endl;
//     }
// };

// int main(){

//     Transport *ptr;

//     Bus b;
//     ptr = &b;
//     ptr->getFare();
//     ptr->bookTicket();

//     Train t;
//     ptr = &t;
//     ptr->getFare();
//     ptr->bookTicket();

//     return 0;
// }
// ```

// ---

// # 7. Hospital Billing System

// ```cpp
// #include<iostream>
// using namespace std;

// class Patient{
//     public:
//     virtual void generateBill() = 0;
// };

// class IndoorPatient : public Patient{
//     public:
//     void generateBill(){
//         cout << "Indoor Patient Bill : 20000" << endl;
//     }
// };

// class OutdoorPatient : public Patient{
//     public:
//     void generateBill(){
//         cout << "Outdoor Patient Bill : 3000" << endl;
//     }
// };

// class EmergencyPatient : public Patient{
//     public:
//     void generateBill(){
//         cout << "Emergency Patient Bill : 50000" << endl;
//     }
// };

// int main(){

//     Patient *ptr;

//     IndoorPatient i;
//     OutdoorPatient o;
//     EmergencyPatient e;

//     ptr = &i;
//     ptr->generateBill();

//     ptr = &o;
//     ptr->generateBill();

//     ptr = &e;
//     ptr->generateBill();

//     return 0;
// }
// ```

// ---

// # 8. Smart Device Controller

// ```cpp
// #include<iostream>
// using namespace std;

// class SmartDevice{
//     public:
//     virtual void turnOn() = 0;
// };

// class SmartFan : public SmartDevice{
//     public:
//     void turnOn(){
//         cout << "Fan Turned ON" << endl;
//     }
// };

// class SmartLight : public SmartDevice{
//     public:
//     void turnOn(){
//         cout << "Light Turned ON" << endl;
//     }
// };

// class SmartAC : public SmartDevice{
//     public:
//     void turnOn(){
//         cout << "AC Turned ON" << endl;
//     }
// };

// int main(){

//     SmartDevice *devices[3];

//     SmartFan f;
//     SmartLight l;
//     SmartAC a;

//     devices[0] = &f;
//     devices[1] = &l;
//     devices[2] = &a;

//     for(int i=0;i<3;i++){
//         devices[i]->turnOn();
//     }

//     return 0;
// }
// ```

// ---

// # 9. Banking Account System

// ```cpp
// #include<iostream>
// using namespace std;

// class Account{
//     protected:
//     double balance;

//     public:
//     Account(double b){
//         balance = b;
//     }

//     virtual void showBalance() = 0;
// };

// class SavingsAccount : public Account{
//     public:
//     SavingsAccount(double b) : Account(b){}

//     void showBalance(){
//         cout << "Savings Balance : " << balance + 500 << endl;
//     }
// };

// class CurrentAccount : public Account{
//     public:
//     CurrentAccount(double b) : Account(b){}

//     void showBalance(){
//         cout << "Current Balance : " << balance << endl;
//     }
// };

// int main(){

//     Account *ptr;

//     SavingsAccount s(10000);
//     CurrentAccount c(15000);

//     ptr = &s;
//     ptr->showBalance();

//     ptr = &c;
//     ptr->showBalance();

//     return 0;
// }
// ```

// ---

// # 10. Food Delivery System

// ```cpp
// #include<iostream>
// using namespace std;

// class FoodOrder{
//     protected:
//     double amount;

//     public:
//     void getAmount(){
//         cout << "Enter Food Amount : ";
//         cin >> amount;
//     }

//     virtual void generateBill() = 0;
// };

// class FastFood : public FoodOrder{
//     public:
//     void generateBill(){
//         double tax = amount * 0.05;
//         cout << "Fast Food Bill : " << amount + tax << endl;
//     }
// };

// class ChineseFood : public FoodOrder{
//     public:
//     void generateBill(){
//         double tax = amount * 0.08;
//         cout << "Chinese Food Bill : " << amount + tax << endl;
//     }
// };

// class Dessert : public FoodOrder{
//     public:
//     void generateBill(){
//         double tax = amount * 0.03;
//         cout << "Dessert Bill : " << amount + tax << endl;
//     }
// };

// int main(){

//     FoodOrder *ptr;

//     FastFood f;
//     ptr = &f;
//     ptr->getAmount();
//     ptr->generateBill();

//     ChineseFood c;
//     ptr = &c;
//     ptr->getAmount();
//     ptr->generateBill();

//     Dessert d;
//     ptr = &d;
//     ptr->getAmount();
//     ptr->generateBill();

//     return 0;
// }
// ```

// Extra Code
#include<iostream>
#include<cctype>
using namespace std;

int main(){

    string password;

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;

    cout << "Enter Password : ";
    cin >> password;

    for(int i=0; password[i] != '\0'; i++){

        if(isupper(password[i])){
            upper = true;
        }

        else if(islower(password[i])){
            lower = true;
        }

        else if(isdigit(password[i])){
            digit = true;
        }

        else{
            special = true;
        }
    }

    if(upper && lower && digit && special){
        cout << "\nValid Password" << endl;
        cout << "Password contains all required characters." << endl;
    }

    else{
        cout << "\nInvalid Password" << endl;

        if(!upper){
            cout << "Missing Capital Letter" << endl;
        }

        if(!lower){
            cout << "Missing Small Letter" << endl;
        }

        if(!digit){
            cout << "Missing Number" << endl;
        }

        if(!special){
            cout << "Missing Special Character" << endl;
        }
    }

    return 0;
}