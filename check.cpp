// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,num2;
//     cin>>num>>num2;
//     cout<<num<<endl<<endl<<num2<<endl;
//     cout<<num2;
//     printf("\n");
//     return 0;
// }

// #include<iostream>
// int main()
// {
//     int num,num2;
//     std:: cin>>num>>num2;
//     std:: cout<<num<< std::endl<<std::endl<<num2<<std::endl;
//     std:: cout<<num2;
//     printf("\n");
//     return 0;
// }

// #include<iostream>
// using std::cin;
// using std::cout;
// using std::endl;

// int main()
// {
//     int num;
//     cout<<"Enter a Number: ";
//     cin>>num;
//     cout<<"The number entered is num "<<num;
//     return 0;
// }

// Start of Learning C++ By A program By Myself
// Calculator by C++
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     char ch;
//     cout<<"Enter number 1: ";
//     cin>>a;
//     cout<<"Enter number 2: ";
//     cin>>b;
//     cout<<"Enter operator: ";
//     cin>>ch;
//     if(ch == '+')
//     {
//         cout<<"The Result is "<<a+b;
//     }
//     if(ch == '-')
//     {
//         cout<<"The Result is "<<a-b;
//     }
//     if(ch == '*')
//     {
//         cout<<"The Result is "<<a*b;
//     }
//     if(ch == '/')
//     {
//         if(a>=b)
//         {
//         cout<<"The Result is "<<a/b;
//         }
//         else
//         {
//             cout<<"Not Possible";
//         }
//     }
//     printf("\n");
//     cout<<"THATS ALL! STARTED THE JOURNEY HOPE FOR THE BEST!";
//     return 0;
// }

// Question 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     int *p;
//     cout<<"Enter a Number: ";
//     cin>>num;
//     p=&num;
//     cout<<"The Entered Number is: "<<num<<endl;
//     cout<<"Address Of The Number By Pointer: "<<p<<endl;
//     cout<<"Address Of The Number By And Operator "<<&num<<endl;
//     cout<<"Number By Using Derefrencing: "<<*p<<endl;
//     return 0;
// }

// Question 2
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     int*p,*q;
//     p=&a;
//     q=&b;
//     cout<<"Enter the Two Numbers: ";
//     cin>>a>>b;
//     cout<<endl;
//     cout<<"Sum By Pointers: "<<*p+*q<<endl;
//     cout<<"THATS ALL";
//     return 0;
// }

// Question 3
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y;
//     cout<<"Enter The Numbers: ";
//     cin>>x>>y;
//     int *p,*q;
//     p=&x;
//     q=&y;
//     if(*p>*q)
//     {
//         cout<<*p <<" is the Maximum value."<<endl;
//     }
//     else
//     {
//         cout<<*q<<" is the Maximum value."<<endl;
//     }
//     return 0;
// }

// Reversing an Array Using Pointers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     for(int i=0;i<5;i++)
//     {
//         cout<<"Enter the "<<i<<"th element of an array: ";
//         cin>>arr[i];
//     }
//     int *p=arr;
//     int *q=&arr[4];
//     for(int i=0;i<2;i++)
//     {
//         int temp=*p;
//         *p=*q;
//         *q=temp;
//         p++;
//         q--;
//     }
//     cout<<endl;
//     for(int i=0;i<5;i++)
//     {
//         cout<<"The "<<i<<"th element of an array is: "<<arr[i]<<endl;
//     }
//     return 0;
// }

// Changing Value of a Variable by Pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     float GPA = 2.96;
//     float *p;
//     p = &GPA;
//     *p = 3.02;
//     cout<<"After the change the Value Becomes: "<<GPA<<endl;
//     return 0;
// }

// Dynamic Memory Test
// #include<iostream>
// using namespace std;
// int main()
// {
//     // int *ptr = new int(25);
//     // cout<<ptr<<endl<<*ptr<<endl;
//     int *ptr1 = new int[5]{1,2,3,4,5};
//     int *ptr2 = ptr1;
//     cout<<endl<<ptr2<<endl<<ptr1<<endl;
//     for(int i = 0; i<5; i++)
//     {
//         cout<<ptr2<<endl<<*ptr2<<endl;
//         ptr2++;
//     }
//     delete[] ptr1;
//     cout<<endl<<ptr2<<endl<<ptr1<<endl;
//     ptr1=NULL;
//     cout<<ptr1<<endl;
//     return 0;
// }

// Checking Char array in C++
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     char array[12] = {'H','e','l','l','o',' ','M','u','n','i','m','\0'};
//     string a = "Abdul Munim";
//     string b = {'a','b','c','d','e','f'};
//     cout<<array<<endl;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<a.length()<<endl;   //a.length() tells the length of a string it donot counts null terminator
//     cout<<b.empty()<<endl;    //b.empty() tells if there exists something in string

//     return 0;
// }

// Pointer Little bit Practice
// #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 256;
//     cout<<"Value before pointer changing: "<<x<<endl;
//     int *p = &x;
//     *p=2;
//     cout<<"Value after changing by pointer: "<<x<<endl;
//     x=5;
//     cout<<"Value after changing by variable: "<<x<<endl;
//     *p=10;
//     cout<<"Value after changing by pointer: "<<x<<endl;
//     char ch = 'A';
//     cout<<"Value before pointer changing: "<<ch<<endl;
//     char *q = &ch;
//     *q='B';
//     cout<<"Value after changing by pointer: "<<ch<<endl;
//     int abc;
//     int *ptr;
//     ptr=&abc;
//     *ptr=5;
//     cout<<&abc<<endl<<ptr<<endl<<*ptr<<endl;
//     abc=10;
//     cout<<&abc<<endl<<ptr<<endl<<*ptr;
//     return 0;
// }

