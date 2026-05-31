// #include <iostream>
// using namespace std;

// class Date {
//     int day, month, year;
// public:
//     Date(int d, int m, int y) : day(d), month(m), year(y) {}

//     void display() const {
//         cout << day << "/" << month << "/" << year << endl;
//     }
// };

// class Student {
//     int age;
//     Date& birthDate;   // Reference instead of pointer

// public:
//     // Constructor must initialize reference
//     Student(int anAge, Date& bD) : age(anAge), birthDate(bD) {
//         cout << "student Constructor\n";
//     }

//     void display() const {
//         cout << "age: " << age << ", birth Date: ";
//         birthDate.display();
//     }
// };

// int main() {
//     Date dt(12, 12, 1998);     // Created outside
//     Student obj(28, dt);       // Passed by reference (no & here)

//     obj.display();
//     return 0;
// }

// #include <iostream> 
// using namespace std;

// class Address {
// public:
//     string addressLine, city, province;

//     Address(string addressLine, string city, string province)
//         : addressLine(addressLine), city(city), province(province) {}
// };

// class Employee {
// private:
//     Address* address;  

// public:
//     int id;
//     string name;

//     Employee(int id, string name, Address* address)
//         : id(id), name(name), address(address) {}

//     void display() const {
//         cout << id << ' ' << name << ' '<< address->addressLine << ' '<< address->city << ' '<< address->province << '\n';
//     }
// };

// int main() {
//     Address a1("C_146_Sec_k", "peshawar", "KPK");
//     Employee e1(101, "Ali", &a1);

//     e1.display();
//     return 0;
// }

// Hospital Management System
// #include <iostream>
// #include <string>
// using namespace std;

// class MedicalRecord {
// private:
//     string diseaseName;
//     float roomCharges;
//     float treatmentCost;

// public:
//     // Constructor
//     MedicalRecord(string d = "None", float r = 0, float t = 0) {
//         diseaseName = d;
//         roomCharges = r;
//         treatmentCost = t;
//     }

//     // Function to calculate total charges
//     float calculateTotal() {
//         return roomCharges + treatmentCost;
//     }

//     // Display medical record
//     void displayRecord() {
//         cout << "Disease Name    : " << diseaseName << endl;
//         cout << "Room Charges    : " << roomCharges << endl;
//         cout << "Treatment Cost  : " << treatmentCost << endl;
//         cout << "Total Charges   : " << calculateTotal() << endl;
//     }
// };

// class PatientAdmission {
// private:
//     int admissionID;
//     string patientName;

//     // Composition
//     MedicalRecord record;

// public:
//     // Constructor
//     PatientAdmission(int id, string name,
//                      string disease,
//                      float room,
//                      float treatment)
//         : record(disease, room, treatment)
//     {
//         admissionID = id;
//         patientName = name;
//     }

//     // Display complete details
//     void displayAdmission() {
//         cout << "\n========== Patient Details ==========" << endl;
//         cout << "Admission ID   : " << admissionID << endl;
//         cout << "Patient Name   : " << patientName << endl;

//         record.displayRecord();
//     }
// };

// int main() {

//     PatientAdmission p1(101, "Ali", "Dengue", 5000, 12000);
//     PatientAdmission p2(102, "Ahmed", "Malaria", 4000, 9000);
//     PatientAdmission p3(103, "Sara", "Typhoid", 4500, 10000);

//     p1.displayAdmission();
//     p2.displayAdmission();
//     p3.displayAdmission();

//     return 0;
// }

// Question 2
// #include <iostream>
// using namespace std;

// class Professor{
//     private:
//     int profesorID;
//     string professorName;
//     string specialization;

//     public:
//     void input_Details(int pid, string pna,string pspe){
//         profesorID = pid;
//         professorName = pna;
//         specialization = pspe;
//     }

//     void display()const{
//         cout << "Professor Id : " << profesorID << endl;
//         cout << "Professor Name : " << professorName << endl;
//         cout << "Professor Specialization : " << specialization << endl;
//     }
// };

// class Department{
//     private:
//     string Departmentname;
//     Professor * ptr;
//     public:
//     Department(const string dep,Professor * p) : Departmentname(dep){
//         ptr = p;
//     }
//     void display()const{
//         ptr->display();
//         cout << "Department Name : " << Departmentname << endl;
//     }
// };

// int main()
// {
//     Professor p1;
//     // p1.input_Details(3019,"Abdul Munim,","SpecialistAnalyst");
//     Department d1("Computer Sciences",&p1);
//     d1.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Address {
// public:
//     string addressLine;
//     string city;
//     string province;

//     Address( string line, string city,string prov): addressLine(line), city(city), province(prov) {}
// };

// class Employee {
// private:
//     int id;
//     string name;

// public:
//     Employee(int id,  string name)
//         : id(id), name(name) {}

