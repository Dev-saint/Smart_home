#include "Toilet.h"

void air_temp_toil(toilet toil1, float t) //Функция именения температуры воздуха в туалете
{
    toil1.param_toil.air_temp = t;
    cout << "Температура воздуха в туалете будет изменена до " << toil1.param_toil.air_temp << " °С" << endl;
}

void air_hum_toil(toilet toil1, float hum) //Функция изменения влажности воздуха в туалете
{
    toil1.param_toil.air_hum = hum;
    cout << "Влажность воздуха в туалете будет изменена до " << toil1.param_toil.air_hum << "%" << endl;
}

void conc_co2_toil(toilet toil1, float co2) //Функция изменения концентрации co2 в туалете
{
    toil1.param_toil.conc_co2 = co2;
    cout << "Концентрация CO2 в туалете будет изменена до " << toil1.param_toil.conc_co2 << "%" << endl;
}

void brightness_toil(toilet toil1, int bright) //Функция изменения яркости в туалете
{
    toil1.param_toil.brightness = bright;
    cout << "Яркость света в туалете будет изменена до " << toil1.param_toil.brightness << "%" << endl;
}

void light_toil(toilet toil1) //Функция включения/выключения света в туалете
{
    if (toil1.param_toil.light)
        cout << "Свет в туалете включен" << endl;
    else
        cout << "Свет в туалете выключен" << endl;
}

void vent_speed_toil(toilet toil1, int speed) //Функция изменения скорости вентиляции в туалете
{
    toil1.param_toil.vent_speed = speed;
    cout << "Скорость вентиляции в туалете будет изменена до " << toil1.param_toil.vent_speed << "%" << endl;
}

void menu_toil() // Функция вызова меню параметров для туалета
{
    cout << "1. Температура воздуха" << endl
        << "2. Влажность воздуха" << endl
        << "3. Концентрация CO2" << endl
        << "4. Яркость света" << endl
        << "5. Включение/выключение света" << endl
        << "6. Скорость вентиляции" << endl
        << "Выбранный пункт: ";
}