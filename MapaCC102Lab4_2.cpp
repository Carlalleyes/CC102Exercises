#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

        char ans,choice;
    do{ //do loop for retrying
        system("cls");
        int SalespersonNumber,ProductNumber;
        double Amount=0,TotalEach=0,TotalEachCollumn=0,TotalAll=0;

        double Sales[5][4] ={{0.00,0.00,0.00,0.00},  //The 2d array
                             {0.00,0.00,0.00,0.00},
                             {0.00,0.00,0.00,0.00},
                             {0.00,0.00,0.00,0.00},
                             {0.00,0.00,0.00,0.00}};

        do{ //do loop for adding more inputs
                do{ //do loop for invalid input
                    system("cls");
                    cout<<"\n\nEnter Salesperson Number(1-4): ";    //Inputs information
                    cin>>SalespersonNumber;
                    cout<<"Enter Product Number(1-5): ";
                    cin>>ProductNumber;
                    cout<<"Enter Amount Sold: ";
                    cin>>Amount;

                    //If statement to check if the inputs are valid
                    if(SalespersonNumber>4 || SalespersonNumber<1 || ProductNumber>5 || ProductNumber<1){
                        cout<<"\n\nInvalid Input\n\n"<<endl;
                        system("pause");
                    }
                    
                }while(SalespersonNumber>4 || SalespersonNumber<1 || ProductNumber>5 || ProductNumber<1);

            Sales[ProductNumber-1][SalespersonNumber-1] += Amount; //adding the elements with the same position in the array

            cout<<"\nAdd More?[Y/N]: ";
            cin>>choice;

        }while(tolower(choice)=='y');

        //This is where the table starts to proccess
        system("cls");
        cout<<"\n\n\t\t      Salesperson"<<endl; 
        cout<<"\nProduct \t1\t2\t3\t4\tTotal";
        cout<<"\n-------------------------------------------------------";

        for(int i=0;i<5;i++){           //for loop for product and salesperson display
            cout<<"\n   #"<<i+1<<"\t";
            for(int j=0;j<4;j++){
                if(Sales[i][j]==0.00){
                cout<<" \t0.00";
                }
                else{
                cout<<" \t"<<Sales[i][j];
                }
            }
                for(int y=0;y<4;y++){
                    TotalEach=TotalEach+Sales[i][y];    //for loop for total on the vertical right
                }

            if(TotalEach==0){
                cout<<" \t0.00";        //if the element value is 0 then it will display 0.00 the same as the example
                }
            else{
                cout<<" \t"<<TotalEach;     //display the total on the vertical right side
            }
            TotalAll = TotalAll+TotalEach; 
            TotalEach=0;
        }
        cout<<"\n-------------------------------------------------------"<<endl;
        cout<<"Total  ";    
        
        for(int i=0;i<4;i++){
            for(int j=0;j<5;j++){
                TotalEachCollumn = TotalEachCollumn + Sales[j][i];  //for the total on the horizontal bottom 
            }
            cout<<" \t"<<TotalEachCollumn;
            TotalEachCollumn = 0;
        }
        cout<<" \t"<<TotalAll;

        
        cout<<"\n\nRetry[Y/N]: "; //retry feature
        cin>>ans;
    }while(tolower(ans)=='y');

return 0;    
}