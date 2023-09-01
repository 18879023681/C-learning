#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting_2[] = "World";

    cout << "Greeting message: " << greeting <<endl;
    cout << "Greeting_2 message: " << greeting_2 <<endl;

    cout << strcpy(greeting, greeting_2) << endl;
    cout << strcat(greeting, greeting_2) << endl;
    cout << strlen(greeting) << endl;

    return 0;
}