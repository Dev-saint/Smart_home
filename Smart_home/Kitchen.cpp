#include "Kitchen.h"

void coffee_machine(kitchen kitch1) //Функция приготовления кофе
{
    if (kitch1.coffee)
    {
        cout << "Кофе готовится..." << endl;
        Sleep(5000);
        cout << "Кофе готов!" << endl;
    }
}

void air_temp_kitch(kitchen kitch1, float t) //Функция именения температуры воздуха на кухне
{
    kitch1.param_kitch.air_temp = t;
    cout << "Температура воздуха на кухне будет изменена до " << kitch1.param_kitch.air_temp << " °С" << endl;
}

void air_hum_kitch(kitchen kitch1, float hum) //Функция именения влажности воздуха на кухне
{
    kitch1.param_kitch.air_hum = hum;
    cout << "Влажность воздуха на кухне будет изменена до " << kitch1.param_kitch.air_hum << "%" << endl;
}

void conc_co2_kitch(kitchen kitch1, float co2) //Функция изменения концентрации co2 на кухне
{
    kitch1.param_kitch.conc_co2 = co2;
    cout << "Концентрация CO2 на кухне будет изменена до " << kitch1.param_kitch.conc_co2 << "%" << endl;
}

void brightness_kitch(kitchen kitch1, int bright) //Функция изменения яркости на кухне
{
    kitch1.param_kitch.brightness = bright;
    cout << "Яркость света на кухне будет изменена до " << kitch1.param_kitch.brightness << "%" << endl;
}

void light_kitch(kitchen kitch1) //Функция включения/выключения света на кухне
{
    if (kitch1.param_kitch.light)
        cout << "Свет на кухне включен" << endl;
    else
        cout << "Свет на кухне выключен" << endl;
}

void vent_speed_kitch(kitchen kitch1, int speed) //Функция изменения скорости вентиляции на кухне
{
    kitch1.param_kitch.vent_speed = speed;
    cout << "Скорость вентиляции на кухне будет изменена до " << kitch1.param_kitch.vent_speed << "%" << endl;
}

void menu_kitch() // Функция вызова меню параметров для туалета
{
    cout << "1. Температура воздуха" << endl
        << "2. Влажность воздуха" << endl
        << "3. Концентрация CO2" << endl
        << "4. Яркость света" << endl
        << "5. Включение/выключение света" << endl
        << "6. Скорость вентиляции" << endl
        << "7. Приготовление кофе" << endl
        << "Выбранный пункт: ";
}