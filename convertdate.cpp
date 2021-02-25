#include <bits/stdc++.h>
using namespace std;

struct Date {
    int d,m,y;
    Date(int a, int b, int c) {
        d=a,m=b,y=c;
    }
};
const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

//This date finding code is from GeeksForGeeks: https://www.geeksforgeeks.org find-number-of-days-between-two-given-dates/
int leapyears(Date d) {
    int years=d.y;

    if (d.m<=2) years--;

    return years/4-years/100+years/400;
}

int datedifference(Date dt1, Date dt2) {

}

Date basedate=Date(1,1,2005);

void setIO(string name) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((name).c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
}



int main() {
    setIO()
}