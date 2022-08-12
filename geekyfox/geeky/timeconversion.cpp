// time converter
#include <iostream>
#include <string>
using namespace std;
int main()
{    std::string time;
    std::cin >> time;
    string ntime;
     ntime = time.substr(0, 2);
    if (time[8] == 'P' and time[9] == 'M')
    {
       

        if (ntime == "01")
        {
            ntime = "13";
        }
        if (ntime == "02")
        {
            ntime = "14";
        }
        if (ntime == "03")
        {
            ntime = "15";
        }
        if (ntime == "04")
        {
            ntime = "16";
        }
        if (ntime == "05")
        {
            ntime = "17";
        }
        if (ntime == "06")
        {
            ntime = "18";
        }
        if (ntime == "07")
        {
            ntime = "19";
        }
        if (ntime == "08")
        {
            ntime = "20";
        }
        if (ntime == "09")
        {
            ntime = "21";
        }
        if (ntime == "10")
        {
            ntime = "22";
        }
        if (ntime == "11")
        {
            ntime = "23";
        }
        if (ntime == "00")
        {
            ntime = "12";
        }
        cout << ntime << time.substr(2, 6);
    }

    if (time[8] == 'A' and time[9] == 'M')
    {   if (ntime == "12")
        {
            ntime = "00";
        }
         if (ntime == "13")
        {
            ntime = "01";
        }
        if (ntime == "14")
        {
            ntime = "02";
        }
        if (ntime == "15")
        {
            ntime = "03";
        }
        if (ntime == "16")
        {
            ntime = "04";
        }
        if (ntime == "17")
        {
            ntime = "05";
        }
        if (ntime == "18")
        {
            ntime = "06";
        }
        if (ntime == "19")
        {
            ntime = "07";
        }
        if (ntime == "20")
        {
            ntime = "08";
        }
        if (ntime == "21")
        {
            ntime = "09";
        }
        if (ntime == "22")
        {
            ntime = "10";
        }
        if (ntime == "23")
        {
            ntime = "11";
        }
        cout << ntime+time.substr(2, 6);
    }
}