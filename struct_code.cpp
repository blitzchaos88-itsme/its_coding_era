// Question 1
#include<iostream>
using namespace std;
// ============== DEFINING THE STRUCTURE ===================
struct car{
    // ===== STRUCTURE MEMBERS ========
    string Model; 
    int Year;
    long Price;
};

int main()
{
    car array[3];  // 3 INSTANCES CREATED
    cout<<"Enter details of 3 cars: "<<endl;
    // LOOP TO ENTER THE DATA
    for(int i = 0; i < 3; i++)
    {
        cout<<"Car "<<i+1<<endl;
        cout<<"Model: ";
        getline(cin,array[i].Model);
        cout<<"Year: ";
        cin>>array[i].Year;
        cout<<"Price: ";
        cin>>array[i].Price;
        cin.ignore();
    }
    cout<<endl;
    cout<<"Cars with price above 500000: "<<endl;
    cout<<endl;
    // LOOP TO OUTPUT THE CAR HAVING PRICE ABOVE 500000
    for(int i = 0; i < 3; i++)
    {
        if(array[i].Price > 500000){   
        cout<<"Model: "<<array[i].Model<<endl;
        cout<<"Year: "<<array[i].Year<<endl;
        cout<<"Price: "<<array[i].Price<<endl;
        cout<<endl;
        }
    }
    return 0;
}

Question 2
#include<iostream>
using namespace std;
//======= DEFINING THE STRUCTURE ===========
struct Address{
    string City;
    string Country;
};

struct Contact_info{
    string Name;
    string Phone_No;
    Address address;   // ===== NESTED STRUCTURE =========
}; 

int main()
{
    Contact_info array[10];  // Size was given in the question
    for(int i = 0; i < 10; i++){  // LOOP TO INPUT ALL THE DETAILS
        cout<<"Enter details for person "<<i+1<<endl;
        cout<<"Name of person "<<i+1<<" : ";
        getline(cin,array[i].Name);
        cout<<"Phone Number of person "<<i+1<<" : ";
        getline(cin,array[i].Phone_No);
        cout<<"City of person "<<i+1<<" : ";
        getline(cin,array[i].address.City);
        cout<<"Country of person "<<i+1<<" : ";
        getline(cin,array[i].address.Country);
        cout<<endl;
    }
    for(int i = 0; i < 10; i++){  // LOOP TO OUTPUT ALL THE DETAILS
        cout<<"Contact information of "<<i+1<<" person : "<<endl;
        cout<<"Name: "<<array[i].Name<<endl;
        cout<<"Phone: "<<array[i].Phone_No<<endl;
        cout<<"City: "<<array[i].address.City<<endl;
        cout<<"Country: "<<array[i].address.Country<<endl;    
        cout<<endl;
    }
    return 0;
}

Question 3
#include<iostream>
using namespace std;
struct camera_megapixels{
    int megapixelss;
};
struct mobile_price{
    int price;
    camera_megapixels cam;


}mobile[5];

