#include<iostream>
using namespace std;

class Eid_Mela{
    private:
    string Mela_Name;
    string Location;
    int Total_Stalls;
    double entry_fee;
    bool is_Open;
    static int totalmelasheld;
    static int total_stalls_across_all_melas;

    public:
    Eid_Mela(){
        Mela_Name = "Unnamed Mela";
        Location = "TBD";
        Total_Stalls = 0;
        entry_fee = 0;
        is_Open = false;
        totalmelasheld++;
    }

    Eid_Mela(string n,int t,string l,double e){
        Mela_Name = n;
        Location = l;
        Total_Stalls = t;
        entry_fee = e;
        is_Open = true;
        totalmelasheld++;
        total_stalls_across_all_melas += t;
    }

    int static gettotalmelas(){   // As I made my data members private I have to make a static function to get output of static data member. I can also make an other approach by making static members public to access directly in main 
        return totalmelasheld;
    }

    int static gettotal_stalls(){
        return total_stalls_across_all_melas;
    }

    void displayinfo(){
        cout << "Mela Name : " << Mela_Name << endl;
        cout << "Location : " << Location << endl;
        cout << "Total Stalls : " << Total_Stalls << endl;
        cout << "Entry Fee : " << entry_fee << endl;
        cout << "Is Open : ";
        if(is_Open == 1) cout << "True" << endl;
        else cout << "False" << endl;
    }

    ~Eid_Mela(){
        is_Open = false;
        cout << "[Mela Closed] " << Mela_Name << " Grand Eid Mela has ended. Khuda Hafiz! " << endl;
    }
};
int Eid_Mela::totalmelasheld = 0;
int Eid_Mela::total_stalls_across_all_melas = 0;

class Sweet_Stall{
    private:
    string Stall_Name;
    int Stall_Id;
    string *sweetitems;
    int itemcount;
    int maxitems;
    double priceperkg;
    double totalkgsold;
    static int totalsweetstalls;
    static double total_revenue_all_stalls;
    static int counter;

    public:
    Sweet_Stall(){
        Stall_Name = "Unknown Stall";
        Stall_Id = counter;
        counter++;
        itemcount = 0;
        maxitems = 3;
        sweetitems = new string[maxitems];
        priceperkg = 0;
        totalkgsold = 0;
        totalsweetstalls++;
    }

    Sweet_Stall(string n,int m,double p){
        Stall_Name = n;
        Stall_Id = counter;
        counter++;
        itemcount = 0;
        maxitems = m;
        priceperkg = p;
        totalkgsold = 0;
        sweetitems = new string[maxitems];
        totalsweetstalls++;
    }

    Sweet_Stall(const Sweet_Stall &a){
        Stall_Name = a.Stall_Name;
        Stall_Id = counter;
        counter++;
        maxitems = a.maxitems;
        itemcount = a.itemcount;
        priceperkg = a.priceperkg;
        totalkgsold = a.totalkgsold;
        sweetitems = new string[maxitems];
        for(int i = 0; i < itemcount; i++){
            sweetitems[i] = a.sweetitems[i];
        }
        totalsweetstalls++;
    }

    static int gettotalsweetsstalls(){
        return totalsweetstalls;
    }

    static double gettotal_revenue_all_stalls(){
        return total_revenue_all_stalls;
    }

    void sweetname(string n){
        if(itemcount < maxitems){
            sweetitems[itemcount] = n;
            itemcount++;
        }
        else cout << "You Have Reached Your Max Items Limit. " << endl;
    }

    void gettotalkganddisplay(){
        // I can ask for price per kg of each sweet item but as not mentioned in question I am passing priceperkg which is same for all sweets.
        for(int i = 0; i < itemcount; i++){
            cout << "How many Kg " << sweetitems[i] << " you want : ";
            cin >> totalkgsold;
            total_revenue_all_stalls += totalkgsold * priceperkg;
            cout << "Item " << i + 1 << " : " << sweetitems[i] << ", Price Per Kg : " << priceperkg <<", Total Kg Sold : " << totalkgsold << endl;
        }
    }

