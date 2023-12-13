#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int Select_people[24];
    int temp;

    int num;
    
    // Selecting 24 people
    for(int i=0; i<24; i++)
    {
        num = rand() % 60;

        // Checking duplication
        for(int j=0; j<i; j++){
            if(num == Select_people[j])
            {
                j = 0;
                num = rand() % 60;
            } 
        }
        Select_people[i] = num;
    }

    // Sorting array of people
    for(int j=0; j<24; j++)
        for(int i=0; i<24-1; i++)
            if(Select_people[i] > Select_people[i+1])
            {
                temp = Select_people[i];
                Select_people[i] = Select_people[i+1];
                Select_people[i+1] = temp;
            }

    // Displaying 24 people 
    cout << "Final Selected Candidate are:" << endl << endl;
    for(int i=0; i<24; i++)
        cout << "Person " << i+1 << " = " << Select_people[i] << endl;

    return 0;
}
