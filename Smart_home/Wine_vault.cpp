#include "Wine_vault.h"

void air_temp_wine(wine_vault wine1, float t) //Функция именения температуры воздуха в винном погребе
{
    wine1.param_wine.air_temp = t;
    cout << "Температура воздуха в винном погребе будет изменена до " << wine1.param_wine.air_temp << " °С" << endl;
}

void air_hum_wine(wine_vault wine1, float hum) //Функция именения влажности воздуха в винном погребе
{
    wine1.param_wine.air_hum = hum;
    cout << "Влажность воздуха в винном погребе будет изменена до " << wine1.param_wine.air_hum << "%" << endl;
}

void conc_co2_wine(wine_vault wine1, float co2) //Функция изменения концентрации co2 в винном погребе
{
    wine1.param_wine.conc_co2 = co2;
    cout << "Концентрация CO2 в винном погребе будет изменена до " << wine1.param_wine.conc_co2 << "%" << endl;
}

void brightness_wine(wine_vault wine1, int bright) //Функция изменения яркости в винном погребе
{
    wine1.param_wine.brightness = bright;
    cout << "Яркость света в винном погребе будет изменена до " << wine1.param_wine.brightness << "%" << endl;
}

void light_wine(wine_vault wine1) //Функция включения/выключения света в винном погребе
{
    if (wine1.param_wine.light)
        cout << "Свет в винном погребе включен" << endl;
    else
        cout << "Свет в винном погребе выключен" << endl;
}

void vent_speed_wine(wine_vault wine1, int speed) //Функция изменения скорости вентиляции в винном погребе
{
    wine1.param_wine.vent_speed = speed;
    cout << "Скорость вентиляции в винном погребе будет изменена до " << wine1.param_wine.vent_speed << "%" << endl;
}

void menu_wine() // Функция вызова меню параметров для винного погреба
{
    cout << "1. Температура воздуха" << endl
        << "2. Влажность воздуха" << endl
        << "3. Концентрация CO2" << endl
        << "4. Яркость света" << endl
        << "5. Включение/выключение света" << endl
        << "6. Скорость вентиляции" << endl
        << "Выбранный пункт: ";
}