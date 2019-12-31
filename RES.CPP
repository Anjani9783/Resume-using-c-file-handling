#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
int main()
{
fstream file;
file.open("resume.txt",ios::out);
if(!file)
{cout<<"error in creating file!!!";
return 0;
}
cout<<"file created succesfully";
file<<"======================================================================"<<endl;
file<<"                         MY RESUME                                    "<<endl;
file<<"======================================================================"<<endl;
file<<"Anjani Kumar Agrawal"<<endl;
file<<"anjaniagrawal9783@gmail.com"<<endl;
file<<"DOB:- 26-04-1999"<<endl;
file<<"Add:- BIjuri,Distt-Anuppur(M.P.)"<<endl;
file<<"Contt. No.:- +919783049783"<<endl<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"CAREER OBJECTIVE"<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"I intend to be a part of an organization where I can consistently \nlearn and develop my technical and management skills and make best\nuse of it for the growth of the organization. I look forward to\nestablishing myself by adapting new technologies as well"<<endl<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"EDUCATION"<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<setw(7)<<"Sl. no."<<setw(15)<<"Qualifications"<<setw(30)<<"Institute"<<setw(7)<<"Score"<<setw(6)<<"Year"<<endl;
file<<setw(7)<<"1."<<setw(15)<<"10th"<<setw(30)<<"St. Joseph's Mission School"<<setw(7)<<"78"<<setw(6)<<"2015"<<endl;
file<<setw(7)<<"2."<<setw(15)<<"12th"<<setw(30)<<"St. Joseph's Mission School"<<setw(7)<<"65"<<setw(6)<<"2018"<<endl;
file<<"----------------------------------------------------------------------"<<endl<<endl;
file<<"SKILLS"<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"Programming languages:- C,Cpp, HTML, CSS"<<endl;
file<<"Tools:- MS Office, MS Excel, "<<endl<<endl;
file<<"SOCIAL PROFILES"<<endl;
file<<"----------------------------------------------------------------------"<<endl;
file<<"Github- github.com/Anjani9783"<<endl;
file<<"Linkedin - in.linkedin.com"<<endl;
file<<"Facebook - Facebook.com"<<endl;
file.close();
getch();
return 0;
}