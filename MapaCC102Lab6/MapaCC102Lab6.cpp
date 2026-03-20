//Mapa, Carl Marcel 0.
//BSCS - 1B

#include <iostream>
#include <cstdlib>
using namespace std;

struct students{
    int studentID;
    string name;
    string course;
    double gpa;
    
};

void input(int num, students s[]){
    system("cls");
    int j;
    bool status = true;

    for(int i = 0; i < num; i++){  
        do{
            system("cls");
            cout << "Student #"<<i+1<<endl;
            cout << "Input Student ID: ";
            cin >> s[i].studentID;
            cin.ignore();
                for(j=-1; j<i;j++){
                    if(s[j].studentID == s[i].studentID){
                        cout << "Student already exist!\n";
                        system("pause");
                        system("cls");
                        status = true;
                    }
                    else{
                        status = false;
                    }
            }
        }while(status == true);
        
        cout << "Input Name: ";
        getline(cin, s[i].name);
        cout << "Input Course: ";
        getline(cin, s[i].course);

        do{
            cout << "Input GPA: ";
            cin >> s[i].gpa;
            cin.ignore();
                    if (s[i].gpa < 0 || s[i].gpa > 100){
                        cout << "Invalid!: 0 to 100 only!";
                        system("pause");
                        system("cls"); 
                    }
        }while(s[i].gpa < 0 || s[i].gpa > 100);
            cout << endl;
    }
}

void display(int num, students s[]){
    cout << "StudentID\tName\t\tCourse\t\tGPA\t\tStanding\n";
    cout << "==========================================================================\n";
    for(int i = 0; i < num; i++){
        cout << s[i].studentID << "\t\t";
        cout << s[i].name << "\t\t";
        cout << s[i].course  << "\t\t";
        cout << s[i].gpa << "\t\t";
        

    if(s[i].gpa >= 90 && s[i].gpa <= 100){
        cout << "Excellent\n";
    }
    else if(s[i].gpa >= 80){
        cout << "Very Good\n";
    }
    else if(s[i].gpa >= 70){
        cout << "Good\n";
    }
    else if(s[i].gpa >= 60){
        cout << "Passing\n";
    }
    else if(s[i].gpa <= 59){
        cout << "Failed\n";
    }
    cout << endl;  
}
    cout << "==========================================================================\n";
}

int main () {
    char choice;

    do{
        int num;
        system("cls");
        
        cout << "How many students: ";
        cin >> num;
        cin.ignore();

        students s[num];

        input(num, s);
        display (num, s);

        cout << "Try again?[y/n]: ";
        cin >> choice;

    }while (toupper(choice) == 'Y');

}