// Checking code for address
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 50;
//     cout<<a<<endl<<&a<<endl;
//     int *p = &a;
//     cout<<p<<endl<<&a<<endl<<*p<<endl<<a;
//     int *q;
//     q=NULL;
//     cout<<endl<<q<<endl;
//     return 0;
// }

// Sir Zakria Code Practice
// #include<iostream>
// using namespace std;
// void selectLarger(int *a,int *b,int **result){
//     if(*a > *b)
//     *result = a;
//     else
//     *result = b;
// }
// int main()
// {
//     int x=10, y=20;
//     int *ptr=NULL;
//     cout<<&ptr<<endl;
//     selectLarger(&x,&y,&ptr);
//     cout<< "Larger value is: "<< *ptr <<endl;
//     cout<<ptr<<endl<<*ptr<<endl;
//     return 0;
// }

// Finding second maximum in an array by pointers (I did my way by two loops i was doing right but in onw there was a problem so this is gpt method)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[5] = {1,2,3,4,5};
//     int *ptr = array;
//     int *ptr1 = ptr;
//     int max_1 = array[0];
//     int max_2 = array[0];
//     for(int i = 0; i < 5; i++)
//     {
//         if(*ptr > max_1)
//         {
//             max_2 = max_1;   // store old max
//             max_1 = *ptr;    // update max
//         }
//         else if(*ptr > max_2 && *ptr != max_1)
//         {
//             max_2 = *ptr;
//         }
//         ptr++;
//     }
//     cout<<"The maximum is "<<max_1<<endl;
//     cout<<"The second maximum is "<<max_2<<endl;
//     return 0;
// }

// Struct Program As I am following Recluze But I am not understanding it As I haven't studied it before Like Purhaya ni gya
// #include<iostream>
// using namespace std;
// struct student {
//     int roll_no;
//     string name;
// };
// struct node{
//     int val;   // Node is goig to do two things one hold its own value and second the address of other node
//     node *next;    // kisi bhee node ka address rkh skta h (Hoskta h agla koi address ho he nhn).
// };
// int main()
// {
// student s1;
// s1.name = "Abdul Munim";
// s1.roll_no = 3019;
// student *s;
// s=&s1;  // one way of getting address
// cout<<(*s).name<<endl;        // (*s)  ----> s1 (as it is having address of s1).
// cout<<(*s).roll_no<<endl;     // Why brackets because . has more priority/prescedence.
// cout<<s1.name<<endl;
// cout<<s1.roll_no<<endl;
// cout<<s->name<<endl;          // -> is * () . (arrow encaptulates * brackets and the dot).
//                               // This -> is called as syntactic sugar (Easy for our typing).
// new instance
// s = new student;
// s->name = "Atif Malangy";
// s->roll_no = 0053;
// delete an existing instance
// delete s;    // delete need pointer like variable can't be delete (Can think of dynamic memoery use aswell)
//     node *n;
//     n = NULL;
//     n = new node;
//     n -> val = 1;
//     n -> next = NULL;
//     n -> next = new node;
//     n -> next -> val = 5;
//     n -> next -> next = NULL;
//     return 0;
// }

// Checking the nothrow from sir's lecture.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p = new(nothrow) int(25);
//     if(!p)
//     {
//         cout<<"Memory allocation failed "<<endl;
//     }
//     else cout<<*p<<endl<<p<<endl;
//     delete p;
//     p=NULL;
//     cout<<p<<endl;
//     return 0;
// }

// Stuct Program Continue.  Lets see Today is a new lecture. (Incomplete code Focusing on lecture.)
// #include<iostream>
// using namespace std;
// struct node{
//     int val;
//     node *next;
// };
// int main()
// {
//     node *h;
//     h = new node;
//     h -> val = 1;
//     h -> next = NULL;
//     node *current = h;
//     return 0;
// }

// Checking The int &b
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int &b = a;
//     cout<<b<<endl<<a<<endl<<&b<<endl<<&a;
//     return 0;
// }

// Preprocessor Use
// #include<iostream>
// using namespace std;
// #define SIZE 5
// int main()
// {
//     int i;
//     for(int i=1;i<=SIZE;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Sir Zulqarnain Codes
// #include <iostream>
// using namespace std;
// void print(int* arr, int m, int n) {
//     for (int i = 0; i < m; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cout << *(arr + i * n + j) << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     int m = 3, n = 3;
//     print(&arr[0][0], m, n);
//     return 0;
// }
// 2
// #include <iostream>
// using namespace std;
// int main() {
// int x = 10;
// char c = 'A';
// void* vp;
// vp = &x;
// cout << "Int : " << *(int*)vp << endl;
// vp = &c;
// cout << "Char " << *(char*)vp << endl;
// vp = &c;
// cout << "Char to Int :" << (int)*(char*)vp << endl;
// return 0;
// }

