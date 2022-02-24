﻿#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include "Bathroom.h"
#include "Bedroom.h"
#include "Kitchen.h"
#include "Toilet.h"
#include "Wine_vault.h"

using namespace std;


void water_bath()   //Функция набора воды в ванную
{
    if (bath.flag_water)
    {
        cout << "Включен набор воды в ванную." << endl;
        Sleep(5000);
        cout << "Вода набрана!" << endl;
    }
}

void air_temp_bath(float t) //Функция именения температуры воздуха в ванной
{
    bath.param_bath.air_temp = t;
    cout << "Температура воздуха в ванной будет изменена до " << bath.param_bath.air_temp << " °С" << endl;
}

void air_temp_bed(float t) //Функция именения температуры воздуха в спальне
{
    bed.param_bed.air_temp = t;
    cout << "Температура воздуха в спальне будет изменена до " << bed.param_bed.air_temp << " °С" << endl;
}

void air_temp_kitch(float t) //Функция именения температуры воздуха на кухне
{
    kitch.param_kitch.air_temp = t;
    cout << "Температура воздуха на кухне будет изменена до " << kitch.param_kitch.air_temp << " °С" << endl;
}

void air_temp_toil(float t) //Функция именения температуры воздуха в туалете
{
    toil.param_toil.air_temp = t;
    cout << "Температура воздуха в туалете будет изменена до " << toil.param_toil.air_temp << " °С" << endl;
}

void air_temp_wine(float t) //Функция именения температуры воздуха в винном погребе
{
    wine.param_wine.air_temp = t;
    cout << "Температура воздуха в винном погребе будет изменена до " << wine.param_wine.air_temp << " °С" << endl;
}

void air_temp_wine_control(float t) //Функция контроля температуры в винном погребе
{
    if (wine.param_wine.air_temp != t)
        wine.param_wine.air_temp = t;
}

void air_hum_toil(float hum) //Функция изменения влажности воздуха в туалете
{
    toil.param_toil.air_hum = hum;
    cout << "Влажность воздуха в туалете будет изменена до " << toil.param_toil.air_hum << "%" << endl;
}

void air_hum_kitch(float hum) //Функция именения влажности воздуха на кухне
{
    kitch.param_kitch.air_hum = hum;
    cout << "Влажность воздуха на кухне будет изменена до " << kitch.param_kitch.air_hum << "%" << endl;
}

void air_hum_bed(float hum) //Функция именения влажности воздуха в спальне
{
    bed.param_bed.air_hum = hum;
    cout << "Влажность воздуха в спальне будет изменена до " << bed.param_bed.air_hum << "%" << endl;
}

void air_hum_bath(float hum) //Функция именения влажности воздуха в ванной
{
    bath.param_bath.air_hum = hum;
    cout << "Влажность воздуха в ванной будет изменена до " << bath.param_bath.air_hum << "%" << endl;
}

void air_hum_wine(float hum) //Функция именения влажности воздуха в винном погребе
{
    wine.param_wine.air_hum = hum;
    cout << "Влажность воздуха в винном погребе будет изменена до " << wine.param_wine.air_hum << "%" << endl;
}

void conc_co2_toil(float co2) //Функция изменения концентрации co2 в туалете
{
    toil.param_toil.conc_co2 = co2;
    cout << "Концентрация CO2 в туалете будет изменена до " << toil.param_toil.conc_co2 << "%" << endl;
}

void conc_co2_kitch(float co2) //Функция изменения концентрации co2 на кухне
{
    kitch.param_kitch.conc_co2 = co2;
    cout << "Концентрация CO2 на кухне будет изменена до " << kitch.param_kitch.conc_co2 << "%" << endl;
}

void conc_co2_bed(float co2) //Функция изменения концентрации co2 в спальне
{
    bed.param_bed.conc_co2 = co2;
    cout << "Концентрация CO2 в ванной будет изменена до " << bed.param_bed.conc_co2 << "%" << endl;
}

void conc_co2_bath(float co2) //Функция изменения концентрации co2 в ванной
{
    bath.param_bath.conc_co2 = co2;
    cout << "Концентрация CO2 в ванной будет изменена до " << bath.param_bath.conc_co2 << "%" << endl;
}

