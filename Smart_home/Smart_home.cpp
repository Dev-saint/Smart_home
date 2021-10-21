#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include "Bathroom.h"
#include "Bedroom.h"
#include "Kitchen.h"
#include "Toilet.h"
#include "Wine_vault.h"

using namespace std;


void water_bath()
{
    if (bath.flag_water)
        cout << "Включен набор воды в ванную." << endl;
        Sleep(5000);
        cout << "Вода набрана!" << endl;
}

void air_temp_bath(int t) //Функция именения температуры воздуха в ванной
{
    bath.air_temp = t;
    cout << "Температура воздуха в ванной будет изменена до " << t << " °С" << endl;
}

void air_temp_bed(int t) //Функция именения температуры воздуха в ванной
{
    bed.air_temp = t;
    cout << "Температура воздуха в спальне будет изменена до " << t << " °С" << endl;
}

void air_temp_kitch(int t) //Функция именения температуры воздуха в ванной
{
    kitch.air_temp = t;
    cout << "Температура воздуха в ванной будет изменена до " << t << " °С" << endl;
}

int main()
{
    
}