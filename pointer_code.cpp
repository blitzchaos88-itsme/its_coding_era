#include<iostream>
using namespace std;

//  FUNCTION DECLARATION 
void String_Concatenate(char *str1,char *str2);
void Compress_String(char *);
char *Reverse_Sentence(char *);
void Plural_Words(char **s,int wordCount);

//  MAIN FUNCTION
int main()
{
    int choice;
    label:  // USED TO RUN THE PROGRAM IF WRONG CHOICE IS INPUTTED LIKE CHOICE GREATER THAN 5 || 0
    do
    {
        cout<<endl<<"============== TEXT PROCESSING ENGINE =============="<<endl;  
        cout<<"1. Merge two strings "<<endl;
        cout<<"2. Compress a string "<<endl;
        cout<<"3. Reverse a sentence "<<endl;
        cout<<"4. Convert singular words to plural "<<endl;
        cout<<"5. Exit "<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();   // USED TO CLEAR CHARACTER FROM INPUT BUFFER (PROGRAM WAS BECOMING INFINTE WITHOUT IT)
        if(choice>=1 && choice<=5){
            if(choice == 1)
            {
                char str1[50];
                char str2[100];
                cout<<"Enter your first string : ";
                cin.getline(str1,50);    
                
                cout<<"Enter your second string : ";
                cin.getline(str2,100);

                String_Concatenate(str1,str2);  // CALLING THE FUNCTION
                cout<<"After merging the string becomes : "<<str2<<endl;

            }
            else if(choice == 2)
            {
                char arr[100];
                cout<<"Enter the string : ";
                cin.getline(arr,100);

                Compress_String(arr);   // CALLING THE FUNCTION
                cout<<"String after compression : "<<arr<<endl;
            }
            else if(choice == 3)
            {
                char sentence[100];
                cout<<"Enter the sentence you want to reverse : ";
                cin.getline(sentence,100);

                char *reciever_pointer = Reverse_Sentence(sentence);    // CALLING THE FUNCTION 
                cout<<"The sentence after getting reverse becomes : "<<reciever_pointer<<endl;
                delete[] reciever_pointer;
            }
            else if (choice == 4)
            {
                int number_of_words;
                cout<<"Enter the number of words you wanna enter : ";
                cin>>number_of_words;
                cin.ignore(); 
                char **words = new char *[number_of_words];  // ARRAY OF POINTERS CREATED DYNAMICALLY 
                for(int i = 0; i < number_of_words; i++){
                    *(words+i) = new char[100];
                }
                for(int i = 0; i < number_of_words; i++){
                    cin.getline(*(words+i),100);
                }
                Plural_Words(words,number_of_words);     // CALLING THE FUNCTION
                cout<<endl;
                cout<<"Words After Conversion Becomes : "<<endl;
                for(int i = 0; i < number_of_words; i++){
                    cout<<*(words+i);
                    cout<<endl;
                }
                cout<<endl;
                cout<<"Deleting the dynamically created 2D Array "<<endl;
                for(int i = 0; i < number_of_words; i++){
                    delete[] words[i];  // DELETING ALL THE DYNAMICALLY CREATED COLOUMNS 
                }
                delete[] words; // DELETING THE WHOLE ARRAY I CAN SAY DELETING THE ARRAY HAVING THE BASE ADDRESS OF THE ARRAY OF POINTERS
                words = NULL;  // GOOD TO INITIALIZE IT WITH NULL
                cout<<"Successfully reallocated / deleted ";
            }
            
        }
        else
        {
            cout<<"Wrong Choice Inputted. Select the choice from 1 to 5 "<<endl;
            goto label;
        }

    }while(choice != 5);
    cout<<"You Exited From the Text Processing Engine Successfuuly. ";
    return 0;
}

