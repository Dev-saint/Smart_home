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
bathroom::bathroom()
{
    param_bath.Set_parametrs(0, 0, 0, 0, 0, 0);
    flag_water = 0;
}

//Функции получения данных из полей
float bathroom::Get_air_temp_bath()
{
    return param_bath.Get_air_temp();
}

float bathroom::Get_air_hum_bath()
{
    return param_bath.Get_air_hum();
}

float bathroom::Get_conc_co2_bath()
{
    return param_bath.Get_conc_co2();
}

int bathroom::Get_brightness_bath()
{
    return param_bath.Get_brightness();
}

int bathroom::Get_light_bath()
{
    return param_bath.Get_light();
}

int bathroom::Get_vent_speed_bath()
{
    return param_bath.Get_vent_speed();
}

int bathroom::Get_flag_water()
{
    return this->flag_water;
}

//Функции инициализации полей
void bathroom::Set_air_temp_bath(float temp)
{
    param_bath.Set_air_temp(temp);
}

void bathroom::Set_air_hum_bath(float hum)
{
    param_bath.Set_air_hum(hum);
}

void bathroom::Set_conc_co2_bath(float co2)
{
    param_bath.Set_conc_co2(co2);
}

void bathroom::Set_brightness_bath(int bright)
{
    param_bath.Set_brightness(bright);
}

void bathroom::Set_light_bath(int l)
{
    param_bath.Set_light(l);
}

void bathroom::Set_vent_speed_bath(int speed)
{
    param_bath.Set_vent_speed(speed);
}

void bathroom::Set_flag_water(int water)
{
    flag_water = water;
}

//Деструктор
bathroom::~bathroom()
{
}

//Инициализация класса ванная
void bathroom::Set_parametrs_bath(float temp, float hum, float co2, int bright, int l, int speed, int water)
{
    param_bath.Set_air_temp(temp);
    param_bath.Set_air_hum(hum);
    param_bath.Set_conc_co2(co2);
    param_bath.Set_brightness(bright);
    param_bath.Set_light(l);
    param_bath.Set_vent_speed(speed);
    flag_water = water;
}

//Вывод параметров ванной на экран
void bathroom::OutBath()
{
    cout << endl << "Темература воздуха в ванной: " << Get_air_temp_bath() << " °С" << endl;
    cout << "Влажность воздуха в ванной: " << Get_air_hum_bath() << " %" << endl;
    cout << "Концентрация CO2 в ванной: " << Get_conc_co2_bath() << " %" << endl;
    cout << "Яркость света в ванной: " << Get_brightness_bath() << " %" << endl;
    cout << "Флажок света в ванной: " << Get_light_bath() << endl;
    cout << "Скорость вентиляции в ванной: " << Get_vent_speed_bath() << " %" << endl;
    cout << "Флажок набора воды в ванной: " << Get_flag_water() << endl;
}

void bathroom::water_bath()   //Функция набора воды в ванную
{
    if (flag_water)
    {
        cout << "Включен набор воды в ванную." << endl;
        Sleep(5000);
        cout << "Вода набрана!" << endl;
    }
}

//Дружественная функция задания температур классов toilet, kitchen, bedroom, bathroom
void temp_set_all(toilet& toil, kitchen& kitch, bedroom& bed, bathroom& bath, float temp)
{
    toil.param_toil.Set_air_temp(temp);
    kitch.param_kitch.Set_air_temp(temp);
    bed.param_bed.Set_air_temp(temp);
    bath.param_bath.Set_air_temp(temp);
}