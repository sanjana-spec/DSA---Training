#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string Name;
    int Age;
    Person(string name, int age){
        Name = name;
        age = age;
    }
};
int main(){
    vector<Person> people;
   // people.push_back("Ashsnk", 28); // we need to give the data type people.push_back(Person("Ashsnk", 28));
    people.emplace_back("Anup", 29); // creates an in place object
    for(auto p : people){
        cout << p.Name << " is" <<  p.Age << "years old " << endl;
    }cout << endl;
    return 0;
}