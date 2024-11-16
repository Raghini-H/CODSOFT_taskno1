#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0)); 
    int target=rand() % 100 + 1; 
    int guess;
    cout<<"Guess the number (between 1 and 100): ";
    while (true){
        cin>>guess;
        if (guess<target) 
        {
            cout<<"Too low! Try again: ";
        } 
        else if (guess>target)
        {
            cout<<"Too high! Try again: ";
        } 
        else
        {
            cout<<"Congratulations! You guessed the number!"<<endl;
            break;
        }
    }
    return 0;
}
