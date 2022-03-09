#include "Kitchen.h"

/*void coffee_machine(kitchen kitch1) //Функция приготовления кофе
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
}*/

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

//Конструктор
kitchen::kitchen()
{
    param_kitch.Set_parametrs(0, 0, 0, 0, 0, 0);
    coffee = 0;
}

//Функции получения данных из полей
float kitchen::Get_air_temp_kitch()
{
    return param_kitch.Get_air_temp();
}

float kitchen::Get_air_hum_kitch()
{
    return param_kitch.Get_air_hum();
}

float kitchen::Get_conc_co2_kitch()
{
    return param_kitch.Get_conc_co2();
}

int kitchen::Get_brightness_kitch()
{
    return param_kitch.Get_brightness();
}

int kitchen::Get_light_kitch()
{
    return param_kitch.Get_light();
}

int kitchen::Get_vent_speed_kitch()
{
    return param_kitch.Get_vent_speed();
}

int kitchen::Get_coffee()
{
    return coffee;
}

//Функции инициализации полей
void kitchen::Set_air_temp_kitch(float temp)
{
    param_kitch.Set_air_temp(temp);
}

void kitchen::Set_air_hum_kitch(float hum)
{
    param_kitch.Set_air_hum(hum);
}

void kitchen::Set_conc_co2_kitch(float co2)
{
    param_kitch.Set_conc_co2(co2);
}

void kitchen::Set_brightness_kitch(int bright)
{
    param_kitch.Set_brightness(bright);
}

void kitchen::Set_light_kitch(int l)
{
    param_kitch.Set_light(l);
}

void kitchen::Set_vent_speed_kitch(int speed)
{
    param_kitch.Set_vent_speed(speed);
}

void kitchen::Set_coffee(int cof)
{
    coffee = cof;
}

//Деструктор
kitchen::~kitchen()
{
}

//Инициализация класса кухня
void kitchen::Set_parametrs_kitch(float temp, float hum, float co2, int bright, int l, int speed, int cof)
{
    param_kitch.Set_air_temp(temp);
    param_kitch.Set_air_hum(hum);
    param_kitch.Set_conc_co2(co2);
    param_kitch.Set_brightness(bright);
    param_kitch.Set_light(l);
    param_kitch.Set_vent_speed(speed);
    coffee = cof;
}

//Вывод параметров кухни на экран
void kitchen::OutKitch()
{
    cout << endl << "Темература воздуха на кухне: " << Get_air_temp_kitch() << " °С" << endl;
    cout << "Влажность воздуха на кухне: " << Get_air_hum_kitch() << " %" << endl;
    cout << "Концентрация CO2 на кухне: " << Get_conc_co2_kitch() << " %" << endl;
    cout << "Яркость света на кухне: " << Get_brightness_kitch() << " %" << endl;
    cout << "Флажок света на кухне: " << Get_light_kitch() << endl;
    cout << "Скорость вентиляции на кухне: " << Get_vent_speed_kitch() << " %" << endl;
    cout << "Флажок кофе на кухне: " << Get_coffee() << endl;
}

void kitchen::coffee_machine() //Функция приготовления кофе
{
    if (coffee)
    {
        cout << "Кофе готовится..." << endl;
        Sleep(5000);
        cout << "Кофе готов!" << endl;
    }
}