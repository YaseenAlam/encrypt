#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void random() {
    int max;
    max = 100; //set the upper bound to generate the random number
    srand(time(0));
    for (int i = 65; i < 91; i++) { //generate 10 random numbers
        cout << "The random number is: " << rand() % max << endl;
    }
}
//int arr[] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, };
