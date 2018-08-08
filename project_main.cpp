#include<iostream>
#include<string.h>
#include<fstream>
#include <iomanip>
#include<string>
using std::setw;
using namespace std;
struct date{
int day;
int month;
int year;};


int main()
{

     //      long int date[20];
           char noi[50];

            char heading[50];
            string body[500];
            char name[50];
            char designation[50];
            string temp1=" This is to inform you ";
            string temp2=" Through this notice I/We want to draw your attention towards ";
            string temp3=" All the members are informed ";
            int ch,temp;



    fstream outline;
    outline.open("file1.txt",ios::out);
if(!outline.is_open())
{
    cout<<"Some error while printing your Notice";

}
else

        cout<<"\t\t\t**!NOTICE!**"<<endl;
        cout<<"\tWe are ready to get your notice printed!";
        cout<<" (Do as Directed)"<<endl;


         cout<<"Enter name of institute"<<endl;
cin>>noi;


                outline<<"\t\t\t";
                outline.write(noi,strlen(noi));
                outline<<endl;

                    cout<<"Date: (DD MM YYYY)"<<endl;
date d1;
                cin>>d1.day>>d1.month>>d1.year;
                outline<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<endl;

                outline<<"\t\t\tNotice"<<endl;

                    cout<<"Enter the heading for notice"<<endl;
                    cout<<"(**Keep it short**)"<<endl;
                    cin>>heading;
                    //getline(cin,heading[50]);
                    outline<<"\t\t\t";
                    outline.write(heading,strlen(heading));
                    outline<<endl;
if(outline.bad())
cout<<"Error";

                    cout<<"Enter the body of letter"<<endl;
                    cout<<"Want to select template (enter 0 otherwise press any other numeric key) "<<endl;
                    cin>>temp;

                    if (temp==0)
                    {
                        cout<<"Available Templates"<<endl;
                        cout<<temp1<<endl<<temp2<<endl<<temp3<<endl<<"To select any of these enter 1,2,3 respectively or press any other numeral key"<<endl;
                        cin>>ch;
                        switch(ch)
                        {
                        case 1:
                            {
                            cout<<"Body: \n"<<temp1;

                            outline<<temp1;
                            break;
                            }
                        case 2:
                            {
                            cout<<"Body: \n"<<temp2;

                            outline<<temp2;
                            break;
                            }
                        case 3:
                            {
                            cout<<"Body: \n"<<temp3;

                            outline<<temp3;
                            break;
                            }
                        default:
                            {
                            cout<<"No template chosen";
                            cout<<"Body:"<<endl;

                            }
                        }
                    }
                    else {
                        cout<<"Thank You"<<endl<<"Body:"<<endl;

                    }

                    cin>>body[90];
                    outline<<body[90]<<endl;

                cout<<"Enter your Name:"<<endl;
                cin>>name;
//                getline(cin,name[50]);
                outline.write(name,strlen(name));

                cout<<"Enter your Designation:"<<endl;

                outline<<endl<<"(";
                cin>>designation;
                outline.write(designation,strlen(designation));
                outline<<")";


            outline.close();

     }

