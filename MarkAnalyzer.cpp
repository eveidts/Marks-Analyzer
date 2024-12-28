#include <iostream>

using namespace std;

int main (){
    string subject[5]{"English","Maths","Science","Art", "C++"};
    int marks[5];
    int input;
    int mark=0;
    int mark1 =100;
    float avrage=0;
    string sub;
    string sub1;
     
    cout << "This program helps manage and analyze marks" << endl;
    cout << "1.Enter the program" << endl;
    cout << "2.Exit" << endl;
    cout << "Choose: " ;
    cin >> input;
    if (input==1){

        for(int i=0 ; i<5 ; i++){
       cout << "Enter the marks for " << subject[i] << endl;
        cin >> marks[i];
        }

    while (input ==1){
       cout << "1.Total marks" << endl;
       cout << "2.Avarage marks" << endl;
       cout << "3.The highest and lowest marks" << endl;
       cout << "4.exit" << endl;
       cout << "Choose: " ;
       int temp;
       cin >> temp;
       switch(temp){
        case 1:
        for (int i=0 ; i<5 ; i++){
            mark += marks[i];
        }
        cout << "Total marks : " << mark << endl; 
        mark=0;
        break;
        case 2:
        for (int i=0 ; i<5 ; i++){
            mark += marks[i];
            avrage = mark/5;
            
        }
        cout << "Avarage marks : " << avrage << endl; 
        mark=0;
        avrage=0;
        break;
        case 3:
        for (int i=0 ; i<5 ; i++){
            if(marks[i]> mark){
                mark = marks[i];
                sub = subject[i];
                
            }
        }
        for (int i=0; i<5; i++){
             if (mark1 > marks[i]){
                mark1 = marks[i];
                sub1 = subject[i];
            }
        }
        cout << "Highest marks is " << mark << " of " << sub << " lowest marks is " << mark1 << " of " << sub1 << endl; 
        mark1=100;
        mark=0;
        break;
        case 4:
        input = 2;
        break;
        default :
        cout << "wrong input please try again" << endl;
       }


    }
    }
   else if (input == 2){
        cout << "Exiting the program...." << endl;
        return 0;
    }
    else{
        cout << "wrong input please try again"<< endl;
    }
    return 0;
}