#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

int main() {
    int n1 = 9876;
    double n2 = 0.0000000000000000000001;
    double n3 = 2.000000000000123;

    string num_str1(std::to_string(n1));
    string num_str2(std::to_string(n2));
    string num_str3(std::to_string(n3));

    num_str1.empty() ? cout << "empty\n" : cout << num_str1 << endl;
    num_str1.empty() ? cout << "empty\n" : cout << num_str2 << endl;
    num_str1.empty() ? cout << "empty\n" : cout << num_str3 << endl;

    return EXIT_SUCCESS;
}
