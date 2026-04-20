#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    fstream FileColor;
    FileColor.open("color.txt",ios::out);
    if(FileColor.is_open())
    {
        FileColor << "Red"<<endl;
        FileColor << "White"<<endl;
        FileColor << "Black"<<endl;
        FileColor << "Violet"<<endl;
        FileColor << "Indigo"<<endl;
    }
    else
    {
        cout<<"File not found";
    }
    FileColor.close();

    FileColor.open("color.txt",ios::in);
    fstream CopyFile;
        CopyFile.open("color_copy.txt", ios::out);

            if(FileColor.is_open() && CopyFile.is_open())
            {
                string colors;
                while(getline(FileColor,colors))
                {
                CopyFile <<colors<<endl;
                }
            }
            else
            {
                cout<<"Files not found";
            }
        FileColor.close();
    FileColor.close();

return 0;
}