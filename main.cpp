#include <iostream>

using namespace std;

int main()
{
    int age,sat,inter;
    string activities;
    string letter;
    cout<<"Enter age";
    cin>>age;
    cout<<"enter SAT score";
    cin>>sat;
    cout<<"Enter intermediate percentage";
    cin>>inter;
    cout<<"Do you have a letter of recommendation";
    cin>>letter;
    cout<<"have extracurricular activities";
    cin>>activities;

    if(age>=17 && age<=25){
            cout<<"age is valid";



        if(sat>1400){
            if(activities=="yes"){
                cout<<"award Full scholarship";
            }
                else{
                   cout<<"award merit scholarship";
                }


        }

   else if(sat>=1000 && sat<=1400){
        if(inter>=80){
            cout<<"offer Partial Scholarship with Conditional Admission";
        }
        else if(inter<80){
            cout<<"offer Condition al Admission only";
        }



        }
       else if(sat<1000){
            if(letter=="yes"){
                cout<<"waiting";
            }
            else{
                cout<<"reject";
            }
        }
    }


    else {
        cout<<"age is not valid";
        }




    return 0;
    }
