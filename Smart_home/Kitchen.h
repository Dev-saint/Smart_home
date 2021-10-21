#pragma once

void air_temp_kitch(int t); //Функция именения температуры воздуха на кухне
void air_hum_kitch(); //Функция изменения влажности воздуха на кухне
void conc_co2_kitch(); //Функция изменения концентрации CO2 на кухне
void brightness_kitch(); //Функция изменения яркости на кухне
void light_kitch(); //Функция включения/выключения света на кухне
void vent_speed_kitch(); //Функция изменения скорости вентиляции на кухне
void coffee_machine(); //Функция приготовления кофе

struct kitchen
{
    float air_temp; //Температура воздуха
    float air_hum; //Влажность воздуха
    int coffee; //Приготовление кофе после сна
    float conc_co2; //Концентрация CO2
    int vent_speed; //Скорость вентиляции
    int brightness; //Яркость света
    int light; //Включение/выключение света
}kitch;