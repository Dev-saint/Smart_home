#pragma once

void air_temp_kitch(float t); //Функция именения температуры воздуха на кухне
void air_hum_kitch(float hum); //Функция изменения влажности воздуха на кухне
void conc_co2_kitch(float co2); //Функция изменения концентрации CO2 на кухне
void brightness_kitch(int bright); //Функция изменения яркости на кухне
void light_kitch(); //Функция включения/выключения света на кухне
void vent_speed_kitch(int speed); //Функция изменения скорости вентиляции на кухне
void coffee_machine(); //Функция приготовления кофе
void menu_kitch(); // Функция вызова меню параметров для кухни

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