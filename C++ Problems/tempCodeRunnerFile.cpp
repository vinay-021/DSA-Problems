/* #include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        /* code */
       /* cout<<i<<" ";
        i++;
    }
    
    return 0;
}*/

//#include<iostream>
//using namespace std;
/*
void func(int a) {
    cout << a;
}
*/
/*int main() {
    //func(2.5);
    int x=printf("GATE Wallah 2023");
    if (x%4==0)
    {
        x=x+5;
    }
    else
        x=x-5;

    printf("%d",x++);
    
    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;  // Input number of lines
    cin.ignore();  // Ignore the newline character left by 'cin'

    string lines[n];  // Declare an array of strings to store 'n' strings

    cout << "Enter " << n << " lines of text:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, lines[i]);  // Store each line in the array
    }

    // Output the entered strings
    cout << "\nYou entered:" << endl;
    for (int i = 0; i < n; i++) {
        cout << lines[i] << endl;
    }

    return 0;
}
