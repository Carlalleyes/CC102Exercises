#include <iostream>
#include <cstdlib>
using namespace std;

void Details(int *Data, int NStu, int NSub);

int main(){
    char ans;
do{
    system("cls");
    int NumStudents, NumSubjects,Grades;
    
    cout<<"Enter Number of Students: ";
    cin>>NumStudents;
    cout<<"Enter Number of Subjects: ";
    cin>>NumSubjects;

    int Data[NumStudents][NumSubjects];

    for(int i=0;i<NumStudents;i++){
        cout<<"Student #"<<i+1<<"\n";
        for(int j=0;j<NumSubjects;j++){
            cout<<"Enter Subject #"<<j+1<<" Grade: ";
            cin>>Grades;
            Data[i][j] = Grades;
        }
        cout<<endl;
    }

    Details(&Data[0][0], NumStudents, NumSubjects);

    cout<<"\n\nTry Again[Y/N]: ";
    cin>>ans;

}while(toupper(ans)=='Y');
    return 0;
}

void Details(int *Data, int NStu, int NSub){
    float highestAvg = 0;

    cout << "\nGrade Matrix:\n";

    for(int i = 0; i < NStu; i++){
        float sum = 0;
        cout<<"Student #"<<i+1<<"\t| ";
        for(int j = 0; j < NSub; j++){
            int value = *(Data + i * NSub + j);
            cout << value << "\t";
            sum += value;
        }

        float avg = sum / NSub;
        cout << "| Average = " << avg << endl;

        if(i == 0 || avg > highestAvg){
            highestAvg = avg;
        }
    }

    cout << "\nHighest Grade: " << highestAvg;
}