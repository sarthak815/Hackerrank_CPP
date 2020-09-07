#include <iostream>
#include <sstream>
#include<string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
    int age, standard;
    string first_name, last_name,full_text,age1,standard1;
    stringstream ss,ss1;
    public:
    void set_age(int a){
        age = a;
    }
    void set_standard(int b){
        standard = b;
    }
    void set_first_name(string c){
        first_name = c;
    }
    void set_last_name(string d){
        last_name = d;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    string to_string(){
        ss<<age;
        ss>>age1;
        ss1<<standard;
        ss1>>standard1;
        full_text=age1+","+first_name+","+last_name+","+standard1;
        return full_text;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
