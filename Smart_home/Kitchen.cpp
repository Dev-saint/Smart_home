#include "Kitchen.h"

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
Kitchen::Kitchen()
{
    air_temp = 0;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;
    coffee = 0;
}

// Конструктор с одним параметром
Kitchen::Kitchen(float temp) : Parametrs(temp)
{
    /*air_temp = temp;
    air_hum = 0;
    conc_co2 = 0;
    brightness = 0;
    light = 0;
    vent_speed = 0;*/
    coffee = 0;
}

//Конструктор с параметрами
Kitchen::Kitchen(float temp, float hum, float co2, int bright, int l, int speed, int cof) : Parametrs(temp, hum, co2, bright, l, speed)
{
    /*air_temp = temp;
    air_hum = hum;
    conc_co2 = co2;
    brightness = bright;
    light = l;
    vent_speed = speed;*/
    coffee = cof;
}

//Функции получения данных из полей
/*float Kitchen::Get_air_temp_kitch()
{
    return Get_air_temp();
}

float Kitchen::Get_air_hum_kitch()
{
    return Get_air_hum();
}

float Kitchen::Get_conc_co2_kitch()
{
    return param_kitch->Get_conc_co2();
}

int Kitchen::Get_brightness_kitch()
{
    return param_kitch->Get_brightness();
}

int Kitchen::Get_light_kitch()
{
    return param_kitch->Get_light();
}

int Kitchen::Get_vent_speed_kitch()
{
    return param_kitch->Get_vent_speed();
}*/

int Kitchen::Get_coffee()
{
    return coffee;
}

//Функции инициализации полей
/*void Kitchen::Set_air_temp_kitch(float temp)
{
    param_kitch->Set_air_temp(temp);
}

void Kitchen::Set_air_hum_kitch(float hum)
{
    param_kitch->Set_air_hum(hum);
}

void Kitchen::Set_conc_co2_kitch(float co2)
{
    param_kitch->Set_conc_co2(co2);
}

void Kitchen::Set_brightness_kitch(int bright)
{
    param_kitch->Set_brightness(bright);
}

void Kitchen::Set_light_kitch(int l)
{
    param_kitch->Set_light(l);
}

void Kitchen::Set_vent_speed_kitch(int speed)
{
    param_kitch->Set_vent_speed(speed);
}
*/
void Kitchen::Set_coffee(int cof)
{
    coffee = cof;
}

//Деструктор
Kitchen::~Kitchen()
{
}

//Инициализация класса кухня
/*void Kitchen::Set_parametrs_kitch(float temp, float hum, float co2, int bright, int l, int speed, int cof)
{
    param_kitch->Set_air_temp(temp);
    param_kitch->Set_air_hum(hum);
    param_kitch->Set_conc_co2(co2);
    param_kitch->Set_brightness(bright);
    param_kitch->Set_light(l);
    param_kitch->Set_vent_speed(speed);
    coffee = cof;
}*/

//Вывод параметров кухни на экран
void Kitchen::DisplayKitch()
{
    cout << endl << "Темература воздуха на кухне: " << air_temp << " °С" << endl;
    cout << "Влажность воздуха на кухне: " << air_hum << " %" << endl;
    cout << "Концентрация CO2 на кухне: " << conc_co2 << " %" << endl;
    cout << "Яркость света на кухне: " << brightness << " %" << endl;
    cout << "Флажок света на кухне: " << light << endl;
    cout << "Скорость вентиляции на кухне: " << vent_speed << " %" << endl;
    cout << "Флажок кофе на кухне: " << coffee << endl;
}

void Kitchen::coffee_machine() //Функция приготовления кофе
{
    if (coffee)
    {
        cout << "Кофе готовится..." << endl;
        Sleep(5000);
        cout << "Кофе готов!" << endl;
    }
}

/*// Конструктор копии
Kitchen::Kitchen(Kitchen& Class)
{
    // Поверхностное копирование, т.к. это не указатель
    param_kitch->Set_air_temp(Class.Get_air_temp_kitch());

    // Поверхностное копирование, т.к. это не указатель
    param_kitch->Set_air_hum(Class.Get_air_hum_kitch());

    // Поверхностное копирование, т.к. это не указатель
    param_kitch->Set_conc_co2(Class.Get_conc_co2_kitch());

    // Поверхностное копирование, т.к. это не указатель
    param_kitch->Set_brightness(Class.Get_brightness_kitch());

    // Поверхностное копирование, т.к. это не указатель
    param_kitch->Set_light(Class.Get_light_kitch());

    // Поверхностное копирование, т.к. это не указатель
    param_kitch->Set_vent_speed(Class.Get_vent_speed_kitch());

    // Поверхностное копирование, т.к. это не указатель
    coffee = Class.coffee;
}

// Перегрузка функции присваивания
Kitchen& Kitchen::operator=(Kitchen& Class)
{
    // Проверка на самоприсваивание
    if (this == &Class)
        return *this;

    param_kitch->Set_air_temp(Class.Get_air_temp_kitch());

    param_kitch->Set_air_hum(Class.Get_air_hum_kitch());

    param_kitch->Set_conc_co2(Class.Get_conc_co2_kitch());

    param_kitch->Set_brightness(Class.Get_brightness_kitch());

    param_kitch->Set_light(Class.Get_light_kitch());

    param_kitch->Set_vent_speed(Class.Get_vent_speed_kitch());

    coffee = Class.coffee;

    return *this;
}*/
