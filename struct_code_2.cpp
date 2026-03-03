// // QUESTION 1 
// #include<iostream>
// using namespace std;

// struct Student_Info{   // STRUCT DEFINED ACCORDING TO THE DEMAND 
//     string name; 
//     int id;
//     int subject_count[5];
// };
// // =========== FUNCTION TO SHOW ALL THE STUDENT INFO  ===================
// void ProcessPersonData(Student_Info s1,int count){
//     int sum = 0;  // SUM INITIALIZED WITH ZERO 
//     float average = 0; // AVERAGE INITIALIZED WITH ZERO 
//     int max_1 = s1.subject_count[0]; // INITIALIZING HIGHEST WITH THE FIRST INDEX CONTAINING MAYBE HIGHEST MAYBE NOT
//     int max_2 = s1.subject_count[0]; // SAME THINKING OF INITIALIZING IT WITH WHAT WE HAVE ON FIRST INDEX RATHER THAN 0
//     cout<<endl;
//     cout<<"Person Record"<<endl;
//     cout<<"=================================="<<endl;
//     cout<<"Name : "<<s1.name<<endl;  // TO OUTPUT NAME
//     cout<<"ID : "<<s1.id<<endl; // TO OUTPUT ID
//     cout<<"Grades : ";
//     for(int i = 0; i < count; i++)  // LOOP TO OUTPUT THE MARKS AND TO SUM UP ASWELL
//     {
//         cout<<s1.subject_count[i]<<".00 ";
//         sum += s1.subject_count[i];
//     }
//     average = sum / (float)count; // CALCULATING AVAERAGE USING FLOAT TO CALCULATE AVERAGE IN FLOAT 
//     for(int i = 0; i < count; i++)  // FINDING HIGHEST TO USE FOR FINDING 2ND HIGHEST 
//     {
//         if(s1.subject_count[i] > max_1)
//         {
//             max_1 = s1.subject_count[i];
//         }
//     }
//     for(int i = 0; i < count; i++)  // LOOP TO FIND 2ND HIGHEST AS DEMANDED IN QUESTION
//     {
//         if(s1.subject_count[i] > max_2 && s1.subject_count[i] < max_1)
//         {
//             max_2 = s1.subject_count[i];
//         }
//     }

//     cout<<endl;
//     cout<<"Average : "<<average<<endl;
//     cout<<"Second Highest Score : "<<max_2<<".00"<<endl;
//     cout<<"===================================="<<endl;
// }

// int main()
// {
//     Student_Info Brar;
//     Student_Info * Ptr = &Brar;  // POINTER IS POINTING TO THE STRUCTURE 
    
//     int choice;
//     cout<<"Enter the Name : ";
//     getline(cin,Ptr->name);  // USING THE POINTER WITH ARROW FOR INPUT 
//     cout<<"Enter the ID : ";
//     cin>>Ptr->id;  
//     cin.ignore();
//     range:  // JUST USED TO COUNTER THE SITUATION WHERE USER ENTER SUBJECTS MORE THAN 5
//     cout<<"Enter How Many Subjects : ";
//     cin>>choice;
//     if(choice > 5)
//     {
//         cout<<"You Choosed choice of subjects over the range. Select from (1-5) "<<endl;
//         goto range;
//     }
//     cin.ignore();
//     for(int i = 0; i < choice; i++)
//     {
//         check:  // IT IS COUNTERING THE SITUATION WHEN MARKS ARE ENTERED WRONG 
//         cout<<"Enter score for subject "<<i+1<<" (score must be greater than 0 and and less than 100) : ";
//         cin>>Ptr->subject_count[i];
//         if(Ptr->subject_count[i] < 0 || Ptr->subject_count[i] > 100)
//         {
//             cout<<"Wrong Marks Inputted "<<endl;
//             goto check;
//         }
//     }
// // =========== CALLING THE FUNCTION =================
//     ProcessPersonData(Brar,choice);
//     return 0;
// }

// QUESTION 2
#include<iostream>
#include<iomanip>  // THIS LIBRARY IS USED TO GET THE OUTPUT ACCORDING TO THE DEMAND (2 DECIMAL PLACES)
using namespace std;
// ========== STRUCT CREATION =============
struct employer_DETAILS{
    char employer_NAME[50];
    char employer_JOBTITLE[30];
    int employer_CODE;
    int month_COUNT;
    double monthly_SALARY[5];  // FLOAT WAS GIVEN IN QUESTION I USED DOUBLE AS SALARY MAYBE GO OVER THE RANGE OF FLOAT 
    double *base_ADDRESS;
};
// ======= FUNCTION PROTOTYPE ===================
void Function_To_Display_All_The_Details(employer_DETAILS *s,double extra);