// Pointer Revision
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a = 56;
//     int *ptr;  // Declared a Pointer
//     ptr = &a;
//     cout<<"Address of a variable by using & operator: "<<&a<<endl;
//     cout<<"Address stored as a Value in a Pointer: "<<ptr<<endl;
//     cout<<"Value of a: "<<a<<endl;
//     cout<<"Value by derefrencing: "<<*ptr<<endl;
//     return 0;
// }

// Dynamic Memory allocation Trying
// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p;
//     p = new int;
//     *p = 35;
//     cout<<"Address Dynamically Allocated: "<<p<<endl<<"Value Stored at that address: "<<*p<<endl;
//     delete p;
//     p = NULL;
//     return 0;
// }

// Using of nothrow
// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p = new(nothrow) int;
//     if(!p)
//     {
//         cout<<"Memory allocation Failed"<<endl;
//     }
//     else
//     {
//         cout<<"Successfully allocated"<<endl;
//     }
//     delete p;
//     p = NULL;
//     return 0;
// }

// Aliasing and No aliasing
// #include<iostream>
// using namespace std;
// int main()
// {
// int p = 9;
// int q = 9;
// cout<<p<<endl<<q<<endl;
// q=10;
// cout<<p<<endl<<q<<endl;
// cout<<"No Aliasing.";
// int x = 10;
// int *g , *h;
// g = &x;
// h = g;
// cout<<*g<<endl<<*h<<endl;
// *h = 11;
// cout<<*g<<endl<<*h<<endl;
// cout<<"That's Called Aliasing";
//     int a = 9;
//     int &b = a;
//     b = 10;
//     a = 11;
//     b = 14;
//     cout<<b<<endl<<a<<endl;
//     cout<<"Another Way of ALiasing.";
//     return 0;
// }

// Pointer function returning address
// #include<iostream>
// using namespace std;
// int *address(int y )    // GIVING WARNING AGAIN AND AGAIN.
// {
//     return &y;
// }
// int main()
// {
//     int y = 6;
//     int * p = address(y);
//     cout<<"Address : "<<p<<endl;
//     cout<<"Value at that address : "<<*p<<endl;
//     return 0;
// }

// Trying With dynamic memory
// #include<iostream>
// using namespace std;    // ITS WORKING QUITE NICELY ...
// int *address()
// {
//     int *p = new int (56);
//     return p;
// }
// int main()
// {
//     int *ptr = address();
//     cout<<"Address : "<<ptr<<endl<<"Value at that address : "<<*ptr<<endl;
//     delete ptr;
//     ptr = NULL;
//     cout<<"Address : "<<ptr<<endl<<"Value at that address : "<<*ptr<<endl;
//     return 0;
// }

// Trying the const pointer and const data type
// #include<iostream>
// using namespace std;
// int main()
// {
//     const int x = 23;
//     const int *p;
//     p = &x;
//     cout<<x<<endl<<*p<<endl<<p<<endl<<&x<<endl;
//     // x = 76;  // Not able to change the value error coming..
//     // I am getting that cahnge address problem after every compilation and execution ...
//     char const ch = 'A';
//     char const * const p = &ch;    // Now it is working const after steric works ...
//     cout<<*p<<endl<<ch<<endl<<p<<endl;
//     cout<<*p<<endl<<ch<<endl<<p<<endl;
//     return 0;
// }

// Trying the void pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x = 10;
//     float y = 11;
//     char z = 'A';
//     void *ptr;
//     ptr = &x;
//     cout<<*(int *)ptr<<" ";
//     ptr = &z;
//     cout<<*(char *)ptr<<" ";
//     ptr = &y;
//     cout<<*(float *)ptr<<" ";   // 10 A 11
//     return 0;
// }

// Trying to store char address  into int by typecasting
// #include<iostream>
// using namespace std;                      //    NOT WORKING BY MINE WAYYYYYYYYYYYY . . .
// int main()
// {
//     // char x = 65;  // It is doing some type casting job.
//     // cout<<x;   // A is the output.
//     char ch = 'a';
//     char *p = &ch;
//     cout<<p<<endl<<&ch<<endl<<*p<<endl<<ch<<endl;
//     return 0;
// }

// Trying Again something new..
// #include<iostream>
// using namespace std;
// int main()
// {                              // Problem in this code Wrong h
//     char * v;
//     int * p = (int *)v;        // By Type casting you can store the address of other pointer in pointer
//     cout<<p<<endl;
//     return 0;
// }

// Array of pointers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {34,67,65};
//     int *arrop[3];
//     for(int i = 0; i < 3; i++){
//         arrop[i] = &arr[i];
//     }
//     for(int i = 0; i < 3; i++){
//         cout<<i+1<<" index stored value: "<<arrop[i]<<endl;
//         cout<<i+1<<" index stored value at that address: "<<*arrop[i]<<endl;
//     }
//     return 0;
// }

// 2D Array access by pointer checking
// #include<iostream>
// using namespace std;
// int main()
// {
//     int array[3][3];
//     for(int i = 0 ; i < 3 ; i++){
//         for(int j = 0 ; j < 3 ; j++){
//             cin>>array[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i = 0 ; i < 3 ; i++){
//         for(int j = 0 ; j < 3 ; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"Now By doing this by Pointer You can say accssing rows and coloumns by only rows address base address in pointer. ";
//     cout<<endl;
//     cout<<endl;
//     int *p = array[0];
//     for(int i = 0 ; i < 3 ; i++){
//         for(int j = 0 ; j < 3 ; j++){
//             cout<<"Address of "<<i<<"th row and "<<j<<"th coloumn : "<<p<<endl;
//             cout<<"Value at the address of "<<i<<"th row and "<<j<<"th coloumn : "<<*p<<endl;
//             p++;
//         }
//         cout<<endl;
//     }
//     cout<<endl<<"Hence proved that the address are linearly present . . . . ";
//     return 0;
// }

