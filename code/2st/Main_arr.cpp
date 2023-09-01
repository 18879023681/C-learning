// #include <iostream>

// using namespace std;
// int main()
// {
//     int arr[10];

//     for (int i = 0; i < 10; i++)
//     {
//         /* code */
//         arr[i] = i + 100;
//     }
    
//     for (int i = 0; i < 10; i++)
//     {
//         /* code */
//         cout << arr[i] << " ";
//         cout << endl;
//     }
    
//     return 0;
// }
#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

int main()
{
    int n[10];

    for (int i = 0; i < 10; i++)
    {
        /* code */
        n[i] = i + 100;
    }
    cout << "Elemnet" << setw(13) << "Value" << endl; 

    for (int j = 0; j < 10; j++)
    {
        /* code */
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    
    int arr[10] = {0, 1, 2, 3, 4};

    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
    return 0;   
}