void function_for_all_demands()
{
    int choice;
    do{
    cout<<"1. Display all mobiles. "<<endl;
    cout<<"2. Find the most expensive mobile. "<<endl;
    cout<<"3. Show the highest camera megapixels. "<<endl;
    cout<<"4. Calculate the average price. "<<endl;
    cout<<"5. Count mobiles having camera >= 50 MP. "<<endl;
    cout<<"6. To Exit."<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    cin.ignore();
    if(choice==1)
    {
        for(int i = 0; i < 5; i++){
            cout<<"Displaying the Prices of all the mobiles: "<<endl;
            cout<<"The Price of mobile "<<i+1<<" is : " ;
            cout<<mobile[i].price;
            cout<<endl;
        }
    }
    if(choice==2)
    {
        int expensive = mobile[0].price;
        for(int i = 0; i < 5; i++)
        {
            if(mobile[i].price>expensive)
            {
                expensive = mobile[i].price;
            }
        }
        cout<<"Displaying the most expensive mobile: "<<endl;
        cout<<"The most expensive mobile is : "<<expensive<<endl;
    }
    if(choice==3)
    {
        int highest = mobile[0].cam.megapixelss;
        for(int i = 0; i < 5; i++)
        {
            if(mobile[i].cam.megapixelss > highest)
            {
                highest = mobile[i].cam.megapixelss;
            }
        }
        cout<<"Displaying the highest camera megapixels: "<<endl;
        cout<<"The highest camera megapixels are: "<<highest<<endl;
    }
    if(choice==4)
    {
        float sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum+=mobile[i].price;
        }
        float average = sum / 5;
        cout<<"Displaying the Average Price: "<<endl;
        cout<<"Average Price: "<<average<<endl;
    }
    if(choice==5)
    {
        int count = 0;
        for(int i = 0; i < 5; i++)
        {
            if(mobile[i].cam.megapixelss >= 50) count++;
        }
        cout<<"Displaying the count of mobiles having megapixels >= 50: "<<endl;
        cout<<"Mobile with Camera>=MP: "<<count<<endl;
    }
    }while(choice!=6);
}
int main()
{
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter data for Mobile "<<i+1<<endl;
        cout<<"Enter Megapixels(>0): ";
        cin>>mobile[i].cam.megapixelss;
        cout<<"Enter Price(>=0) ";
        cin>>mobile[i].price;
        cout<<endl;
    }
    function_for_all_demands();
    return 0;
}


// Question 3
#include<iostream>
using namespace std;
// ========= STRUCT FOR MEGAPIXELS ==========
struct camera_megapixels{
    int megapixelss;
};
// ========= STRUCT FOR MOBILE PRICE ===============
struct mobile_price{
    int price;
    camera_megapixels cam;
}mobile[5];
// ========== FUNCTION ACCORDING TO THE QUESTION DEMAND ============
void function_for_all_demands()
{
    cout<<"Displaying the Prices of all the mobiles: "<<endl;
        for(int i = 0; i < 5; i++)  // TO DISPLAY ALL MOBILE PRICES THIS LOOP IS USED
        {
            cout<<"The Price of mobile "<<i+1<<" is : " ;
            cout<<mobile[i].price;
            cout<<endl;
        }
        cout<<endl;
        int expensive = mobile[0].price;
        for(int i = 0; i < 5; i++) // TO DISPLAY THE MOST EXPENSIVE MOBILE PHONE
        {
            if(mobile[i].price>expensive)
            {
                expensive = mobile[i].price;
            }
        }
        cout<<"Displaying the most expensive mobile: "<<endl;
        cout<<"Most expensive price: "<<expensive<<endl;

        int highest = mobile[0].cam.megapixelss;
        for(int i = 0; i < 5; i++)  // TO DISPLAY THE PHONE WITH HIGHER MEGAPIXELS
        {
            if(mobile[i].cam.megapixelss > highest)
            {
                highest = mobile[i].cam.megapixelss;
            }
        }
        cout<<"Displaying the highest camera megapixels: "<<endl;
        cout<<"Highest camera MP: "<<highest<<endl;
   
        float sum = 0;
        for(int i = 0; i < 5; i++) // TO CALCULATE THE PRICE AVERAGE
        {
            sum+=mobile[i].price;
        }
        float average = sum / 5;
        cout<<"Displaying the Average Price: "<<endl;
        cout<<"Average Price: "<<average<<endl;

        int count = 0;
        for(int i = 0; i < 5; i++) // TO COUNT HOW MANY MOBILE PHONES HAVE MEGAPIXELS MORE THAN 50
        {
            if(mobile[i].cam.megapixelss >= 50) count++;
        }
        cout<<"Displaying the count of mobiles having megapixels >= 50: "<<endl;
        cout<<"Mobile with Camera>=MP: "<<count<<endl;
}
int main()
{
    for(int i = 0; i < 5; i++)  // FOR ENTERING THE DATA
    {
        cout<<"Enter data for Mobile "<<i+1<<endl;
        cout<<"Enter Megapixels(>0): ";
        cin>>mobile[i].cam.megapixelss; // TO INPUT THE MEGAPIXELS
        cout<<"Enter Price(>=0) ";
        cin>>mobile[i].price; // TO INPUT THE PRICE OF THE MOBILE
        cout<<endl;
    }
    // FUNCTION CALLL
    function_for_all_demands();

    return 0;
}