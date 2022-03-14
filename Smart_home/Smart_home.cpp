﻿#include "Wine_vault.h"

// Инициализация статическоко компанента (указателя):
parametrs* parametrs::lastPar = NULL;

int main()
{
    system("chcp 1251");
    system("cls");
    float t, co2, hum;
    int f_menu_rooms = 0, room, par, f_menu_par = 0, bright, speed, light, coffee, water, i;
    toilet toil;
    kitchen kitch;
    bedroom bed;
    bathroom bath;
    wine_vault wine;
    toilet* ptoil = new toilet;
    kitchen* pkitch = new kitchen;
    bedroom* pbed = new bedroom;
    bathroom* pbath = new bathroom;
    wine_vault* pwine = new wine_vault;
    toilet* ktoil = new toilet[3];
    toilet* mas_toil[5];
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
                    toil.Set_air_temp_toil(t);
                    cout << "Температура воздуха в туалете будет изменена до " << toil.Get_air_temp_toil() << " °С" << endl;
                }
                else
                    if (par == 2)
                    {
                        cout << "Введите желаемую влажность воздуха (в %): ";
                        cin >> hum;
                        toil.Set_air_hum_toil(hum);
                        cout << "Влажность воздуха в туалете будет изменена до " << toil.Get_air_hum_toil() << " %" << endl;
                    }
                    else
                        if (par == 3)
                        {
                            cout << "Введите желаемую концентрацию CO2 (в %): ";
                            cin >> co2;
                            toil.Set_conc_co2_toil(co2);
                            cout << "Концентрация CO2 в туалете будет изменена до " << toil.Get_conc_co2_toil() << " %" << endl;
                        }
                        else
                            if (par == 4)
                            {
                                cout << "Введите желаемую яркость света (в %): ";
                                cin >> bright;
                                toil.Set_brightness_toil(bright);
                                cout << "Яркость в туалете будет изменена до " << toil.Get_brightness_toil() << " %" << endl;
                            }
                            else
                                if (par == 5)
                                {
                                    cout << "Включить (1) или выключить (0) свет?" << endl;
                                    cin >> light;
                                    if (light == 1 && toil.Get_light_toil() != 1)
                                    {
                                        toil.Set_light_toil(light);
                                        cout << "Свет в туалете включен" << endl;
                                    }
                                    else
                                        if (light == 1)
                                        {
                                            cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                            cin >> light;
                                            if (light == 1)
                                            {
                                                toil.Set_light_toil(light);
                                                cout << "Свет в туалете выключен" << endl;
                                            }
                                        }
                                        else
                                            if (toil.Get_light_toil() == 0)
                                            {
                                                cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                cin >> light;
                                                if (light == 1)
                                                {
                                                    toil.Set_light_toil(light);
                                                    cout << "Свет в туалете включен" << endl;
                                                }
                                            }
                                            else
                                            {
                                                toil.Set_light_toil(light);
                                                cout << "Свет в туалете выключен" << endl;
                                            }
                                }
                                else
                                    if (par == 6)
                                    {
                                        cout << "Введите желаемую скорость вентиляции: ";
                                        cin >> speed;
                                        toil.Set_vent_speed_toil(speed);
                                        cout << "Скорость вентиляции в туалете будет изменена до " << toil.Get_brightness_toil() << " %" << endl;
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
                        kitch.Set_air_temp_kitch(t);
                        cout << "Температура воздуха на кухне будет изменена до " << kitch.Get_air_temp_kitch() << " °С" << endl;
                    }
                    else
                        if (par == 2)
                        {
                            cout << "Введите желаемую влажность воздуха (в %): ";
                            cin >> hum;
                            kitch.Set_air_hum_kitch(hum);
                            cout << "Влажность воздуха на кухне будет изменена до " << kitch.Get_air_hum_kitch() << " %" << endl;
                        }
                        else
                            if (par == 3)
                            {
                                cout << "Введите желаемую концентрацию CO2 (в %): ";
                                cin >> co2;
                                kitch.Set_conc_co2_kitch(co2);
                                cout << "Концентрация CO2 на кухне будет изменена до " << kitch.Get_conc_co2_kitch() << " %" << endl;
                            }
                            else
                                if (par == 4)
                                {
                                    cout << "Введите желаемую яркость света (в %): ";
                                    cin >> bright;
                                    kitch.Set_brightness_kitch(bright);
                                    cout << "Яркость света на кухне будет изменена до " << kitch.Get_brightness_kitch() << " %" << endl;
                                }
                                else
                                    if (par == 5)
                                    {
                                        cout << "Включить (1) или выключить (0) свет?" << endl;
                                        cin >> light;
                                        if (light == 1 && kitch.Get_light_kitch() != 1)
                                        {
                                            kitch.Set_light_kitch(light);
                                            cout << "Свет на кухне включен" << endl;
                                        }
                                        else
                                            if (light == 1)
                                            {
                                                cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                cin >> light;
                                                if (light == 1)
                                                {
                                                    kitch.Set_light_kitch(light);
                                                    cout << "Свет на кухне выключен" << endl;
                                                }
                                            }
                                            else
                                                if (kitch.Get_light_kitch() == 0)
                                                {
                                                    cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                    cin >> light;
                                                    if (light == 1)
                                                    {
                                                        kitch.Set_light_kitch(light);
                                                        cout << "Свет на кухне включен" << endl;
                                                    }
                                                }
                                                else
                                                {
                                                    kitch.Set_light_kitch(light);
                                                    cout << "Свет на кухне выключен" << endl;
                                                }
                                    }
                                    else
                                        if (par == 6)
                                        {
                                            cout << "Введите желаемую скорость вентиляции: ";
                                            cin >> speed;
                                            kitch.Set_vent_speed_kitch(speed);
                                            cout << "Скорость вентиляции на кухне будет изменена до " << kitch.Get_vent_speed_kitch() << " %" << endl;
                                        }
                                        else
                                            if (par == 7)
                                            {
                                                cout << "Приготовить кофе? Да(1)/Нет(0)" << endl;
                                                cin >> coffee;
                                                kitch.Set_coffee(coffee);
                                                kitch.coffee_machine();
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
                            bed.Set_air_temp_bed(t);
                            cout << "Температура воздуха в спальне будет изменена до " << bed.Get_air_temp_bed() << " °С" << endl;
                        }
                        else
                            if (par == 2)
                            {
                                cout << "Введите желаемую влажность воздуха (в %): ";
                                cin >> hum;
                                bed.Set_air_hum_bed(hum);
                                cout << "Влажность воздуха в спальне будет изменена до " << bed.Get_air_hum_bed() << " %" << endl;
                            }
                            else
                                if (par == 3)
                                {
                                    cout << "Введите желаемую концентрацию CO2 (в %): ";
                                    cin >> co2;
                                    bed.Set_conc_co2_bed(co2);
                                    cout << "Концентрация CO2 в спальне будет изменена до " << bed.Get_conc_co2_bed() << " %" << endl;
                                }
                                else
                                    if (par == 4)
                                    {
                                        cout << "Введите желаемую яркость света (в %): ";
                                        cin >> bright;
                                        bed.Set_brightness_bed(bright);
                                        cout << "Яркость света в спальне будет изменена до " << bed.Get_brightness_bed() << " %" << endl;
                                    }
                                    else
                                        if (par == 5)
                                        {
                                            cout << "Включить (1) или выключить (0) свет?" << endl;
                                            cin >> light;
                                            if (light == 1 && bed.Get_light_bed() != 1)
                                            {
                                                bed.Set_light_bed(light);
                                                cout << "Свет в спальне включен" << endl;
                                            }
                                            else
                                                if (light == 1)
                                                {
                                                    cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                    cin >> light;
                                                    if (light == 1)
                                                    {
                                                        bed.Set_light_bed(light);
                                                        cout << "Свет в спальне выключен" << endl;
                                                    }
                                                }
                                                else
                                                    if (bed.Get_light_bed() == 0)
                                                    {
                                                        cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                        cin >> light;
                                                        if (light == 1)
                                                        {
                                                            bed.Set_light_bed(light);
                                                            cout << "Свет в спальне включен" << endl;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        bed.Set_light_bed(light);
                                                        cout << "Свет в спальне выключен" << endl;
                                                    }
                                        }
                                        else
                                            if (par == 6)
                                            {
                                                cout << "Введите желаемую скорость вентиляции: ";
                                                cin >> speed;
                                                bed.Set_vent_speed_bed(speed);
                                                cout << "Скорость вентиляции в спальне будет изменена до " << bed.Get_vent_speed_bed() << " %" << endl;
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
                                bath.Set_air_temp_bath(t);
                                cout << "Температура воздуха в ванной будет изменена до " << bath.Get_air_temp_bath() << " °С" << endl;
                            }
                            else
                                if (par == 2)
                                {
                                    cout << "Введите желаемую влажность воздуха (в %): ";
                                    cin >> hum;
                                    bath.Set_air_hum_bath(hum);
                                    cout << "Влажность воздуха в ванной будет изменена до " << bath.Get_air_hum_bath() << " %" << endl;
                                }
                                else
                                    if (par == 3)
                                    {
                                        cout << "Введите желаемую концентрацию CO2 (в %): ";
                                        cin >> co2;
                                        bath.Set_conc_co2_bath(co2);
                                        cout << "Концентрация CO2 в ванной будет изменена до " << bath.Get_conc_co2_bath() << " %" << endl;
                                    }
                                    else
                                        if (par == 4)
                                        {
                                            cout << "Введите желаемую яркость света (в %): ";
                                            cin >> bright;
                                            bath.Set_brightness_bath(bright);
                                            cout << "Яркость света в ванной будет изменена до " << bath.Get_brightness_bath() << " %" << endl;
                                        }
                                        else
                                            if (par == 5)
                                            {
                                                cout << "Включить (1) или выключить (0) свет?" << endl;
                                                cin >> light;
                                                if (light == 1 && bath.Get_light_bath() != 1)
                                                {
                                                    bath.Set_light_bath(light);
                                                    cout << "Свет в ванной включен" << endl;
                                                }
                                                else
                                                    if (light == 1)
                                                    {
                                                        cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                        cin >> light;
                                                        if (light == 1)
                                                        {
                                                            bath.Set_light_bath(light);
                                                            cout << "Свет в ванной выключен" << endl;
                                                        }
                                                    }
                                                    else
                                                        if (bath.Get_light_bath() == 0)
                                                        {
                                                            cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                            cin >> light;
                                                            if (light == 1)
                                                            {
                                                                bath.Set_light_bath(light);
                                                                cout << "Свет в ванной включен" << endl;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            bath.Set_light_bath(light);
                                                            cout << "Свет в ванной выключен" << endl;
                                                        }
                                            }
                                            else
                                                if (par == 6)
                                                {
                                                    cout << "Введите желаемую скорость вентиляции: ";
                                                    cin >> speed;
                                                    bath.Set_vent_speed_bath(speed);
                                                    cout << "Скорость вентиляции в ванной будет изменена до " << bath.Get_vent_speed_bath() << " %" << endl;
                                                }
                                                else
                                                    if (par == 7)
                                                    {
                                                        cout << "Набрать воду в ванную? Да(1)/Нет(0)" << endl;
                                                        cin >> water;
                                                        bath.Set_flag_water(water);
                                                        bath.water_bath();
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
                                    wine.Set_air_temp_wine(t);
                                    cout << "Температура воздуха в винном погребе будет изменена до " << wine.Get_air_temp_wine() << " °С" << endl;
                                }
                                else
                                    if (par == 2)
                                    {
                                        cout << "Введите желаемую влажность воздуха (в %): ";
                                        cin >> hum;
                                        wine.Set_air_hum_wine(hum);
                                        cout << "Влажность воздуха в винном погребе будет изменена до " << wine.Get_air_hum_wine() << " %" << endl;
                                    }
                                    else
                                        if (par == 3)
                                        {
                                            cout << "Введите желаемую концентрацию CO2 (в %): ";
                                            cin >> co2;
                                            wine.Set_conc_co2_wine(co2);
                                            cout << "Концентрация CO2 в винном погребе будет изменена до " << wine.Get_conc_co2_wine() << " %" << endl;
                                        }
                                        else
                                            if (par == 4)
                                            {
                                                cout << "Введите желаемую яркость света (в %): ";
                                                cin >> bright;
                                                wine.Set_brightness_wine(bright);
                                                cout << "Яркость света в винном погребе будет изменена до " << wine.Get_brightness_wine() << " %" << endl;
                                            }
                                            else
                                                if (par == 5)
                                                {
                                                    cout << "Включить (1) или выключить (0) свет?" << endl;
                                                    cin >> light;
                                                    if (light == 1 && wine.Get_light_wine() != 1)
                                                    {
                                                        wine.Set_light_wine(light);
                                                        cout << "Свет в ванной включен" << endl;
                                                    }
                                                    else
                                                        if (light == 1)
                                                        {
                                                            cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                            cin >> light;
                                                            if (light == 1)
                                                            {
                                                                wine.Set_light_wine(light);
                                                                cout << "Свет в ванной выключен" << endl;
                                                            }
                                                        }
                                                        else
                                                            if (wine.Get_light_wine() == 0)
                                                            {
                                                                cout << "Свет уже выключен. Включить свет? Да(1)/Нет(0)" << endl;
                                                                cin >> light;
                                                                if (light == 1)
                                                                {
                                                                    wine.Set_light_wine(light);
                                                                    cout << "Свет в ванной включен" << endl;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                wine.Set_light_wine(light);
                                                                cout << "Свет в ванной выключен" << endl;
                                                            }
                                                }
                                                else
                                                    if (par == 6)
                                                    {
                                                        cout << "Введите желаемую скорость вентиляции: ";
                                                        cin >> speed;
                                                        wine.Set_vent_speed_wine(speed);
                                                        cout << "Скорость вентиляции в винном погребе будет изменена до " << wine.Get_vent_speed_wine() << " %" << endl;
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
                        if (!f_menu_rooms)
                        {
                            cout << endl << "Работа с динамическими объектами:" << endl;
                            (*pkitch).Set_air_temp_kitch(20);
                            cout << "Температура воздуха на кухне будет изменена до " << (*pkitch).Get_air_temp_kitch() << " °С" << endl;
                            (*pbath).Set_air_hum_bath(55);
                            cout << "Влажность воздуха в ванной будет изменена до " << (*pbath).Get_air_hum_bath() << " %" << endl;
                            ptoil->Set_conc_co2_toil(10);
                            cout << "Концентрация CO2 в туалете будет изменена до " << ptoil->Get_conc_co2_toil() << " %" << endl;
                            pbed->Set_brightness_bed(40);
                            cout << "Яркость света в спальне будет изменена до " << pbed->Get_brightness_bed() << " %" << endl;
                            pwine->Set_vent_speed_wine(55);
                            cout << "Скорость вентиляции в винном погребе будет изменена до " << pwine->Get_vent_speed_wine() << " %" << endl;
                            int s = 0;
                            cout << "*************************Динамический массив объектов класса Туалет**************************" << endl;
                            for (i = 0; i < 3; i++)
                            {
                                ktoil[i].Set_vent_speed_toil(20*(i+1));
                                cout << "Скорость вентиляции в туалете №" << i + 1 << " = " << ktoil[i].Get_vent_speed_toil() << endl;
                            }
                            cout << "*************************Массив динамических объектов класса Туалет**************************" << endl;

                            for (int i = 0; i < 5; i++)
                            {
                                mas_toil[i] = new toilet;
                                cout << endl << "Туалет №" << i + 1 << endl;
                                mas_toil[i]->Set_parametrs_toil(20 * i, 60 + i, 10 - i, 75 / (i + 1), 1, 80 / (i + 3));
                                mas_toil[i]->OutToil();
                            }

                            cout << "1)" << endl;
                            cout << "=================================================================" << endl;
                            cout << "Тест возврата значений из метода класса Parametrs через ссылку (&)" << endl;
                            parametrs param[4];
                            param[0].Set_parametrs(20, 50, 10, 50, 1, 30);

                            float temperature; float& t = temperature; param[0].Get_air_temp_link(t);
                            float humidity; float& h = humidity; param[0].Get_air_hum_link(h);
                            float concentration; float& c = concentration; param[0].Get_conc_co2_link(c);
                            int bright; int& b = bright; param[0].Get_brightness_link(b);
                            int ligh; int& l = ligh; param[0].Get_light_link(l);
                            int spd; int& sp = spd; param[0].Get_vent_speed_link(sp);

                            cout << t << endl;
                            cout << h << endl;
                            cout << c << endl;
                            cout << b << endl;
                            cout << l << endl;
                            cout << sp << endl;

                            cout << "\n" << endl;

                            cout << "Тест возврата значений из метода класса Toilet через указатель (*)" << endl;
                            toilet toil_p;
                            toil_p.Set_parametrs_toil(20, 50, 10, 50, 1, 30);

                            float* temp_p = new float; toil_p.Get_air_temp_toil_point(temp_p);
                            float* hum_p = new float; toil_p.Get_air_hum_toil_point(hum_p);
                            float* co2_p = new float; toil_p.Get_conc_co2_toil_point(co2_p);
                            int* bright_p = new int; toil_p.Get_brightness_toil_point(bright_p);
                            int* light_p = new int; toil_p.Get_light_toil_point(light_p);
                            int* speed_p = new int; toil_p.Get_vent_speed_toil_point(speed_p);

                            cout << *temp_p << endl;
                            cout << *hum_p << endl;
                            cout << *co2_p << endl;
                            cout << *bright_p << endl;
                            cout << *light_p << endl;
                            cout << *speed_p << endl;

                            cout << "\n\n" << endl;

                            cout << "2)" << endl;
                            cout << "=================================================================" << endl;
                            cout << "Тест списка температур с использованием указателя \'this\'" << endl;

                            // Задание полей температуры объектов класса parametrs:
                            param[0].Set_air_temp(1);
                            param[1].Set_air_temp(2);
                            param[2].Set_air_temp(3);
                            param[3].Set_air_temp(4);

                            // Вызов статической компанентной функции:
                            parametrs::reprint();

                            // Включение созданных компанентов в двусвязанный список:
                            param[0].Add(); param[1].Add(); param[2].Add(); param[3].Add();

                            // Печать в обратном порядке значений элементов списка:
                            parametrs::reprint();

                            cout << endl;

                            cout << "3)" << endl;
                            cout << "=================================================================" << endl;
                            cout << "Дружественная функция задания температур классов \n \'туалет\' toilet, \'кухня\' kitchen, "
                                << "\'спальня\' bedroom и \'ванная\' bathroom:" << endl;

                            temp_set_all(toil, kitch, bed, bath, 20);
                            cout << "\nТемпература в туалете: " << toil.Get_air_temp_toil() << endl;
                            cout << "\nТемпература на кухне: " << kitch.Get_air_temp_kitch() << endl;
                            cout << "\nТемпература в спальне: " << bed.Get_air_temp_bed() << endl;
                            cout << "\nТемпература в ванной: " << bath.Get_air_temp_bath() << endl;

                            cout << "\n\n" << endl;

                            cout << "4)" << endl;
                            cout << "=================================================================" << endl;
                            cout << "Перегрузка оператора \'+\' для класса \'параметры\' parametrs" << endl;

                            parametrs parNorm;
                            parNorm.Set_parametrs(20, 50, 10, 60, 0, 0);
                            cout << "Прибавим к температуре объекта выше 5 градусов:" << endl;
                            parNorm = parNorm + 5;
                            cout << "Температура: " << parNorm.Get_air_temp() << endl;
                            cout << "\n" << endl;
                            cout << "Перегрузка оператора \'++\' (два варианта, префиксный и постфиксный) \n для класса \'параметры\' parametrs" << endl;
                            parNorm.Set_air_temp(20);
                            cout << "Температура: " << parNorm.Get_air_temp() << endl;
                            cout << "\nИспользование оператора \'++\' (префиксный):" << endl;
                            ++parNorm;
                            cout << "Температура: " << parNorm.Get_air_temp() << endl;
                            cout << "\nИспользование оператора \'++\' (постфиксный):" << endl;
                            parNorm++;
                            cout << "Температура: " << parNorm.Get_air_temp() << endl;
                            cout << "\n\n" << endl;
                        }
    } while (f_menu_rooms);
    delete pkitch;
    delete pbath;
    delete ptoil;
    delete pbed;
    delete pwine;
    delete[] ktoil;
    system("pause");
}