//     // Association: Employee just uses an Address
//     void display(const Address& addr) const {
//         cout << id << ' ' << name << ' '<< addr.addressLine << ' '<< addr.city << ' '<< addr.province << endl;
//     }
// };

// int main() {
//     Address a1("houseno1_street120_", "Mardan", "KPK");
//     Employee e1(101, "Ali");
//     //empoyee uses address
//     e1.display(a1);  

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Date {
//     int day, month, year;
// public:
//     Date(int d, int m, int y) : day(d), month(m), year(y) {}

//     void display() const {
//         cout << day << "/" << month << "/" << year << endl;
//     }
// };

// class Student {
//     int age;
//     Date* birthDate;   // Reference instead of pointer

// public:
//     // Constructor must initialize reference
//     Student(int anAge, Date* bD) : age(anAge), birthDate(bD) {
//         cout << "student Constructor\n";
//     }

//     void display() const {
//         cout << "age: " << age << ", birth Date: ";
//         birthDate->display();
//     }
// };

// int main() {
//     Date dt(12, 12, 1998);     // Created outside
//     Student obj(28, &dt);       // Passed by reference (no & here)

//     obj.display();
//     return 0;
// }

// #include <iostream> 
// using namespace std;

// class Address {
// public:
//     string addressLine, city, province;

//     Address(string addressLine, string city, string province)
//         : addressLine(addressLine), city(city), province(province) {}
// };

// class Employee {
// private:
//     Address* address;  

// public:
//     int id;
//     string name;

//     Employee(int id, string name, Address* address)
//         : id(id), name(name), address(address) {}

//     void display() const {
//         cout << id << ' ' << name << ' '<< address->addressLine << ' '<< address->city << ' '<< address->province << '\n';
//     }
// };

// int main() {
//     Address a1("C_146_Sec_k", "peshawar", "KPK");
//     Employee e1(101, "Ali", &a1);

//     e1.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Date {
// public:
//     int day, month, year;

//     Date(int d = 1, int m = 1, int y = 2000) {
//         day = d;
//         month = m;
//         year = y;
//         cout << "Date constructor called for " << day << "-" << month << "-" << year << endl;
//     }

//     ~Date() {
//         cout << "Date destructor called for " << day << "-" << month << "-" << year << endl;
//     }

//     void show() {
//         cout << day << "-" << month << "-" << year << endl;
//     }
// };

// class Student {
// private:
//     int id;
//     string name;
//     // Composed attribute 
// 	Date dob;    

// public:
//     Student(int i, string n, int d, int m, int y) : dob(d, m, y) {
//         id = i;
//         name = n;
//         cout << "Student constructor called for " << name << endl;
//     }

//     ~Student() {
//         cout << "Student destructor called for " << name << endl;
//     }

//     void show() {
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "DOB: ";
//         dob.show();
//     }
// };

// int main() {
//     Student s1(1, "Ali", 10, 5, 2002);
//     s1.show();
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Engine {
// private:
//     int horsepower;

// public:
//     Engine(int hp) : horsepower{hp} {
//         cout << "Engine with " << horsepower << " HP created." << endl;
//     }

//     void start() {
//         cout << "Engine started with " << horsepower << " HP" << endl;
//     }

//     ~Engine() {
//         cout << "Engine destroyed." << endl;
//     }
// };

// class Car {
// private:
//     Engine* engine;   
//     string make;
//     string model;

// public:
   
//     Car(string m, string mod, int hp)
//         : make(m), model(mod) {
//         engine = new Engine(hp);   
//         cout << "Car " << make << " " << model << " created." << endl;
//     }

//     void startCar() {
//         engine->start();   
//         cout << make << " " << model << " is running." << endl;
//     }

//     ~Car() {
//         delete engine;  
//         cout << "Car " << make << " " << model << " destroyed." << endl;
//     }
// };

// int main() {
//     Car myCar("Toyota", "Camry", 180);
//     myCar.startCar();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Date {
// public:
//     int day, month, year;

//     Date(int d=1, int m=1, int y=2000) {
//         day = d;
//         month = m;
//         year = y;
//         cout << "Date constructor called for " << day << "-" << month << "-" << year << endl;
//     }

//     ~Date() {
//         cout << "Date destructor called for " << day << "-" << month << "-" << year << endl;
//     }

//     void show() {
//         cout << day << "-" << month << "-" << year << endl;
//     }
// };

// class Student {
// private:
//     int id;
//     string name;
//   //  composed attribute
// 	Date* dob;   

// public:
//     Student(int i, string n, int d, int m, int y) {
//         id = i;
//         name = n;
//         dob = new Date(d, m, y);   
//         cout << "Student constructor called for " << name << endl;
//     }

//     ~Student() {
//         cout << "Student destructor called for " << name << endl;
//         delete dob;   
//     }

//     void show() {
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "DOB: ";
//         dob->show();
//     }
// };

// int main() {
//     Student s1(2, "Hamza", 15, 8, 2003);
//     s1.show();
//     return 0;
// }