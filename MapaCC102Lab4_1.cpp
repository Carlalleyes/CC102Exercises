#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    char ans;

    do{
    system("cls");
    int NumOfStudent,NumOfQuiz;
    double Ave=0.0,Score=0.0,Total=0.0,QS=0; //Restores everything when retrying

        //Asks the user for input
        cout<<"\nEnter Number of Student: ";
        cin>>NumOfStudent;
        cout<<"Enter Number of Quiz: ";
        cin>>NumOfQuiz;
        cout<<"\n";

    int QuizScores[NumOfStudent][NumOfQuiz];  //The 2d Array

        //For loop for putting the Quiz Scores
            for(int j=0;j<NumOfStudent;j++){
                cout<<"Student #"<<j+1<<endl;
                for(int i=0; i<NumOfQuiz;i++){
                    cout<<"Quiz #"<<i+1<<" Score: ";
                    cin>>Score;
                    QuizScores[j][i] = Score;
                }
                cout<<"\n";
            }

                cout<<"\nStudent";
                for(int i=0;i<NumOfQuiz;i++){ //for loop to increase the Q number
                    cout<<"\t\tQ"<<i+1;
                }
                cout<<"\t     Average\n";

                for(int i=-1;i<NumOfQuiz;i++){
                    cout<<"--------------------"; //for loop for adjusting the line depending on the number of quiz
                }

            for(int j=0;j<NumOfStudent;j++){ //Displays and Calculates The Total and Averae Scores
                Ave=0;
                Total=0;
                cout<<"\n  #"<<j+1<<" ";
                    for(int i=0; i<NumOfQuiz; i++){
                    cout<<"\t\t"<<QuizScores[j][i];
                    QS = QuizScores[j][i];
                    Total = Total + QS;
                    }
                    Ave=Total/NumOfQuiz;
                    cout<<"\t\t"<<Ave;
            }

            cout<<"\n\n\nRetry[Y/N]? ";    //Retry Feature
            cin>>ans;
            }while(tolower(ans)=='y');

    return 0;
}