// 2D Array Not a simple one Its dynamic one man
// #include <iostream>
// using namespace std;
// #define ROWS 3
// #define COLOUMNS 3
// int main()
// {
//     int *p = new int[ROWS * COLOUMNS];
//     for (int i = 0; i < ROWS; i++)
//     {
//         for (int j = 0; j < COLOUMNS; j++)
//         {
//             *(p + i * COLOUMNS + j) = i + 1;
//         }
//     }
//     cout << endl;
//     // for(int i = 0 ; i < ROWS ; i++){
//     //     for(int j = 0 ; j < COLOUMNS ; j++){
//     //         cout<<*(p + i*COLOUMNS + j)<<" ";         (1000) (1004) (1008) ...
//     //     }
//     //     cout<<endl;
//     // }
//     // for (int i = 0; i < ROWS; i++)
//     // {
//     //     for (int j = 0; j < COLOUMNS; j++)
//     //     {
//     //         cout << (p + i * COLOUMNS)[j] << " ";     (1000)[0] (1000)[1] (1000)[2] ...
//     //     }
//     //     cout << endl;
//     // }
//     delete[] p;
//     p = NULL;
//     return 0;
// }

// 2D array by dynamic coloumn making
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p[3];
//     p[0] = new int[3]{1,2,3};
//     p[1] = new int[3]{4,5,6};
//     p[2] = new int[3]{7,8,9};
//     for(int i = 0 ; i<3 ; i++){
//         for(int j =0 ; j<3 ; j++){
//             cout<<*(*(p+i)+j)<<" ";     
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Dynamic 2D Array using double pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     int **p = new int*[2];
//     *(p+0) = new int[3];
//     *(p+1) = new int[3];
//     for(int i = 0; i<2 ; i++){
//         for(int j = 0 ; j<3 ;j++){
//             cin>>p[i][j];
//         }
//     }
//     for(int i = 0; i<2 ; i++){
//         for(int j = 0 ; j<3 ;j++){
//             cout<<*(*(p+i)+j)<<" ";
//         }
//         cout<<endl;
//     }
//     delete[] p;
//     return 0;
// }

// Simple 2D Array just to verify my formula
// #include<iostream>
// using namespace std;
// int main()
// {
//     int array[2][2] = {1,2,3,4};
//     for(int i = 0  ; i < 2 ;i++){
//         for(int j = 0 ; j < 2 ; j++){
//             cout<<*(*(array+i)+j)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Checking a compression one by mine logic   (Not Working. . . works only on banana when aaab comes gives a as output no ab)   I did it hehehe
// #include<iostream>
// using namespace std;
// int main()
// {
    // char string[50];
    // cin.getline(string,50);
    // char stringyy[50];
    // int c = 0;
    // for(int i = 0; string[i] != '\0'; i++){
//         for(int j = i+1; string[j] != '\0' ;j++){
//             if(string[i]==string[j])
//             {
//                 string[j] = '0';            
//             }
//         }
//     }
//     for(int k = 0 ; string[k]!='\0';k++){
//         if(string[k] != '0'){
//             stringyy[c] = string[k];
//             c++; 
//         }
//     }
//     stringyy[c] = '\0';
//     cout<<stringyy;
//     return 0;
// }

// Trying Again   KAMYABI HUE HEHE ALHUMDULILLAH
// #include<iostream>
// using namespace std;
// int main()
// {
//     char array[28];
//     cin.getline(array,28);
//     char a[28];
//     int xx = 0;
//     for(int i = 0 ; array[i] != '\0' ; i++){
//         for(int j = i+1;array[j]!='\0';j++){
//             if(array[i] == array[j])
//             {
//                 array[j] = ' ';
//             }
//         }
//     }
//         for(int k = 0;array[k]!='\0';k++){
//             if(array[k] != ' ')
//             {
//                 a[xx] = array[k];
//                 xx++;
//             }
//         }
//     a[xx]='\0';
//     cout<<a<<endl;
//     return 0;
// }

// Doing with pointers
// #include<iostream>
// using namespace std;
// int main()
// {
//     char array[34];
//     cin.getline(array,34);
//     char *ptr = array;
//     int c = 0;
//     for(int i = 0; *(array+i)!='\0' ; i++){
//         if(*(array+i)==' ') continue;
//         for(int j = i+1; *(array+j)!='\0';j++){
//             if(*(array+i) == *(array+j)){
//                 *(array+j) = ' ';
//             }
//         }
//     }
//     for(int k=0; *(array+k)!='\0'; k++){
//         if(*(array+k)!=' ')
//         {
//             *(array+c) = *(array+k);
//             c++;
//         }
//     }
//     *(array+c)='\0';
//     cout<<array;
//     return 0;
// }