// FUNCTION DEFINATIONS
void String_Concatenate(char *str1, char *str2)
{
    // First method.
    char *save = str2;    // TO STORE THE BASE ADDRESS
    while(*str2 != '\0'){
        str2++;
    }
    while(*str1 != '\0'){
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
    str2 = save;  // AFTER MERGING GOING BACK TO ITS BASE ADDRESS TO PRINT FULL ADDRESS

    // Second method.  (Indexing is used) 
    // int i = 0;
    // int j = 0;
    // char *save_2 = str2;
    // while(str2[i]!='\0')
    // {
    //     i++;
    // }
    // while(str1[j]!='\0')
    // {
    //     str2[i] = str1[j];
    //     i++;
    //     j++;
    // }
    // str2[i]=='\0';
    // str2 = save_2;  
}

void Compress_String(char *arr)
{
    int compress = 0;  // IT IS USED AS A COUNT FOR COMPRESSING STRING
    for(int i = 0; *(arr+i) != '\0'; i++)
    {
        if(*(arr+i) == ' ') continue; 
        for(int j = i+1; *(arr+j)!='\0'; j++)
        {
            if(*(arr+i) == *(arr+j))   // WHENEVER SAME ALPHABET COMES I AM PUTTING ' ' THERE JUST TO KEEP A CHECK AND SAVE THOSE ALPHABETS WHICH ARE LEFTED BEHIND AFTER THE OVERALL COMPLETION OF BOTH LOOPS
            {
                *(arr+j) = ' ';   
            }
        }
    }
    for(int k = 0; *(arr+k) != '\0'; k++)
    {
        if(*(arr+k) != ' ')  // A SIMPLE CHECK FOR ' '
        {
            *(arr + compress) = *(arr+k);  // PUT ONLY THOSE ALPHABETS WHICH APPEARED IN A STRING ONLY FOR ONE TIME
            compress++;
        }
    }
    *(arr+compress) = '\0';  // USED TO TERMINATE THE STRING
}

char *Reverse_Sentence(char *sentence)
{
    char *save_it_2 = sentence;
    int length = 0;
    while(*sentence != '\0')  // LOOP FOR MEASURING LENGTH 
    {
        length++;
        sentence++;
    }
    sentence = save_it_2;  // BRINGING IT ON THE FIRST INDEX 
    char *new_sentence = new char[length+1];  // DYNAMIC ARRAY CREATION OF SAME LENGTH
    char *reversed_sentence = new_sentence;   // NEW POINTER CREATED (NOT USING NEW SENTENCE JUST TO SAVE/HAVE THE BASE ADDRESS)
    char *end_of_word = sentence+length-1;  // THIS POINTER IS POINTING TO THE ADDRESS OF LAST INDEX (NOT THE NULL TERMINATOR ONE)
    while(end_of_word>=sentence)  
    {
        while(end_of_word>=sentence && *end_of_word==' ')
        {
            end_of_word--;    // IF SPACE COMES MOVE ONE INDEX BEHING GO TO THE LAST ALPHABET OF THE WORD
        }
        if(end_of_word < sentence) break;  // IT ALLOWS ME TO NOT ACCESS MEMORY OUTSIDE THE STRING 
        char *start_of_word = end_of_word; // IT HAS THE SAME ALPHABET AS END_OF WORD NOW
        while(start_of_word>sentence && *(start_of_word-1)!=' ') // STOPS WHEN SPACE COMES 
        {
            start_of_word--;
        }
        char *temp = start_of_word; // NOW TEMP WILL HAVE THE STARTING ALPHABET OF THE WORD
        while(temp<=end_of_word)
        {
            *reversed_sentence = *temp;
            reversed_sentence++;
            temp++;
        }
        if(start_of_word>sentence) // TO PUT SPACE IN BETWEEN WORDS
        {
            *reversed_sentence = ' ';
            reversed_sentence++;
        }
        end_of_word = start_of_word - 1; // MOVING END TO OTHER WORD AFTER ONE WORD COMPLETELT STORED IN THE NEW ARRAY 
    }
    *reversed_sentence = '\0';  // NULL TERMINATOR TO END THE STRING
    return new_sentence;
}

void Plural_Words(char **s,int wordCount)
{
    int length = 0;   // TO COUNT THE LENGTH OF EVERY WORD
    for(int i = 0; i < wordCount; i++){
        length = 0;  // FOR EVERY WORD START COUNTING ITS LENGTH FROM 0
        for(int j = 0; *(*(s+i)+j)!='\0'; j++){
            length++;
        }

//====================== ALL THE DEMANDED CONDITIONS ===============================================================================
        if((*(*(s+i)+length-1) == 'h' && (*(*(s+i)+length-2) == 'c' || *(*(s+i)+length-2) == 's')))
        {
            *(*(s+i)+length)   = 'e';
            *(*(s+i)+length+1) = 's';
            *(*(s+i)+length+2) = '\0';
        }
        else if(*(*(s+i)+length-1) == 'x' || (*(*(s+i)+length-2) == 'i' && *(*(s+i)+length-1) == 's'))
        {
            *(*(s+i)+length)   = 'e';
            *(*(s+i)+length+1) = 's';
            *(*(s+i)+length+2) = '\0';
        }
        else if((*(*(s+i)+length-1) == 's' || *(*(s+i)+length-1) == 'z') && (*(*(s+i)+length-2) != 'a' && *(*(s+i)+length-2) != 'e' && *(*(s+i)+length-2) != 'i' && *(*(s+i)+length-2) != 'o' && *(*(s+i)+length-2) != 'u'))
        {
            *(*(s+i)+length)   = 'e';
            *(*(s+i)+length+1) = 's';
            *(*(s+i)+length+2) = '\0';               
        }
        else if(*(*(s+i)+length-3) == 'a' && *(*(s+i)+length-2) == 't' && *(*(s+i)+length-1) == 'o')
        {
            *(*(s+i)+length)   = 'e';
            *(*(s+i)+length+1) = 's';
            *(*(s+i)+length+2) = '\0';             
        }
        else if(*(*(s+i)+length-1) == 'z' && ((*(*(s+i)+length-2) == 'a') || *(*(s+i)+length-2) == 'e'))
        {
            *(*(s+i)+length) = 'z';
            *(*(s+i)+length+1) = 'e';
            *(*(s+i)+length+2) = 's';
            *(*(s+i)+length+3) = '\0';
        }
        else if(*(*(s+i)+length-1) == 's' && ((*(*(s+i)+length-2) == 'a') || *(*(s+i)+length-2) == 'e'))
        {
            *(*(s+i)+length) = 's';
            *(*(s+i)+length+1) = 'e';
            *(*(s+i)+length+2) = 's';
            *(*(s+i)+length+3) = '\0';
        }
        else if(*(*(s+i)+length-1) == 'f' && *(*(s+i)+length-2) == 'f')
        {
            *(*(s+i)+length) = 's';
            *(*(s+i)+length+1) = '\0';
        }
        else if(*(*(s+i)+length-1) == 'f' || (*(*(s+i)+length-2) == 'f' && *(*(s+i)+length-1) == 'e'))
        {
            if(*(*(s+i)+length-1) =='f' && *(*(s+i)+length) == '\0')
            {
                *(*(s+i)+length-1) = 'v';
                *(*(s+i)+length) = 'e';
                *(*(s+i)+length+1) = 's';
                *(*(s+i)+length+2) = '\0';
            }
            else 
            {
                *(*(s+i)+length-2) = 'v';
                *(*(s+i)+length-1) = 'e';
                *(*(s+i)+length) = 's';
                *(*(s+i)+length+1) = '\0';
            }
        }
        else if(*(*(s+i)+length-2) == 'o' && *(*(s+i)+length-1) == 'n')
        {
            *(*(s+i)+length-2) = 'a';
            *(*(s+i)+length-1) = '\0';
        }
        else if(*(*(s+i)+length-2) == 'u' && *(*(s+i)+length-1) == 's')
        {
            *(*(s+i)+length-2) = 'i';
            *(*(s+i)+length-1) = '\0';
        }
        else if(*(*(s+i)+length-1) == 'y')
        {
            if(*(*(s+i)+length-2) == 'a' || *(*(s+i)+length-2) == 'e' || *(*(s+i)+length-2) == 'i' || *(*(s+i)+length-2) == 'o' || *(*(s+i)+length-2) == 'u')
            {
                *(*(s+i)+length) = 's';
                *(*(s+i)+length+1) = '\0';
            }
            else 
            {
                *(*(s+i)+length-1) = 'i';
                *(*(s+i)+length) = 'e';
                *(*(s+i)+length+1) = 's';
            }
        }
        else
        {
            *(*(s+i)+length) = 's';
            *(*(s+i)+length+1) = '\0';
        }
    }
}
