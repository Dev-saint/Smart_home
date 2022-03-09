#include "Bedroom.h"

/*void air_temp_bed(bedroom bed1, float t) //Функция именения температуры воздуха в спальне
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
}*/

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

//Конструктор
bedroom::bedroom()
{
    param_bed.Set_parametrs(0, 0, 0, 0, 0, 0);
}

//Функции получения данных из полей
float bedroom::Get_air_temp_bed()
{
    return param_bed.Get_air_temp();
}

float bedroom::Get_air_hum_bed()
{
    return param_bed.Get_air_hum();
}

float bedroom::Get_conc_co2_bed()
{
    return param_bed.Get_conc_co2();
}

int bedroom::Get_brightness_bed()
{
    return param_bed.Get_brightness();
}

int bedroom::Get_light_bed()
{
    return param_bed.Get_light();
}

int bedroom::Get_vent_speed_bed()
{
    return param_bed.Get_vent_speed();
}

//Функции инициализации полей
void bedroom::Set_air_temp_bed(float temp)
{
    param_bed.Set_air_temp(temp);
}

void bedroom::Set_air_hum_bed(float hum)
{
    param_bed.Set_air_hum(hum);
}

void bedroom::Set_conc_co2_bed(float co2)
{
    param_bed.Set_conc_co2(co2);
}

void bedroom::Set_brightness_bed(int bright)
{
    param_bed.Set_brightness(bright);
}

void bedroom::Set_light_bed(int l)
{
    param_bed.Set_light(l);
}

void bedroom::Set_vent_speed_bed(int speed)
{
    param_bed.Set_vent_speed(speed);
}

//Деструктор
bedroom::~bedroom()
{
}

//Инициализация класса спальня
void bedroom::Set_parametrs_bed(float temp, float hum, float co2, int bright, int l, int speed, int cof)
{
    param_bed.Set_air_temp(temp);
    param_bed.Set_air_hum(hum);
    param_bed.Set_conc_co2(co2);
    param_bed.Set_brightness(bright);
    param_bed.Set_light(l);
    param_bed.Set_vent_speed(speed);
}

//Вывод параметров спальни на экран
void bedroom::OutBed()
{
    cout << endl << "Темература воздуха в спальне: " << Get_air_temp_bed() << " °С" << endl;
    cout << "Влажность воздуха в спальне: " << Get_air_hum_bed() << " %" << endl;
    cout << "Концентрация CO2 в спальне: " << Get_conc_co2_bed() << " %" << endl;
    cout << "Яркость света в спальне: " << Get_brightness_bed() << " %" << endl;
    cout << "Флажок света в спальне: " << Get_light_bed() << endl;
    cout << "Скорость вентиляции в спальне: " << Get_vent_speed_bed() << " %" << endl;
}