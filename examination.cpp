#include <iostream>
//#include　
//#include "mytime.h"

using namespace std;

class Student{
        private:
            string name;
            int age;
            int num;
            double score[4];
        public:
            Student();
            Student(string stuname, int stuage, int stunum, double *stu);
            double caculate();
            void show();
    };
    Student::Student(){
        cin>>name>>age>>num>>score[0]>>score[1]>>score[2]>>score[3];
        show();
        //cin>>age;
    }
    /*Student::Student(string stuname, int stuage, int stunum, double *stu){
        name = stuname;
        age = stuage;
        num = stunum;
        for(int i= 0; i < 4; ++ i) score[i] = stu[i];
        show();
    }*/
    double Student::caculate(){
        double sum=0;
        for(int i = 0; i < 4; ++ i) sum += score[i];
        return sum/=4;
    }
    void Student::show(){
        cout<<name<<","<<age<<","<<num<<","<<caculate()<<endl;
    }

int main()
{
    /*
    *
    *Time class
    *
    */
    /*

    Time t1(2, 55), t2(3, 25);
    t1.Show(); t2.Show();
    t1+=t2;
    t1.Show();
    Time t3=Time(5,8), t4(5, 53);
    t3.Show(); t4.Show();
    (t3+t4+t1+t2).Show();
    (3*t1).Show();
    cout<<t1;*/
   //TableTennisPlayer t1("HJS", "FSF", 0);
    /*
    1

    cout << "*";
    for(int i = 1; i < 10; ++ i) cout <<"\t"<<i; cout<<endl;
    for(int i = 1; i < 10; ++ i){
        cout <<i;
        for(int j = 1; j  < 10; ++ j)
            cout <<"\t"<<i*j;
        cout <<endl;
    }
    cout.unsetf(ios::left);
    */

    /*
    2
    long a(1), b(1), c, n;
    cin>>n;
    if(n < 3){
        cout <<1<<endl;
    }
    else{
        for(int i = 2; i < n; ++ i){
            c = a+b;

            a = b; b = c;
        }
        cout << " "<<c<<endl;
    }
    */
    /*
    3

    Student s1;*/
    /*4
    int s[16][16]={1, 0};
    for(int i = 1; i <=15; ++ i){
        for(int j = 1; j <= i; ++ j){
            s[i][j] = s[i-1][j-1]+s[i-1][j];
            cout.width(5);
            cout.fill(' ');
            cout << s[i][j];
        }
        cout<<endl;
    }*/
    return 0;
}
/*5

class Crectangle{
    private:
        int width, height;
    public:
        Crectangle(int w = 0, int h = 0);
        int area();
        int perimeter();
}

Crectangle::Crectangle(int w, int h){
    width = w;
    height = h;
}

int Crectangle::area(){
    return width*height;
}
int Crectangle:perimeter(){
    return 2*(width+height);
}
*/