void conc_co2_wine(float co2) //Функция изменения концентрации co2 в винном погребе
{
    wine.param_wine.conc_co2 = co2;
    cout << "Концентрация CO2 в винном погребе будет изменена до " << wine.param_wine.conc_co2 << "%" << endl;
}

void brightness_toil(int bright) //Функция изменения яркости в туалете
{
    toil.param_toil.brightness = bright;
    cout << "Яркость света в туалете будет изменена до " << toil.param_toil.brightness << "%" << endl;
}

void brightness_kitch(int bright) //Функция изменения яркости на кухне
{
    kitch.param_kitch.brightness = bright;
    cout << "Яркость света на кухне будет изменена до " << kitch.param_kitch.brightness << "%" << endl;
}

void brightness_bed(int bright) //Функция изменения яркости в спальне
{
    bed.param_bed.brightness = bright;
    cout << "Яркость света в спальне будет изменена до " << bed.param_bed.brightness << "%" << endl;
}

void brightness_bath(int bright) //Функция изменения яркости в ванной
{
    bath.param_bath.brightness = bright;
    cout << "Яркость света в ванной будет изменена до " << bath.param_bath.brightness << "%" << endl;
}

void brightness_wine(int bright) //Функция изменения яркости в винном погребе
{
    wine.param_wine.brightness = bright;
    cout << "Яркость света в винном погребе будет изменена до " << wine.param_wine.brightness << "%" << endl;
}

void light_toil() //Функция включения/выключения света в туалете
{
    if (toil.param_toil.light)
        cout << "Свет в туалете включен" << endl;
    else
        cout << "Свет в туалете выключен" << endl;
}

void light_kitch() //Функция включения/выключения света на кухне
{
    if (kitch.param_kitch.light)
        cout << "Свет на кухне включен" << endl;
    else
        cout << "Свет на кухне выключен" << endl;
}

void light_bed() //Функция включения/выключения света в спальне
{
    if (bed.param_bed.light)
        cout << "Свет в спальне включен" << endl;
    else
        cout << "Свет в спальне выключен" << endl;
}

void light_bath() //Функция включения/выключения света в ванную
{
    if (bath.param_bath.light)
        cout << "Свет в ванной включен" << endl;
    else
        cout << "Свет в ванной выключен" << endl;
}

void light_wine() //Функция включения/выключения света в винном погребе
{
    if (wine.param_wine.light)
        cout << "Свет в винном погребе включен" << endl;
    else
        cout << "Свет в винном погребе выключен" << endl;
}

void vent_speed_toil(int speed) //Функция изменения скорости вентиляции в туалете
{
    toil.param_toil.vent_speed = speed;
    cout << "Скорость вентиляции в туалете будет изменена до " << toil.param_toil.vent_speed << "%" << endl;
}

void vent_speed_kitch(int speed) //Функция изменения скорости вентиляции на кухне
{
    kitch.param_kitch.vent_speed = speed;
    cout << "Скорость вентиляции на кухне будет изменена до " << kitch.param_kitch.vent_speed << "%" << endl;
}

void vent_speed_bed(int speed) //Функция изменения скорости вентиляции в спальне
{
    bed.param_bed.vent_speed = speed;
    cout << "Скорость вентиляции в спальне будет изменена до " << bed.param_bed.vent_speed << "%" << endl;
}

void vent_speed_bath(int speed) //Функция изменения скорости вентиляции в ванной
{
    bath.param_bath.vent_speed = speed;
    cout << "Скорость вентиляции в ванной будет изменена до " << bath.param_bath.vent_speed << "%" << endl;
}

void vent_speed_wine(int speed) //Функция изменения скорости вентиляции в винном погребе
{
    wine.param_wine.vent_speed = speed;
    cout << "Скорость вентиляции в винном погребе будет изменена до " << wine.param_wine.vent_speed << "%" << endl;
}

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

void coffee_machine() //Функция приготовления кофе
{
    if (kitch.coffee)
    {
        cout << "Кофе готовится..." << endl;
        Sleep(5000);
        cout << "Кофе готов!" << endl;
    }
}


