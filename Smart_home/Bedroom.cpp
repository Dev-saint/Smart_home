#include "Bedroom.h"

void air_temp_bed(bedroom bed1, float t) //Функция именения температуры воздуха в спальне
{
    bed1.param_bed.air_temp = t;
    cout << "Температура воздуха в спальне будет изменена до " << bed1.param_bed.air_temp << " °С" << endl;
}

void air_hum_bed(bedroom bed1, float hum) //Функция именения влажности воздуха в спальне
{
    bed1.param_bed.air_hum = hum;
    cout << "Влажность воздуха в спальне будет изменена до " << bed1.param_bed.air_hum << "%" << endl;
}

void conc_co2_bed(bedroom bed1, float co2) //Функция изменения концентрации co2 в спальне
{
    bed1.param_bed.conc_co2 = co2;
    cout << "Концентрация CO2 в ванной будет изменена до " << bed1.param_bed.conc_co2 << "%" << endl;
}

void brightness_bed(bedroom bed1, int bright) //Функция изменения яркости в спальне
{
    bed1.param_bed.brightness = bright;
    cout << "Яркость света в спальне будет изменена до " << bed1.param_bed.brightness << "%" << endl;
}

void light_bed(bedroom bed1) //Функция включения/выключения света в спальне
{
    if (bed1.param_bed.light)
        cout << "Свет в спальне включен" << endl;
    else
        cout << "Свет в спальне выключен" << endl;
}

void vent_speed_bed(bedroom bed1, int speed) //Функция изменения скорости вентиляции в спальне
{
    bed1.param_bed.vent_speed = speed;
    cout << "Скорость вентиляции в спальне будет изменена до " << bed1.param_bed.vent_speed << "%" << endl;
}

void menu_bed() // Функция вызова меню параметров для спальни
{
    cout << "1. Температура воздуха" << endl
        << "2. Влажность воздуха" << endl
        << "3. Концентрация CO2" << endl
        << "4. Яркость света" << endl
        << "5. Включение/выключение света" << endl
        << "6. Скорость вентиляции" << endl
        << "Выбранный пункт: ";
}