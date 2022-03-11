#include "Wine_vault.h"

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

//Конструктор
wine_vault::wine_vault()
{
    param_wine.Set_parametrs(0, 0, 0, 0, 0, 0);
}

//Функции получения данных из полей
float wine_vault::Get_air_temp_wine()
{
    return param_wine.Get_air_temp();
}

float wine_vault::Get_air_hum_wine()
{
    return param_wine.Get_air_hum();
}

float wine_vault::Get_conc_co2_wine()
{
    return param_wine.Get_conc_co2();
}

int wine_vault::Get_brightness_wine()
{
    return param_wine.Get_brightness();
}

int wine_vault::Get_light_wine()
{
    return param_wine.Get_light();
}

int wine_vault::Get_vent_speed_wine()
{
    return param_wine.Get_vent_speed();
}

//Функции инициализации полей
void wine_vault::Set_air_temp_wine(float temp)
{
    param_wine.Set_air_temp(temp);
}

void wine_vault::Set_air_hum_wine(float hum)
{
    param_wine.Set_air_hum(hum);
}

void wine_vault::Set_conc_co2_wine(float co2)
{
    param_wine.Set_conc_co2(co2);
}

void wine_vault::Set_brightness_wine(int bright)
{
    param_wine.Set_brightness(bright);
}

void wine_vault::Set_light_wine(int l)
{
    param_wine.Set_light(l);
}

void wine_vault::Set_vent_speed_wine(int speed)
{
    param_wine.Set_vent_speed(speed);
}

//Деструктор
wine_vault::~wine_vault()
{
}

//Инициализация класса винный погреб
void wine_vault::Set_parametrs_wine(float temp, float hum, float co2, int bright, int l, int speed)
{
    param_wine.Set_air_temp(temp);
    param_wine.Set_air_hum(hum);
    param_wine.Set_conc_co2(co2);
    param_wine.Set_brightness(bright);
    param_wine.Set_light(l);
    param_wine.Set_vent_speed(speed);
}

//Вывод параметров винного погреба на экран
void wine_vault::OutWine()
{
    cout << endl << "Темература воздуха в винном погребе: " << Get_air_temp_wine() << " °С" << endl;
    cout << "Влажность воздуха в винном погребе: " << Get_air_hum_wine() << " %" << endl;
    cout << "Концентрация CO2 в винном погребе: " << Get_conc_co2_wine() << " %" << endl;
    cout << "Яркость света в винном погребе: " << Get_brightness_wine() << " %" << endl;
    cout << "Флажок света в винном погребе: " << Get_light_wine() << endl;
    cout << "Скорость вентиляции в винном погребе: " << Get_vent_speed_wine() << " %" << endl;
}