    void displayinfo(){
        cout << "Stall Name : " << Stall_Name << endl;
        cout << "Stall Id : " << Stall_Id << endl;
        cout << "Max Items : " << maxitems << endl;
        gettotalkganddisplay();
        cout << endl;
    }

    void verifyid(){
        cout << "Stall Id : " << Stall_Id << endl;
    }

    ~Sweet_Stall(){
        delete[] sweetitems;
        sweetitems = NULL;
        totalsweetstalls--;
        cout << "[Stall Closed] " << Stall_Name << " ( ID: " << Stall_Id <<" ) has packed up. Wa'assalam! " << endl;
    }

};
int Sweet_Stall::totalsweetstalls = 0;
double Sweet_Stall::total_revenue_all_stalls = 0;
int Sweet_Stall::counter = 101;          // Starting from 101 as given in the question

class Visitor{
    private:
    string name;
    int Visitor_Id;
    int age;
    double eidirecieved;
    double budget;
    string *purchaseditems;
    int purchasecount;
    int maxpurchases;
    static int totalvisitors;
    static double total_eidi_distributed;
    static int visitor_counter;

    public:
    Visitor(){
        name = "Guest";
        Visitor_Id = visitor_counter;
        visitor_counter++;
        age = 0;
        eidirecieved = 0;
        budget = 500;
        purchasecount = 0;
        maxpurchases = 5;
        purchaseditems = new string[maxpurchases];
        totalvisitors++;
    }

    Visitor(string n,int a,double b,int mp){
        name = n;
        Visitor_Id = visitor_counter;
        visitor_counter++;
        age = a;
        budget = b;
        maxpurchases = mp;
        purchasecount = 0;
        eidirecieved = 0;
        purchaseditems = new string[maxpurchases];
        totalvisitors++;
    }

    Visitor(const Visitor &v){
        name = v.name;
        Visitor_Id = visitor_counter;
        visitor_counter++;
        age = v.age;
        budget = v.budget;
        maxpurchases = v.maxpurchases;
        purchasecount = v.purchasecount;
        eidirecieved = v.eidirecieved;
        purchaseditems = new string[maxpurchases];
        for(int i = 0; i < purchasecount; i++){
            purchaseditems[i] = v.purchaseditems[i];
        }
        totalvisitors++;
    }

    // Making a setter for verifying that copy constructor is working
    void setname(string n){
        name = n;
    }

    static int gettotalvisitors(){
        return totalvisitors;
    }

    static double gettotal_eidi_distributed(){
        return total_eidi_distributed;
    }

    void purchasingitemname(string n){
        if(purchasecount < maxpurchases){
            purchaseditems[purchasecount] = n;
            purchasecount++;
        }
        else cout << "You Have reached your max purchasing limit. " << endl;
    }

    void giveeidi(double e){
        eidirecieved = e;
        total_eidi_distributed += e;
        budget += e;
    }

    void displayinfo(){
        cout << "Name : " << name << endl;
        cout << "Visitor Id : " << Visitor_Id << endl;
        cout << "Age : " << age << endl;
        cout << "Max Purchases : " << maxpurchases << endl;
        cout << "Purchased Item Count  : " << purchasecount << endl;
        cout << "Purchased Items Are : " << endl;
        for(int i = 0; i < purchasecount; i++){
            cout << "Item " << i + 1 << " : " << purchaseditems[i];
            cout << endl;
        }
        cout << "Eidi Recieved : " << eidirecieved << endl;
        cout << "Total Budget After Eidi : " << budget << endl;
    }

    ~Visitor(){
        delete[] purchaseditems;
        purchaseditems = NULL;
        totalvisitors--;
        cout << "[Visitor Left] " << name << " has left the mela. Eid Mubarak! " << endl;
    }
};
int Visitor::totalvisitors = 0;
double Visitor::total_eidi_distributed = 0;
int Visitor::visitor_counter = 5001;    // Starting from 5001 as given in the question 

