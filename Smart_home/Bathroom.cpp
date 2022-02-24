#include "Bathroom.h"

void water_bath(bathroom bath1)   //Функция набора воды в ванную
{
    if (bath1.flag_water)
    {
        cout << "Включен набор воды в ванную." << endl;
        Sleep(5000);
        cout << "Вода набрана!" << endl;
    }
}

void air_temp_bath(bathroom bath1, float t) //Функция именения температуры воздуха в ванной
{
    bath1.param_bath.air_temp = t;
    cout << "Температура воздуха в ванной будет изменена до " << bath1.param_bath.air_temp << " °С" << endl;
}

void air_hum_bath(bathroom bath1, float hum) //Функция именения влажности воздуха в ванной
{
    bath1.param_bath.air_hum = hum;
    cout << "Влажность воздуха в ванной будет изменена до " << bath1.param_bath.air_hum << "%" << endl;
}

void conc_co2_bath(bathroom bath1, float co2) //Функция изменения концентрации co2 в ванной
{
    bath1.param_bath.conc_co2 = co2;
    cout << "Концентрация CO2 в ванной будет изменена до " << bath1.param_bath.conc_co2 << "%" << endl;
}

void brightness_bath(bathroom bath1, int bright) //Функция изменения яркости в ванной
{
    bath1.param_bath.brightness = bright;
    cout << "Яркость света в ванной будет изменена до " << bath1.param_bath.brightness << "%" << endl;
}

void light_bath(bathroom bath1) //Функция включения/выключения света в ванную
{
    if (bath1.param_bath.light)
        cout << "Свет в ванной включен" << endl;
    else
        cout << "Свет в ванной выключен" << endl;
}

void vent_speed_bath(bathroom bath1, int speed) //Функция изменения скорости вентиляции в ванной
{
    bath1.param_bath.vent_speed = speed;
    cout << "Скорость вентиляции в ванной будет изменена до " << bath1.param_bath.vent_speed << "%" << endl;
}

void menu_bath() // Функция вызова меню параметров для ванной
{
    cout << "1. Температура воздуха" << endl
        << "2. Влажность воздуха" << endl
        << "3. Концентрация CO2" << endl
        << "4. Яркость света" << endl
        << "5. Включение/выключение света" << endl
        << "6. Скорость вентиляции" << endl
        << "7. Набор воды в ванную" << endl
        << "Выбранный пункт: ";
}