#include "Bathroom.h"

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

//Конструктор
Bathroom::Bathroom()
{
    air_temp = 0;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;
    flag_water = 0;
}

// Конструктор с одним параметром
Bathroom::Bathroom(float temp) : Parametrs(temp)
{
    //param_bath.Set_parametrs(temp, 0, 0, 0, 0, 0);
    flag_water = 0;
}

//Конструктор с параметрами
Bathroom::Bathroom(float temp, float hum, float co2, int bright, int l, int speed, int water) : Parametrs(temp, hum, co2, bright, l, speed)
{
    //param_bath.Set_parametrs(temp, hum, co2, bright, l, speed);
    flag_water = water;
}

//Функции получения данных из полей
/*float Bathroom::Get_air_temp_bath()
{
    return param_bath.Get_air_temp();
}

float Bathroom::Get_air_hum_bath()
{
    return param_bath.Get_air_hum();
}

float Bathroom::Get_conc_co2_bath()
{
    return param_bath.Get_conc_co2();
}

int Bathroom::Get_brightness_bath()
{
    return param_bath.Get_brightness();
}

int Bathroom::Get_light_bath()
{
    return param_bath.Get_light();
}

int Bathroom::Get_vent_speed_bath()
{
    return param_bath.Get_vent_speed();
}*/

int Bathroom::Get_flag_water()
{
    return this->flag_water;
}

//Функции инициализации полей
/*void Bathroom::Set_air_temp_bath(float temp)
{
    param_bath.Set_air_temp(temp);
}

void Bathroom::Set_air_hum_bath(float hum)
{
    param_bath.Set_air_hum(hum);
}

void Bathroom::Set_conc_co2_bath(float co2)
{
    param_bath.Set_conc_co2(co2);
}

void Bathroom::Set_brightness_bath(int bright)
{
    param_bath.Set_brightness(bright);
}

void Bathroom::Set_light_bath(int l)
{
    param_bath.Set_light(l);
}

void Bathroom::Set_vent_speed_bath(int speed)
{
    param_bath.Set_vent_speed(speed);
}*/

void Bathroom::Set_flag_water(int water)
{
    flag_water = water;
}

//Деструктор
Bathroom::~Bathroom()
{
}

/*//Инициализация класса ванная
void Bathroom::Set_parametrs_bath(float temp, float hum, float co2, int bright, int l, int speed, int water)
{
    param_bath.Set_air_temp(temp);
    param_bath.Set_air_hum(hum);
    param_bath.Set_conc_co2(co2);
    param_bath.Set_brightness(bright);
    param_bath.Set_light(l);
    param_bath.Set_vent_speed(speed);
    flag_water = water;
}*/

//Вывод параметров ванной на экран
void Bathroom::DisplayBath()
{
    cout << endl << "Темература воздуха в ванной: " << air_temp << " °С" << endl;
    cout << "Влажность воздуха в ванной: " << air_hum << " %" << endl;
    cout << "Концентрация CO2 в ванной: " << conc_co2 << " %" << endl;
    cout << "Яркость света в ванной: " << brightness << " %" << endl;
    cout << "Флажок света в ванной: " << light << endl;
    cout << "Скорость вентиляции в ванной: " << vent_speed << " %" << endl;
    cout << "Флажок набора воды в ванной: " << flag_water << endl;
}

void Bathroom::water_bath()   //Функция набора воды в ванную
{
    if (flag_water)
    {
        cout << "Включен набор воды в ванную." << endl;
        Sleep(5000);
        cout << "Вода набрана!" << endl;
    }
}

/*//Дружественная функция задания температур классов Toilet, Kitchen, Bedroom, Bathroom
void temp_set_all(Toilet& toil, Kitchen& kitch, Bedroom& bed, Bathroom& bath, float temp)
{
    toil.param_toil->Set_air_temp(temp);
    kitch.param_kitch->Set_air_temp(temp);
    bed.param_bed.Set_air_temp(temp);
    bath.param_bath.Set_air_temp(temp);
}*/