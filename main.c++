// Project 1: Programs Collection
// Contains: Factorial, Fibonacci, and Structure-to-Dictionary (struct -> map) conversion.
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

// Factorial (valid for 0..20 so it fits in unsigned long long)
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) result *= i;
    return result;
}

// Fibonacci: returns the first `count` numbers
vector<unsigned long long> fibonacci(int count) {
    vector<unsigned long long> seq;
    unsigned long long a = 0, b = 1;
    for (int i = 0; i < count; i++) {
        seq.push_back(a);
        unsigned long long next = a + b;
        a = b;
        b = next;
    }
    return seq;
}

// Structure-to-Dictionary: convert a struct into a map of key/value strings
struct Student {
    string name;
    int age;
    string course;
};

map<string, string> structToMap(const Student& s) {
    map<string, string> dict;
    dict["name"] = s.name;
    dict["age"] = to_string(s.age);
    dict["course"] = s.course;
    return dict;
}

int main() {
    int n;
    cout << "Enter a number (0-20) for factorial: ";
    if (!(cin >> n) || n < 0 || n > 20) {
        cout << "Please enter a whole number between 0 and 20.\n";
        return 1;
    }
    cout << n << "! = " << factorial(n) << "\n\n";

    int count;
    cout << "How many Fibonacci numbers (1-50)? ";
    if (!(cin >> count) || count < 1 || count > 50) {
        cout << "Please enter a whole number between 1 and 50.\n";
        return 1;
    }
    for (unsigned long long f : fibonacci(count)) cout << f << " ";
    cout << "\n\n";

    Student s = {"Prathvi Singh", 20, "Computer Science"};
    cout << "Struct converted to dictionary (map):\n";
    for (const auto& pair : structToMap(s))
        cout << "  " << pair.first << ": " << pair.second << "\n";
    return 0;
}