int main()
{
    system("chcp 1251");
    system("cls");
    float t, co2, hum;
    int f_menu_rooms = 0, room, par, f_menu_par = 0, bright, speed, light;
    cout << "Система умного дома" << endl;
    do
    {
        cout << "Выберите комнату:" << endl
            << "1. Туалет" << endl
            << "2. Кухня" << endl
            << "3. Спальня" << endl
            << "4. Ванная" << endl
            << "5. Винный погреб" << endl
            << "Выбранная комната: ";
        cin >> room;
        cout << endl;
        if (room == 1)
            do
            {
                menu_toil();
                cin >> par;
                if (par == 1)
                {
                    cout << "Введите желаемую температуру воздуха (в °С): ";
                    cin >> t;
                    air_temp_toil(t);
                }
                else
                    if (par == 2)
                    {
                        cout << "Введите желаемую влажность воздуха (в %): ";
                        cin >> hum;
                        air_hum_toil(hum);
                    }
                    else
                        if (par == 3)
                        {
                            cout << "Введите желаемую концентрацию CO2 (в %): ";
                            cin >> co2;
                            conc_co2_toil(co2);
                        }
                        else
                            if (par == 4)
                            {
                                cout << "Введите желаемую яркость света (в %): ";
                                cin >> bright;
                                brightness_toil(bright);
                            }
                            else
                                if (par == 5)
                                {
                                    cout << "Включить (1) или выключить (0) свет?" << endl;
                                    cin >> light;
                                    if (light == 1 && toil.param_toil.light != 1)
                                    {
                                        toil.param_toil.light = 1;
                                        light_toil();
                                    }
                                    else
                                        if (light == 1)
                                        {
                                            cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                            cin >> light;
                                            if (light == 1)
                                            {
                                                toil.param_toil.light = 0;
                                                light_toil();
                                            }
                                        }
                                        else
                                            if (toil.param_toil.light == 0)
                                            {
                                                cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                cin >> light;
                                                if (light == 1)
                                                {
                                                    toil.param_toil.light = 1;
                                                    light_toil();
                                                }
                                            }
                                            else
                                            {
                                                toil.param_toil.light = 0;
                                                light_toil();
                                            }
                                }
                                else
                                    if (par == 6)
                                    {
                                        cout << "Введите желаемую скорость вентиляции: ";
                                        cin >> speed;
                                        vent_speed_toil(speed);
                                    }
                                    else
                                    {
                                        cout << "Выберите пункт из предложенных!" << endl;
                                    }
                cout << "Желаете выбрать еще один параметр? Да(1)/Нет(0)" << endl;
                cin >> f_menu_par;
            } while (f_menu_par);
        else
            if (room == 2)
                do
                {
                    menu_kitch();
                    cin >> par;
                    if (par == 1)
                    {
                        cout << "Введите желаемую температуру воздуха (в °С): ";
                        cin >> t;
                        air_temp_kitch(t);
                    }
                    else
                        if (par == 2)
                        {
                            cout << "Введите желаемую влажность воздуха (в %): ";
                            cin >> hum;
                            air_hum_kitch(hum);
                        }
                        else
                            if (par == 3)
                            {
                                cout << "Введите желаемую концентрацию CO2 (в %): ";
                                cin >> co2;
                                conc_co2_kitch(co2);
                            }
                            else
                                if (par == 4)
                                {
                                    cout << "Введите желаемую яркость света (в %): ";
                                    cin >> bright;
                                    brightness_kitch(bright);
                                }
                                else
                                    if (par == 5)
                                    {
                                        cout << "Включить (1) или выключить (0) свет?" << endl;
                                        cin >> light;
                                        if (light == 1 && kitch.param_kitch.light != 1)
                                        {
                                            kitch.param_kitch.light = 1;
                                            light_kitch();
                                        }
                                        else
                                            if (light == 1)
                                            {
                                                cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                cin >> light;
                                                if (light == 1)
                                                {
                                                    kitch.param_kitch.light = 0;
                                                    light_kitch();
                                                }
                                            }
                                            else
                                                if (kitch.param_kitch.light == 0)
                                                {
                                                    cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                    cin >> light;
                                                    if (light == 1)
                                                    {
                                                        kitch.param_kitch.light = 1;
                                                        light_kitch();
                                                    }
                                                }
                                                else
                                                {
                                                    kitch.param_kitch.light = 0;
                                                    light_kitch();
                                                }
                                    }
                                    else
                                        if (par == 6)
                                        {
                                            cout << "Введите желаемую скорость вентиляции: ";
                                            cin >> speed;
                                            vent_speed_kitch(speed);
                                        }
                                        else
                                            if (par == 7)
                                            {
                                                cout << "Приготовить кофе? Да(1)/Нет(0)" << endl;
                                                cin >> kitch.coffee;
                                                coffee_machine();
                                            }
                                            else
                                            {
                                                cout << "Выберите пункт из предложенных!" << endl;
                                            }
                    cout << "Желаете выбрать еще один параметр? Да(1)/Нет(0)" << endl;
                    cin >> f_menu_par;
                } while (f_menu_par);
            else
                if (room == 3)
                    do
                    {
                        menu_bed();
                        cin >> par;
                        if (par == 1)
                        {
                            cout << "Введите желаемую температуру воздуха (в °С): ";
                            cin >> t;
                            air_temp_bed(t);
                        }
                        else
                            if (par == 2)
                            {
                                cout << "Введите желаемую влажность воздуха (в %): ";
                                cin >> hum;
                                air_hum_bed(hum);
                            }
                            else
                                if (par == 3)
                                {
                                    cout << "Введите желаемую концентрацию CO2 (в %): ";
                                    cin >> co2;
                                    conc_co2_bed(co2);
                                }
                                else
                                    if (par == 4)
                                    {
                                        cout << "Введите желаемую яркость света (в %): ";
                                        cin >> bright;
                                        brightness_bed(bright);
                                    }
                                    else
                                        if (par == 5)
                                        {
                                            cout << "Включить (1) или выключить (0) свет?" << endl;
                                            cin >> light;
                                            if (light == 1 && bed.param_bed.light != 1)
                                            {
                                                bed.param_bed.light = 1;
                                                light_bed();
                                            }
                                            else
                                                if (light == 1)
                                                {
                                                    cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                    cin >> light;
                                                    if (light == 1)
                                                    {
                                                        bed.param_bed.light = 0;
                                                        light_bed();
                                                    }
                                                }
                                                else
                                                    if (bed.param_bed.light == 0)
                                                    {
                                                        cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                        cin >> light;
                                                        if (light == 1)
                                                        {
                                                            bed.param_bed.light = 1;
                                                            light_bed();
                                                        }
                                                    }
                                                    else
                                                    {
                                                        bed.param_bed.light = 0;
                                                        light_bed();
                                                    }
                                        }
                                        else
                                            if (par == 6)
                                            {
                                                cout << "Введите желаемую скорость вентиляции: ";
                                                cin >> speed;
                                                vent_speed_bed(speed);
                                            }
                                            else
                                            {
                                                cout << "Выберите пункт из предложенных!" << endl;
                                            }
                        cout << "Желаете выбрать еще один параметр? Да(1)/Нет(0)" << endl;
                        cin >> f_menu_par;
                    } while (f_menu_par);
                else
                    if (room == 4)
                        do
                        {
                            menu_bath();
                            cin >> par;
                            if (par == 1)
                            {
                                cout << "Введите желаемую температуру воздуха (в °С): ";
                                cin >> t;
                                air_temp_bath(t);
                            }
                            else
                                if (par == 2)
                                {
                                    cout << "Введите желаемую влажность воздуха (в %): ";
                                    cin >> hum;
                                    air_hum_bath(hum);
                                }
                                else
                                    if (par == 3)
                                    {
                                        cout << "Введите желаемую концентрацию CO2 (в %): ";
                                        cin >> co2;
                                        conc_co2_bath(co2);
                                    }
                                    else
                                        if (par == 4)
                                        {
                                            cout << "Введите желаемую яркость света (в %): ";
                                            cin >> bright;
                                            brightness_bath(bright);
                                        }
                                        else
                                            if (par == 5)
                                            {
                                                cout << "Включить (1) или выключить (0) свет?" << endl;
                                                cin >> light;
                                                if (light == 1 && bath.param_bath.light != 1)
                                                {
                                                    bath.param_bath.light = 1;
                                                    light_bath();
                                                }
                                                else
                                                    if (light == 1)
                                                    {
                                                        cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                        cin >> light;
                                                        if (light == 1)
                                                        {
                                                            bath.param_bath.light = 0;
                                                            light_bath();
                                                        }
                                                    }
                                                    else
                                                        if (bath.param_bath.light == 0)
                                                        {
                                                            cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                            cin >> light;
                                                            if (light == 1)
                                                            {
                                                                bath.param_bath.light = 1;
                                                                light_bath();
                                                            }
                                                        }
                                                        else
                                                        {
                                                            bath.param_bath.light = 0;
                                                            light_bath();
                                                        }
                                            }
                                            else
                                                if (par == 6)
                                                {
                                                    cout << "Введите желаемую скорость вентиляции: ";
                                                    cin >> speed;
                                                    vent_speed_bath(speed);
                                                }
                                                else
                                                    if (par == 7)
                                                    {
                                                        cout << "Набрать воду в ванную? Да(1)/Нет(0)" << endl;
                                                        cin >> bath.flag_water;
                                                        water_bath();
                                                    }
                                                    else
                                                    {
                                                        cout << "Выберите пункт из предложенных!" << endl;
                                                    }
                            cout << "Желаете выбрать еще один параметр? Да(1)/Нет(0)" << endl;
                            cin >> f_menu_par;
                        } while (f_menu_par);
                    else
                        if (room == 5)
                            do
                            {
                                menu_wine();
                                cin >> par;
                                if (par == 1)
                                {
                                    cout << "Введите желаемую температуру воздуха (в °С): ";
                                    cin >> t;
                                    air_temp_wine(t);
                                }
                                else
                                    if (par == 2)
                                    {
                                        cout << "Введите желаемую влажность воздуха (в %): ";
                                        cin >> hum;
                                        air_hum_wine(hum);
                                    }
                                    else
                                        if (par == 3)
                                        {
                                            cout << "Введите желаемую концентрацию CO2 (в %): ";
                                            cin >> co2;
                                            conc_co2_wine(co2);
                                        }
                                        else
                                            if (par == 4)
                                            {
                                                cout << "Введите желаемую яркость света (в %): ";
                                                cin >> bright;
                                                brightness_wine(bright);
                                            }
                                            else
                                                if (par == 5)
                                                {
                                                    cout << "Включить (1) или выключить (0) свет?" << endl;
                                                    cin >> light;
                                                    if (light == 1 && wine.param_wine.light != 1)
                                                    {
                                                        wine.param_wine.light = 1;
                                                        light_wine();
                                                    }
                                                    else
                                                        if (light == 1)
                                                        {
                                                            cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                            cin >> light;
                                                            if (light == 1)
                                                            {
                                                                wine.param_wine.light = 0;
                                                                light_wine();
                                                            }
                                                        }
                                                        else
                                                            if (wine.param_wine.light == 0)
                                                            {
                                                                cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                                cin >> light;
                                                                if (light == 1)
                                                                {
                                                                    wine.param_wine.light = 1;
                                                                    light_wine();
                                                                }
                                                            }
                                                            else
                                                            {
                                                                wine.param_wine.light = 0;
                                                                light_wine();
                                                            }
                                                }
                                                else
                                                    if (par == 6)
                                                    {
                                                        cout << "Введите желаемую скорость вентиляции: ";
                                                        cin >> speed;
                                                        vent_speed_wine(speed);
                                                    }
                                                    else
                                                    {
                                                        cout << "Выберите пункт из предложенных!" << endl;
                                                    }
                                cout << "Желаете выбрать еще один параметр? Да(1)/Нет(0)" << endl;
                                cin >> f_menu_par;
                            } while (f_menu_par);
                        else
                        {
                            cout << "Выберите комнату из предложенных!" << endl;
                        }
                        cout << "Желаете выбрать другую комнату? Да(1)/Нет(0)" << endl;
                        cin >> f_menu_rooms;
    } while (f_menu_rooms);
}