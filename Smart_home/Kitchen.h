#pragma once
#include "Parametrs.h"
#include "Toilet.h"

struct kitchen
{
    int coffee; //Приготовление кофе после сна
    parametrs param_kitch;
};

void air_temp_kitch(kitchen kitch1,float t); //Функция именения температуры воздуха на кухне
void air_hum_kitch(kitchen kitch1,float hum); //Функция изменения влажности воздуха на кухне
void conc_co2_kitch(kitchen kitch1,float co2); //Функция изменения концентрации CO2 на кухне
void brightness_kitch(kitchen kitch1,int bright); //Функция изменения яркости на кухне
void light_kitch(kitchen kitch1); //Функция включения/выключения света на кухне
void vent_speed_kitch(kitchen kitch1,int speed); //Функция изменения скорости вентиляции на кухне
void coffee_machine(kitchen kitch1); //Функция приготовления кофе
void menu_kitch(); // Функция вызова меню параметров для кухни

