#include<iostream>
using namespace std;

class Vector{
    protected:
    int *array;
    int size,capacity;

    public:
    Vector(){
        size = 0;
        capacity = 1;
        array = new int[capacity];
    }

    void resize(){
        capacity *= 2;
        int *new_array = new int[capacity];
        for(int i = 0; i < size; i++){
            new_array[i] = array[i];
        }
        delete[] array;
        array = new_array;
    }   

    void push_back(int value){
        if(size == capacity){
            resize();
        }
        array[size++] = value;
    }

    int get(int i){
        i--;
        if(i > size){
            return 0;
        }
        return array[i];
    }

    int find_len(){
        return size;
    }

    void display(){
        cout << "Printing vector : ";
        for(int i = 0; i < size; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }

    ~Vector(){
        delete[] array;
    }
    
};

class UniqueVector : public Vector{
    public:
    void push_back(int value){
        int check = 1;
        for(int i = 0; i < size; i++){
            if(value == array[i]){
                check = 0;
                break;
            }
        }
        if(check == 1){
            if(size == capacity){
                resize();
            }
            array[size++] = value;
        }
    }

    void display(){
        cout << "Printing unique vector : ";
        for(int i = 0; i < size; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }

};

class FrequencyVector : public Vector{
    private:
    int *frequency;

    public:
    FrequencyVector(){
        size = 0;
        capacity = 1;
        frequency = new int[capacity];
        for(int i = 0; i < capacity; i++){
            frequency[i] = 0;
        }
    }

    void resize(){
        capacity *= 2;
        int *new_array = new int[capacity];
        int *new_frequency = new int[capacity];
        for(int i = 0; i < size; i++){
            new_array[i] = array[i];
            new_frequency[i] = frequency[i];
        }

        delete[] array;
        delete[] frequency;
        array = new_array;
        frequency = new_frequency;
    }

    void push_back(int value){
        int check = 1;
        for(int i = 0; i < size; i++){
            if(value == array[i]){
                frequency[i]++;
                check = 0;
                break;
            }
        }
        if(check == 1){
            if(size == capacity){
                resize();
            }
            array[size] = value;
            frequency[size] = 1;
            size++;
        }
    }

    int getfreq(int value){
        for(int i = 0; i < size; i++){
            if(array[i] == value){
                return frequency[i];
            }
        }
        return 0;
    }

    void display(){
        cout << "Printing the frequency vector : ";
        for(int i = 0; i < size; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }

    ~FrequencyVector(){
        delete[] frequency;
    }
};


int main(){
    int x;
    cin >> x;
    Vector v1;
    for(int i = 0; i < x; i++){
        int num;
        cin >> num;
        v1.push_back(num);
    }

    int s;
    cin >> s;
    UniqueVector v2;
    for(int i = 0; i < s; i++){
        int num;
        cin >> num;
        v2.push_back(num);
    }

    int f;
    cin >> f;
    FrequencyVector v3;
    for(int i = 0; i < f; i++){
        int num;
        cin >> num;
        v3.push_back(num);
    }

    int D,E,F;
    cin >> D >> E >> F;

    v1.display();
    v2.display();
    v3.display();
    cout << v3.getfreq(D) << " " << v3.getfreq(E) << " " << v3.getfreq(F);

    return 0;
}