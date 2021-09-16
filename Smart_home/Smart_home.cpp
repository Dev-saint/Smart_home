#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>

using namespace std;

struct kitchen
{
    float air_temp;
    float air_hum;
    int coffee;
    float conc_co2;
    int vent_speed;
    int brightness;
    int light;
};

struct bedroom
{

};

struct bathroom
{
    float water_temp;
    float air_temp;
    float air_hum;
};



int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    system("cls");
}