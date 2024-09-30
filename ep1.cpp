#include<iostream>
using namespace std;
int num_input();
int grade(int perc);
int main()
{
    int percen=num_input();
    grade(percen);
    return 0;
}
int num_input()
{
    int subjects,i,sum=0,percentage;
    cout<<"Enter number of subjets:";
    cin>>subjects;
    int marks[subjects];
    for(i=0;i<subjects;i++)
    {
        cout<<"Enter marks:";
        cin>>marks[i];
        sum=sum+marks[i];
    }
    percentage=sum/subjects; 
    cout<<"Total="<<sum<<"\nPercentage="<<percentage<<endl;
    return (percentage);
}
int grade(int perc)
{
    if(perc>=90)
    {
        cout<<"Grade A";
    }
    else if(perc>=80)
    {
        cout<<"Grade B";
    }
    else if(perc>=70)
    {
        cout<<"Grade C";
    }
    else if(perc>=60)
    {
        cout<<"Grade D";
    }
    else 
    {
        cout<<"Grade F";
    }
}

