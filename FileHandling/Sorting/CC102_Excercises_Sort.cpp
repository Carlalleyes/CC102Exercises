#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    fstream OrigText;
    OrigText.open("original.txt",ios::out);
    if(OrigText.is_open())
    {
        OrigText<<"One"<<endl;
        OrigText<<"Two"<<endl;
        OrigText<<"Three"<<endl;
        OrigText<<"Four"<<endl;
        OrigText<<"Five"<<endl;
        OrigText<<"Six"<<endl;
    }
    else
    {
        cout<<"File not Found";
    }
    OrigText.close();


    OrigText.open("original.txt",ios::in);
    fstream SortedFile;
    SortedFile.open("sorted.txt", ios::out);
    vector<string> Numbers;
    string nums;
    if(OrigText.is_open()&&SortedFile.is_open())
    {
        while(getline(OrigText,nums))
        {
            Numbers.push_back(nums);
        }
            sort(Numbers.begin(), Numbers.end());
            for(int i=0;i<Numbers.size();i++)
            {
            SortedFile<<Numbers[i]<<endl;
            }
    }
    else
    {
        cout<<"Files not Found";
    }
    OrigText.close();
    SortedFile.close();

return 0;
}