// Sirs Code of 2D DYNAMIC ARRAY
// #include<iostream>
// using namespace std;
// #define N 3
// #define M 3
// int main()
// {
//         int **ary = new int *[N];
//         for(int i=0;i<N;i++){
//             ary[i] = new int[M];
//         }
//         for(int i = 0;i<N;i++){
//             for(int j = 0;j<M;j++){
//                 ary[i][j] = i;
//             }
//         }
//         for(int i = 0;i<N;i++){
//             for(int j = 0;j<M;j++){
//                cout<<ary[i][j]<<" ";
//             }
//             printf("\n");
//         }
//         for(int i= 0 ;i<N ; i++){
//             delete[] ary[i];
//         }
//         delete[] ary;
//         ary = NULL;
//         return 0;
// }

// Struct Practice (Basically started in class)
// #include<iostream>
// #include<string>
// using namespace std;
// struct student{
//     string name;
//     int age;
//     float gpa;
//     int semester;
//     string father_name;
//     string address;
//     string email;
// };
// struct student1{
//     int number;
// };
// int main()
// {
//     student s1,s2,s3;
//     s1 = {"Abdul Munim",18,3.02,2,"Saboor Ahmad","Paracha_Town","abdulphenomenal910@gmail.com"};
//     cout<<s1.name<<"\n"<<s1.age<<"\n"<<s1.father_name<<"\n"<<s1.email<<"\n"<<s1.father_name;
//     s2.name = "Aizaz Ali Shah";
//     s3.name = "Muhammad Atif";
//     cout<<endl;
//     cout<<endl<<s2.name<<"\n"<<s3.name<<endl;
//     cout<<endl;
//     cin>>s3.gpa;
//     cin.ignore();
//     getline(cin,s3.address);
//     cout<<endl<<s3.gpa<<endl<<s3.address;
//     student1 s0;
//     s0.number = 4151;
//     cout<<endl<<s0.number<<endl;
//     return 0;
// }

// Struct Practice
// #include <iostream>
// #include <string>
// using namespace std;
// struct student {
//     int regno;
//     string name;
//     float marks[3];
// };
// int main() {
//     student s[4] = {
//         {201, "zulqarnain", {78, 82}},
//         {202, "ihtisham"},
//         {},
//         {203, "Bilal"}
//     };
//     cout << "student data is below:"<<endl;
//     for (int i = 0; i < 4; i++) {
//         cout << "student " << i + 1 << ":"<<endl;
//         cout << "reg No: " << s[i].regno << endl;
//         cout << "name: " << s[i].name << endl;
//         cout << "marks: ";
//         for (int j = 0; j < 3; j++) {
//             cout << s[i].marks[j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// MINE PRACTICE OF STRUCTS
// #include<iostream>
// using namespace std;
// struct munim{
//     string name;
//     string father_name;
//     int marks_array[3];
//     float gpa;
// };
// struct abdul{
//     int x;
//     int y;
//     munim v1;
// };
// 
// int main()
// {
//     // munim s1;
//     // s1.name = "Abdul Munim";
//     // s1.father_name = "Saboor Ahmed";
//     // for(int i = 0; i < 3; i++)
//     // {
//     //     cin>>s1.marks_array[i];
//     // }
//     // cin>>s1.gpa;
//     // munim s2;
//     // s2 = {"Rayan Ather","Ather",{1,2,3},3.9};
//     // cout<<s2.father_name<<endl<<s2.name<<endl<<s2.gpa<<endl;
//     // for(int i = 0; i < 3; i++)
//     // {
//     //     cout<<s2.marks_array[i]<<" ";
//     // }
// 
//     abdul s1;
//     s1 = {12,13,"munim","saboor",1,2,3,3.02};
//     cout<<s1.v1.father_name;
//     cout<<endl;
//     cout<<s1.v1.gpa;
//     cout<<endl;
//     cout<<s1.y;
//     cout<<endl;
//     abdul * ptrtry;
//     ptrtry= &s1;
//     cout<<ptrtry->v1.father_name;
//     cout<<endl;
//     cout<<ptrtry->v1.name;
//     return 0;
// }

// GPT KA H BUT I THINKED ABOUT IT
// #include <iostream>
// #include <string>
// using namespace std;
// struct Address {
//     string city;
// };
// struct Student {
//     string name;
//     Address* addr_ptr; // Nested pointer
// };
// int main() {
//     // 1. Create the inner object
//     Address myCity = {"New York"};
//     // 2. Create the outer object and link the inner pointer
//     Student s1 = {"Alice", &myCity};
//     // 3. Create a pointer to the outer object
//     Student* p1_ptr = &s1;
//     // Accessing through two levels of pointers
//     // p1_ptr points to Student -> addr_ptr points to Address -> city
//     cout << "Student Name: " << p1_ptr->name <<endl;
//     cout<<p1_ptr->addr_ptr->city;
//     return 0;
// }

// QUESTION OF STRUCT
// #include<iostream>
// using namespace std;
// struct car{
//     string Model;
//     int Year;
//     float Price;
// };
// int main()
// {
//     car array[3];
//     for(int i = 0; i < 3; i++)
//     {
//         cout<<"Enter the Model of car "<<i+1<<" ";
//         cin>>array[i].Model;
//         cout<<"Enter the Price of car "<<i+1<<" ";
//         cin>>array[i].Price;
//         cout<<"Enter the Year of car "<<i+1<<" ";
//         cin>>array[i].Year;
//     }
//     for(int i = 0; i < 3; i++)
//     {
//         if(array[i].Price>=50000){
//         cout<<"The Model of car is "<<array[i].Model;
//         cout<<"The Price of car is "<<array[i].Price;
//         cout<<"The Year of car is "<<array[i].Year;
//         }
//     }
//     return 0;
// }

