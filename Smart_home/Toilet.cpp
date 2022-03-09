#include "Toilet.h"

/*void air_temp_toil(toilet toil1, float t) //Функция именения температуры воздуха в туалете
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
}*/

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

//Конструктор
toilet::toilet()
{
    param_toil.Set_parametrs(0, 0, 0, 0, 0, 0);
}

//Функции получения данных из полей
float toilet::Get_air_temp_toil()
{
    return param_toil.Get_air_temp();
}

float toilet::Get_air_hum_toil()
{
    return param_toil.Get_air_hum();
}

float toilet::Get_conc_co2_toil()
{
    return param_toil.Get_conc_co2();
}

int toilet::Get_brightness_toil()
{
    return param_toil.Get_brightness();
}

int toilet::Get_light_toil()
{
    return param_toil.Get_light();
}

int toilet::Get_vent_speed_toil()
{
    return param_toil.Get_vent_speed();
}

//Функции инициализации полей
void toilet::Set_air_temp_toil(float temp)
{
    param_toil.Set_air_temp(temp);
}

void toilet::Set_air_hum_toil(float hum)
{
    param_toil.Set_air_hum(hum);
}

void toilet::Set_conc_co2_toil(float co2)
{
    param_toil.Set_conc_co2(co2);
}

void toilet::Set_brightness_toil(int bright)
{
    param_toil.Set_brightness(bright);
}

void toilet::Set_light_toil(int l)
{
    param_toil.Set_light(l);
}

void toilet::Set_vent_speed_toil(int speed)
{
    param_toil.Set_vent_speed(speed);
}

//Инициализация класса туалет
void toilet::Set_parametrs_toil(float temp, float hum, float co2, int bright, int l, int speed)
{
    param_toil.Set_air_temp(temp);
    param_toil.Set_air_hum(hum);
    param_toil.Set_conc_co2(co2);
    param_toil.Set_brightness(bright);
    param_toil.Set_light(l);
    param_toil.Set_vent_speed(speed);
}

//Деструктор
toilet::~toilet()
{
}

//Вывод параметров туалета на экран
void toilet::OutToil()
{
    cout << endl << "Темература воздуха в туалете: " << Get_air_temp_toil() << " °С" << endl;
    cout << "Влажность воздуха в туалете: " << Get_air_hum_toil() << " %" << endl;
    cout << "Концентрация CO2 в туалете: " << Get_conc_co2_toil() << " %" << endl;
    cout << "Яркость света в туалете: " << Get_brightness_toil() << " %" << endl;
    cout << "Флажок света в туалете: " << Get_light_toil() << endl;
    cout << "Скорость вентиляции в туалете: " << Get_vent_speed_toil() << " %" << endl;
}