#include <iostream>
using namespace std;

int hms_to_sec(int hr, int min, int sec)
{
    int ts;
    ts = (hr * 3600) + (min * 60) + sec;
    return ts;
}

int main()
{
    int hr, min, sec, tot_sec;
    

    cout<< "enter hours:" << endl;
    cin>> hr;

    cout << "enter minutes:" << endl;
    cin >> min;

    cout << "enter seconds:" << endl;
    cin >> sec;

    if (sec >= 60)
    {
        min += (sec / 60);
        sec %= 60;
    }

    if (min >= 60)
    {
        hr += (min / 60);
        min %= 60;
    }

    cout << "the required time is:\n"
         << hr << ":" << min << ":" << sec << endl;

    tot_sec = hms_to_sec(hr, min, sec);

    cout << "total seconds are: " << tot_sec;
    return 0;

    
}