// Reverse a String Using Pointer
// #include<iostream>
// using namespace std;
// int main()
// {
//     int length;
//     cout<<"Enter the length : ";
//     cin>>length;
//     cin.ignore();
//     cout<<endl;
//     char array[length];
//     cout<<"Enter Your String : ";
//     cin.getline(array,12);
//     cout<<"Reversing the String "<<endl;
//     char *ptr;
//     ptr = array;
//     char *end_ptr;
//     end_ptr = array;
//     while(*end_ptr!='\0'){
//         end_ptr++;
//     }
//     end_ptr--;
//     for(int i = 0; i < length/2; i++)
//     {
//         char temp = *ptr;
//         *ptr = *end_ptr;
//         *end_ptr = temp;
//         end_ptr--;
//         ptr++;
//     }
//     cout<<"String After Reversing Becomes : "<<array<<endl;
//     char *start = array;
//     char *end = array;
//     while (*start != '\0')
//     {
//         // skip spaces
//         while (*start == ' ')
//             start++;
//         if (*start == '\0')
//             break;
//         end = start;
//         // move end to word end
//         while (*end != ' ' && *end != '\0')
//             end++;
//         end--;
//         // reverse current word
//         char *left = start;
//         char *right = end;
//         while (left < right)
//         {
//             char temp = *left;
//             *left = *right;
//             *right = temp;
//             left++;
//             right--;
//         }
//         start = end + 2; // move to next word
//     }
//     cout<<endl;
//     cout<<"Reversing the words IT becomes : "<<array;
//     return 0;
// }

// Count vowels using pointers
// #include<iostream>
// using namespace std;
// int main()
// {
//     char array[10] = "aeiouaieo";
//     int count = 0;
//     char *ptr = array;
//     while(*ptr!='\0')
//     {
//         if(*ptr == 'a' || *ptr == 'e' || *ptr =='i' || *ptr == 'o' || *ptr == 'u') count ++;
//         ptr++;
//     }
//     cout<<"The vowels in the string are : "<<count;
//     return 0;
// }

// Doing copy without strcpy
// #include<iostream>
// using namespace std;
// int main()
// {
//     char array[11] = "abdul mun";
//     char *ptr = array;
//     char array1[11];
//     char *dest = array1;
//     while(*ptr!='\0'){
//         *dest = *ptr;
//         ptr++;
//         dest++;
//     }
//     *dest = '\0';
//     cout<<array1;
//     return 0;
// }

// Finding a frequency of an element in an array
// #include<iostream>
// using namespace std;
// int main()
// {
//     char string[45];
//     cout<<"Enter the string : ";
//     cin.getline(string,45);
//     int count = 0;
//     char ch;
//     cout<<"Enter the word to find the frequency : ";
//     cin>>ch;
//     cin.ignore();
//     cout<<endl;
//     char *ptr;
//     ptr = string;
//     while(*ptr!='\0')
//     {
//         if(*ptr == ch) count++;
//         ptr++;
//     }
//     cout<<"The Frequency of "<<ch<<" is "<<count;
//     return 0;
// }