int main()
{
    employer_DETAILS munim_emp;  // INSTANCE BEING CREATED 
    employer_DETAILS * ptr_to_munim = &munim_emp; // POINTER POINTING TO THAT INSTANCE 

    cout<<"Enter the name of the employeee : ";  // ASKING TO ENTER NAME 
    cin.getline(ptr_to_munim->employer_NAME,50);

    cout<<"Enter the job title of the employeee : "; // ASKING TO ENTER JOB TITLE 
    cin.getline(ptr_to_munim->employer_JOBTITLE,30);

    cout<<"Enter the employeee code : ";  // ASKING TO ENTER EMPLOYEE CODE 
    cin>>ptr_to_munim->employer_CODE;
    cin.ignore();

    again:  // USE TO HANDLE THESITUATION WHEN USER ENTERS MONTH MORE THAN 5 OR LESS THAN 1
    cout<<"Enter the month count (1 to 5 only) ";
    cin>>ptr_to_munim->month_COUNT;
    if(ptr_to_munim->month_COUNT > 5 || ptr_to_munim->month_COUNT < 1)
    {
        cout<<"Enter between 1 and 5 (Input Again!)."<<endl;
        goto again;
    }
    cin.ignore();

    int index = 0;  // SAME LOGIC I USED HERE WHEN USER GAVE WRONG INPUT IT HANDLES THAT SITUATION 
    again_1:
    for(int i = index; i < ptr_to_munim->month_COUNT; i++)
    {
        cout<<"Enter the monthly salary for month "<<i+1<<" : ";
        cin>>ptr_to_munim->monthly_SALARY[i];
        if(ptr_to_munim->monthly_SALARY[i] < 0)
        {
            cout<<"You inputted salary less than 0 (Input the salary greater than 0) "<<endl;
            index = i;
            goto again_1;
        }
    }
    cout<<endl;
    double extra_AMOUNT;  // CREATED AS DEMANDED IN QUESTION 
    cout<<"Enter the extra amount you want to gave to the hard working employee : ";
    cin>>extra_AMOUNT;
    cin.ignore();
    cout<<endl;
    // GIVING THE ADDRESS OF ARRAY TO POINTER CREATED IN STRUCT 
    ptr_to_munim->base_ADDRESS = ptr_to_munim->monthly_SALARY;
    // ========== CALLING THE FUNCTION ========================
    Function_To_Display_All_The_Details(ptr_to_munim,extra_AMOUNT);
    return 0;
}

void Function_To_Display_All_The_Details(employer_DETAILS *s,double extra)
{
    double average_monthly_salary,sum = 0,highest_salaray;  // VARIABLES CRAETED ACCORDING THE DEMAND 
    highest_salaray = s->monthly_SALARY[0]; // INITIALIZING IT WITH 1ST MONTH SALARY MAYBE IT IS THE HIGHEST 
    for(int i = 0; i < s->month_COUNT; i++) // LOOP TO SUM AND FIND THE HIGHEST SALARY 
    {
        sum += s->monthly_SALARY[i];
        if(s->monthly_SALARY[i] > highest_salaray)
        {
            highest_salaray = s->monthly_SALARY[i];
        }   
    }
    average_monthly_salary = sum / s->month_COUNT; // FINDING AVERAGE SALARY 
    double overall_salary_after_extra_amount = sum + extra; // ACCORDING TO THE QUESTION CREATED A NEW VARIABLE TO FIND THE FINAL AVERAGE 
    double final_average_after_addition = overall_salary_after_extra_amount / s->month_COUNT;
    cout<<fixed<<setprecision(2); // SOMETHING NEW I LEARNED TO SET PRECISON TO DECIMAL PLACES 
    // OUTPUTTING ALL THE EMPLOYEE DETAILS 
    cout<<" #=================================# "<<endl;
    cout<<" Employee Information : "<<endl;
    cout<<endl;
    cout<<" Employee Name : "<<s->employer_NAME<<endl;  // TO OUTPUT NAME 
    cout<<" Job Title : "<<s->employer_JOBTITLE<<endl; // TO OUTPUT EMPLOYEE JOBTITLE
    cout<<" Employee Code : "<<s->employer_CODE<<endl; // TO OUTPUT EMPLOYEE CODE 
    cout<<endl;
    cout<<" All Monthly Salaries Details : "<<endl;
    for(int i = 0; i < s->month_COUNT; i++) // LOOP TO OUTPUT THE SALARIES 
    { 
        cout<<" Salary of "<<i+1<<" month : "<<s->monthly_SALARY[i]<<endl;
    }
    cout<<endl;
    cout<<" Average Salary : "<<average_monthly_salary<<endl;  // TO OUTPUT AVERAGE SALARY 
    cout<<" Highest Salaray : "<<highest_salaray<<endl; // TO OUTPUT HIGHEST SALARY 
    cout<<" Final Average Salary after adding extra amount : "<<final_average_after_addition<<endl; // TO OUTPUT FINAL AVERAGE SALARY 
    cout<<" #=================================# "<<endl;
    // THATS THE END
}

