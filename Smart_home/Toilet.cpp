#include "Toilet.h"

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
    param_toil->Set_parametrs(0, 0, 0, 0, 0, 0);
}

// Конструктор с одним параметром
toilet::toilet(float temp)
{
    param_toil->Set_parametrs(temp, 0, 0, 0, 0, 0);
}

//Конструктор с параметрами
toilet::toilet(float temp, float hum, float co2, int bright, int l, int speed)
{
    param_toil->Set_parametrs(temp, hum, co2, bright, l, speed);
}

//Функции получения данных из полей
float toilet::Get_air_temp_toil()
{
    return param_toil->Get_air_temp();
}

float toilet::Get_air_hum_toil()
{
    return param_toil->Get_air_hum();
}

float toilet::Get_conc_co2_toil()
{
    return param_toil->Get_conc_co2();
}

int toilet::Get_brightness_toil()
{
    return param_toil->Get_brightness();
}

int toilet::Get_light_toil()
{
    return param_toil->Get_light();
}

int toilet::Get_vent_speed_toil()
{
    return param_toil->Get_vent_speed();
}

// Функции получения данных из полей через указатель
void toilet::Get_air_temp_toil_point(float* temp)
{
    *temp = param_toil->Get_air_temp();
}

void toilet::Get_air_hum_toil_point(float* hum)
{
    *hum = param_toil->Get_air_hum();
}

void toilet::Get_conc_co2_toil_point(float* co2)
{
    *co2 = param_toil->Get_conc_co2();
}

void toilet::Get_brightness_toil_point(int* bright)
{
    *bright = param_toil->Get_brightness();
}

void toilet::Get_light_toil_point(int* l)
{
    *l = param_toil->Get_light();
}

void toilet::Get_vent_speed_toil_point(int* speed)
{
    *speed = param_toil->Get_vent_speed();
}

//Функции инициализации полей
void toilet::Set_air_temp_toil(float temp)
{
    param_toil->Set_air_temp(temp);
}

void toilet::Set_air_hum_toil(float hum)
{
    param_toil->Set_air_hum(hum);
}

void toilet::Set_conc_co2_toil(float co2)
{
    param_toil->Set_conc_co2(co2);
}

void toilet::Set_brightness_toil(int bright)
{
    param_toil->Set_brightness(bright);
}

void toilet::Set_light_toil(int l)
{
    param_toil->Set_light(l);
}

void toilet::Set_vent_speed_toil(int speed)
{
    param_toil->Set_vent_speed(speed);
}

//Инициализация класса туалет
void toilet::Set_parametrs_toil(float temp, float hum, float co2, int bright, int l, int speed)
{
    param_toil->Set_air_temp(temp);
    param_toil->Set_air_hum(hum);
    param_toil->Set_conc_co2(co2);
    param_toil->Set_brightness(bright);
    param_toil->Set_light(l);
    param_toil->Set_vent_speed(speed);
}

//Деструктор
toilet::~toilet()
{
}

//Вывод параметров туалета на экран
void toilet::DisplayToil()
{
    cout << endl << "Темература воздуха в туалете: " << Get_air_temp_toil() << " °С" << endl;
    cout << "Влажность воздуха в туалете: " << Get_air_hum_toil() << " %" << endl;
    cout << "Концентрация CO2 в туалете: " << Get_conc_co2_toil() << " %" << endl;
    cout << "Яркость света в туалете: " << Get_brightness_toil() << " %" << endl;
    cout << "Флажок света в туалете: " << Get_light_toil() << endl;
    cout << "Скорость вентиляции в туалете: " << Get_vent_speed_toil() << " %" << endl;
}