// Sorting strings using pointers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter How many words : ";
//     cin>>n;
//     cin.ignore();
//     char **words = new char*[n];   
//     for(int i = 0; i < n; i++)
//     {
//         words[i] = new char[20];
//         cin>>words[i];
//     }
//     // sorting (a b c order using first letter)
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (words[i][0] > words[j][0]) {
//                 char *temp = words[i];
//                 words[i] = words[j];
//                 words[j] = temp;
//             }
//         }
//     }
//     cout << "\nSorted words:\n";
//     for (int i = 0; i < n; i++) {
//         cout << words[i] << endl;
//     }
//     for (int i = 0; i < n; i++) {
//         delete[] words[i];
//     }
//     delete[] words;
//     return 0;
// }

// Trying Just seeing the CLASS
// #include<iostream>
// using namespace std;
// class munim{
//     int age;
//     string name;
//     public:
//     void getname(string m){
//         name = m;
//     }
//     void getage(int i){
//         age = i;
//     }
// };
// int main()
// {
//     munim s1;
//     s1.getage(5);
//     s1.getname("Abdul Munim");
//     return 0;
// }

// Sir's Code of CLass
// #include <iostream>
// using namespace std;
// class Student {
// public:
// void init(string n, int r, float m) {
// name = n;
// roll_no = r;
// marks = m;
// }
// void displayInfo(void) {
// cout << "Name: " << name << endl;
// cout << "Roll No: " << roll_no << endl;
// cout << "Marks: " << marks << endl;
// }
// private:
// string name;
// int roll_no;
// float marks;
// };
// int main() {
// Student student1;
// student1.init("Ali", 101, 85.5);
// student1.displayInfo();
// Student s2;
// s2.init("Abdul Munim Paracha",3019,99.9);
// s2.displayInfo();
// return 0;
// }

// Class trying doing it public 
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     // private:
//     string name;
//     int age;
// }s1;
// int main()
// {
//     s1.name = "Abdul Munim";
//     s1.age = 18;
//     cout<<s1.name<<endl<<s1.age<<endl;
//     getline(cin,s1.name);
//     cout<<s1.name;
//     return 0;
// }

// Trying the parameterized constructor
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int age;
//     float cgpa;
//     Student(string s,int i,float x){
//         name = s;
//         age = i;
//         cgpa = x;
//     }
// };
// int main()
// {
//     Student s1{"Abdul Munim",18,3.02};
//     Student s2("Muhammad Atif",20,3.48);
//     cout<<s1.name<<endl;
//     cout<<s2.name;
//     return 0;
// }

// Trying what I learned till now
// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int age;
//     Student()
//     {
//     }
//     Student(string s,int id){
//         name = s;
//         age = id;
//     }
//     Student(int age,string name){
//       this->name = name;
//         age = age;
//     }
// };
// int main()
// {
//     Student s1("Abdul Munim",18);
//     s1.age = 19;
//     Student s2;
//     s2.name = "Aizaz";
//     cout<<s1.name;
//     cout<<endl;
//     Student s3(20,"Hassan");
//     cout<<s3.name;
//     return 0;
// }

// For Fun
// #include<iostream>
// using namespace std;
// class Fun{
//     public:
//     void Menu()
//     {
//         cout << "Menu of My Shop : " << endl;
//         cout << "1) Simple Coffee" << endl;
//         cout << "1.1) Small Cup     Rs 150 " << endl;
//         cout << "1.2) Medium Cup    Rs 250 " << endl;
//         cout << "1.3) Large Cup     Rs 300 " << endl;
//         cout << endl;
//         cout << "2) Chocolate Coffee" << endl;
//         cout << "2.1) Small Cup     Rs 200 " << endl;
//         cout << "2.2) Medium Cup    Rs 300 " << endl;
//         cout << "2.3) Large Cup     Rs 400 " << endl;
//         cout << endl;
//     }
// };
// int main()
// {
//     Fun f1;
//     f1.Menu();
//     return 0;
// }

// Checking Something
// #include<iostream>
// using namespace std;
// class Employee{
//     string name;
//     string roll;
//     public:
//     Employee(string name){
//        this->name = name;
//     }
//     void getname()
//     {
//       cout << "The Name is : " << name << endl;  
//     }
//     void setroll_number(string roll){
//         this->roll = roll;
//     }
//     void getroll_number()
//     {
//         cout << "The roll number is : " << roll << endl;
//     }
//     Employee &e(string name,string roll){
//         this->name = name;
//         this->roll= roll;
//     }
//     ~Employee(){
//         name = "Unnamed";
//         roll = "0";
//         cout << "I am here in default constructor. " << endl;
//         cout << "Name : " << name << endl;
//         cout << "Roll number : " << roll << endl;
//     }
// };
// int main()
// {
//     Employee e1("Abdul_Munim");
//     e1.getname();
//     e1.setroll_number("25P-3015");
//     e1.getroll_number();
//     Employee e2(e1);
//     e2.getname();
//     e2.getroll_number();
//     return 0;
// }

// Studying the class and Practicing
// #include<iostream>
// using namespace std;

// class Rectangle{
//     private:
//     float length;
//     float width;
//     float calcArea(){
//         return length * width;
//     };

//     public:
//     void getLen(float l){
//         length = l;
//     }
//     void getWid(float w){
//         width = w;
//     }
//     void displayLen(){
//         cout << "The Length is " << length << endl;
//     }
//     void displayWid(){
//         cout << "The Width is " << width << endl;
//     }
//     void displayArea() {
//         cout << calcArea();
//     }
// };

// int main()
// {
//     Rectangle r1;
//     r1.getLen(5.5);
//     r1.getWid(2.0);
//     r1.displayLen();
//     r1.displayWid();
//     r1.displayArea();
    
//     return 0;
// }

// Inheritance For Quiz
// #include<iostream>
// using namespace std;

// class Parent{
//     protected:
//     string f_name;
//     string m_name;

//     public:
//     Parent(){
//         cout << "We Are In the Default Constructor. " << endl;
//     }
//     Parent(string a,string b){
//         f_name = a;
//         m_name = b;
//     }
//     void display(){
//         cout << f_name << endl << m_name << endl;
//     }
// };

// class Son : public Parent{
//     private:
//     string s_name;

//     public:
//     Son(string a, string b, string c) : Parent(a,b) {
//         s_name = c;
//     }
//     void display(){
//         Parent::display();
//         cout << s_name << endl;
//     }
// };
// int main()
// {
//     Son s1("Saboor","Jav","Munim");
//     s1.display();
//     return 0;
// }

// Checking class
// #include<iostream>
// using namespace std;
// class Parent{
//     private:
//     int x;
//     protected:
//     int y;
//     public:
//     Parent(int c) : y(c) {}
//     void display(){
//         cout << y;
//     }
// };
// int main()
// {
//     Parent p1(2);
//     p1.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct A{
//     private:
//     int length;
//     int width;
//     public:
//     void input(){
//         cin >> length;
//         cin >> width;
//     }
//         A()
//     {
//     }
//     void set(int l){
//         length = l;
//     }
// };
// int main()
// {
//     A a1;
//     a1.input();
//     a1.set(2);
//     return 0;
// }


// Waise he
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 6;
//     int b = 7;
//     int c = a * b;
//     cout << c << endl;
//     c = 45;
//     cout << c << endl;
//     return 0;
// }


// Checking And Practice
// #include<iostream>
// using namespace std;

// class Metoo {
//     private:
//     int x;
//     int y;
//     public:
//     Metoo(){
//         x = 9;
//         y = 10;
//         cout << "I am the Default Constructor" << endl;

//     }
//     Metoo(int x,int y){
//         cout << "I am the Parametarized Constructor" << endl;
//         this->x = x;
//         this->y = y;
//     }
//     void display(){
//         cout << "x = " << x << "\n" << "y = " << y << "\n";
//     }
//     ~Metoo(){
//         cout << "It's Done and Dusted " << endl;
//     }
// };

// Metoo m0;
// int main()
// {
//     Metoo m1,m2(3,4);
//     m0.display();
//     m1.display();
//     m2.display();

//     return 0;
// }


// class Shape{
//     protected:
//     int len;
//     int wid;
//     public:
//     Shape(int x,int y) : len(x),wid(y) {}
//     virtual int area(){
//         return len * wid;
//     }
//     virtual void show(){
//         cout << "\n" << len << "\n" << wid << "\n";
//     }
// };

// class Circle : public Shape{
//     int r;
//     public:
//     Circle(int x,int y,int r): Shape(x,y){
//         this->r = r;
//     }
//     void show(){
//         cout << "OOYAHHHHH! " << endl;
//     }
//     int area(){
//         return 2 * 3.14 * r * r; 
//     }
// };

// int main()
// {
//     Circle c1(1,2,3);
//     Shape * ptr = &c1;
//     cout << ptr->area() << "\n";
//     ptr->show();
     
//     return 0;
// }

// Inheritance Practice
// 1. Making a Coffee Shop Management Systeem
// It Should Contain:
// Menu
// Details of customer
// Customers Count
// Bill System
// Total Bill of the customer with the Tax
// Final details of all the coffees sold

// Code:
// #include <iostream>
// using namespace std;

// class Cofee{
//     private:

// };     // Not getting the idea to start it .. . ..  .. .. .. 

// Polymorphism For Quiz
// Simple code to check what actually polymorphism is ....
// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//    virtual void move(){
//         cout << "Animal is moving . " << "\n";
//     }
//     virtual void hello(){
//         cout << "Animal is saying hello . " << "\n";
//     }
// };
// class Fish : public Animal{
//     public:
//     void move(){
//         cout << "I am Fish . " << "\n";
//         cout << "Fish is moving . " << "\n";
//         Animal::move();
//     }
//     void hello(){
//         cout << "Fish is saying hello . " << "\n";
//     }
// };
// class Frog : public Animal{
//     public:
//     void move(){
//         cout << "I am Frog . " << "\n";
//         cout << "Frog is moving . " << "\n";
//     }
//     void hello(){
//         cout << "Frog is saying hello . " << "\n";
//     }
// };

// int main()
// {
//     Fish f1;
// //     Frog f2;
// //     f1.move();
// //     f2.move();

//     // Animal *ptr;
//     // ptr = &f1;
//     // ptr->move();
//     // ptr->hello();

//     return 0;
// }

// Making an abstract class
// #include<iostream>
// using namespace std;

// class Person{
//     public:
//     virtual void show_name() = 0;
// };
// class Man : public Person{
//     public:
//     void show_name(){
//         cout << "My Name is munim" << "\n";
//     }
// };
// class Woman : public Person{
//     public:
//     void show_name(){
//         cout << "My Name is munima" << "\n";
//     }
// };

// int main()
// {
//     Person *ptr,*ptr1;
//     Man m;
//     Woman w;
//     ptr = &m;
//     ptr1 = &w;
//     ptr->show_name();
//     ptr1->show_name();
//     delete ptr;
    
//     return 0;
// }

// Checking for virtual destructor
// #include <iostream>
// using namespace std;

// class Me{
//     public:
//     virtual ~Me(){
//         cout << "Destroyed" << "\n";
//     }
// };

// class He : public Me{
//     public:
//     ~He(){
//         cout << "Hehehhe" << "\n";
//     }
// };

// class She : public Me{
//     public:
//     ~She(){
//         cout << "Meowwww" << "\n";
//     }
// };

// int main()
// {
//     Me *ptr;
//     ptr = new He;
//     delete ptr;
//     return 0;
// }

// gpt code
// #include <iostream>
// using namespace std;

// class Shape {

// protected:
//     int value;

// public:

//     Shape(int v) {
//         value = v;
//     }

//     // Virtual function for polymorphism
//     virtual void area() {
//         cout << "Area of Shape" << endl;
//     }

//     // Friend function
//     friend void showValue(Shape &s);
// };


// // Derived class
// class Square : public Shape {

// public:

//     Square(int v) : Shape(v) {}

//     void area() override {
//         cout << "Area of Square: "
//              << value * value << endl;
//     }
// };


// // Another derived class
// class Circle : public Shape {

// public:

//     Circle(int v) : Shape(v) {}

//     void area() override {
//         cout << "Area of Circle: "
//              << 3.14 * value * value << endl;
//     }
// };


// // Friend function definition
// void showValue(Shape &s) {

//     cout << "Protected value is: "
//          << s.value << endl;
// }


// int main() {

//     Shape *ptr;

//     Square sq(4);
//     Circle c(3);

//     ptr = &sq;
//     ptr->area();

//     ptr = &c;
//     ptr->area();

//     // Friend function call
//     showValue(sq);
//     showValue(c);

//     return 0;
// }

// Writing C code for fun
// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the amount : ");
//     scanf("%d",&a);
//     int i = 0;
//     while(i < a){
//         printf(" . . . \n");
//         i++;
//     }
//     printf("Done");
//     return 0;
// }