int main()
{
    // Class 1
    Eid_Mela e1; // Default Constructor will be called here.
    Eid_Mela e2("Zt-Mart",3,"Kohat",250); // Parametarized Constructor will be called here.
    cout << "Displaying Eid Melas : " << endl;
    e1.displayinfo();
    cout << endl;
    e2.displayinfo();
    cout << endl;
    cout << "Total Melas Held : " << Eid_Mela::gettotalmelas() << endl;
    cout << endl;

    // Class 2
    Sweet_Stall s1; // Default Constructor will be called here.
    Sweet_Stall s2("Munims Sweets Stall",3,250); // Parametarized Constructor will be called here.
    // Using the function sweetname to add sweets.
    s2.sweetname("Rasgulla");
    s2.sweetname("Gulab Jamun");
    s2.sweetname("Rasmalai");
    Sweet_Stall s3(s2); // Copy Constructor will be called here.
    cout << "Displaying Sweet Stalls : " << endl;
    s1.displayinfo();
    cout << endl;
    s2.displayinfo();
    cout << endl;
    cout << "Verifying that the object created using copy constructor gets a new Id : " << endl;
    s2.verifyid();
    s3.verifyid();
    cout << endl;

    // Class 3
    Visitor v1; // Default Constructor will be called here.
    v1.giveeidi(500);
    v1.purchasingitemname("Cocacola");
    Visitor v2("Abdul Munim",18,500,5); // Parametarized Constructor will be called here.
    v2.giveeidi(2000);
    v2.purchasingitemname("Lays");
    v2.purchasingitemname("Cocomo");
    v2.purchasingitemname("Milk");
    Visitor v3; // Default Constructor will be called here.
    v3.giveeidi(5000);
    v3.purchasingitemname("Banana");
    Visitor v4(v2); // Copy Constructor will be called here.
    v4.setname("Rayan Paracha"); // Modifying the name to see that deep copy is made.
    v4.giveeidi(3500); // I also changed his eidi.
    v4.purchasingitemname("Biscuit"); // More items being added.
    v4.purchasingitemname("Burger");
    cout << "Diplaying all the Visitors : " << endl;
    // Displaying objects created by default constructor first.
    v1.displayinfo();
    cout << endl;
    v3.displayinfo();
    cout << endl;
    // Displaying objects created by parametarized constructor and copy constructor to verify that deep copy is made.
    v2.displayinfo();
    cout << endl;
    v4.displayinfo(); 
    cout << endl; 

    cout << "Displaying total sweet stalls and total visitors before nested scope block test : " << endl;
    cout << "Total Sweet Stalls : " << Sweet_Stall::gettotalsweetsstalls() << endl;
    cout << "Total Visitors : " << Visitor::gettotalvisitors() << endl;
    cout << endl;

    // Nested Scope Block Test
    {
        Sweet_Stall s4("Aloo Kachalo Stall",2,50);
        Visitor v5;
        cout << "Displaying total sweet stalls and total visitors inside nested scope block test : " << endl;
        cout << "Total Sweet Stalls : " << Sweet_Stall::gettotalsweetsstalls() << endl;
        cout << "Total Visitors : " << Visitor::gettotalvisitors() << endl;
        cout << endl;
    }
    
    cout << endl;
    cout << "Displaying total sweet stalls and total visitors after nested scope block test : " << endl;
    cout << "Total Sweet Stalls : " << Sweet_Stall::gettotalsweetsstalls() << endl;
    cout << "Total Visitors : " << Visitor::gettotalvisitors() << endl;
    cout << endl;

    cout << "Displaying Final City-Wide Statistics : " << endl;
    cout << "Total Melas Held : " << Eid_Mela::gettotalmelas() << endl;
    cout << "Total Stalls cross all Melas : " << Eid_Mela::gettotal_stalls() << endl;
    cout << "Total Sweet Stalls : " << Sweet_Stall::gettotalsweetsstalls() << endl;
    cout << "Total Revenue across all Stalls : " << Sweet_Stall::gettotal_revenue_all_stalls() << endl;
    cout << "Total Visitors : " << Visitor::gettotalvisitors() << endl;
    cout << "Total Eidi Distributed : " << Visitor::gettotal_eidi_distributed() << endl;
    cout << endl;

    return 0;
}