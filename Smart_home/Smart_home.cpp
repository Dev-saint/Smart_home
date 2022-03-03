#include "Wine_vault.h"

int main()
{
    system("chcp 1251");
    system("cls");
    float t, co2, hum;
    int f_menu_rooms = 0, room, par, f_menu_par = 0, bright, speed, light;
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
    bed.param_bed.light = 0;
    toil.param_toil.light = 0;
    kitch.param_kitch.light = 0;
    bath.param_bath.light = 0;
    wine.param_wine.light = 0;
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
                    air_temp_toil(toil,t);
                }
                else
                    if (par == 2)
                    {
                        cout << "Введите желаемую влажность воздуха (в %): ";
                        cin >> hum;
                        air_hum_toil(toil, hum);
                    }
                    else
                        if (par == 3)
                        {
                            cout << "Введите желаемую концентрацию CO2 (в %): ";
                            cin >> co2;
                            conc_co2_toil(toil, co2);
                        }
                        else
                            if (par == 4)
                            {
                                cout << "Введите желаемую яркость света (в %): ";
                                cin >> bright;
                                brightness_toil(toil, bright);
                            }
                            else
                                if (par == 5)
                                {
                                    cout << "Включить (1) или выключить (0) свет?" << endl;
                                    cin >> light;
                                    if (light == 1 && toil.param_toil.light != 1)
                                    {
                                        toil.param_toil.light = 1;
                                        light_toil(toil);
                                    }
                                    else
                                        if (light == 1)
                                        {
                                            cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                            cin >> light;
                                            if (light == 1)
                                            {
                                                toil.param_toil.light = 0;
                                                light_toil(toil);
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
                                                    light_toil(toil);
                                                }
                                            }
                                            else
                                            {
                                                toil.param_toil.light = 0;
                                                light_toil(toil);
                                            }
                                }
                                else
                                    if (par == 6)
                                    {
                                        cout << "Введите желаемую скорость вентиляции: ";
                                        cin >> speed;
                                        vent_speed_toil(toil, speed);
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
                        air_temp_kitch(kitch,t);
                    }
                    else
                        if (par == 2)
                        {
                            cout << "Введите желаемую влажность воздуха (в %): ";
                            cin >> hum;
                            air_hum_kitch(kitch, hum);
                        }
                        else
                            if (par == 3)
                            {
                                cout << "Введите желаемую концентрацию CO2 (в %): ";
                                cin >> co2;
                                conc_co2_kitch(kitch, co2);
                            }
                            else
                                if (par == 4)
                                {
                                    cout << "Введите желаемую яркость света (в %): ";
                                    cin >> bright;
                                    brightness_kitch(kitch, bright);
                                }
                                else
                                    if (par == 5)
                                    {
                                        cout << "Включить (1) или выключить (0) свет?" << endl;
                                        cin >> light;
                                        if (light == 1 && kitch.param_kitch.light != 1)
                                        {
                                            kitch.param_kitch.light = 1;
                                            light_kitch(kitch);
                                        }
                                        else
                                            if (light == 1)
                                            {
                                                cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                cin >> light;
                                                if (light == 1)
                                                {
                                                    kitch.param_kitch.light = 0;
                                                    light_kitch(kitch);
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
                                                        light_kitch(kitch);
                                                    }
                                                }
                                                else
                                                {
                                                    kitch.param_kitch.light = 0;
                                                    light_kitch(kitch);
                                                }
                                    }
                                    else
                                        if (par == 6)
                                        {
                                            cout << "Введите желаемую скорость вентиляции: ";
                                            cin >> speed;
                                            vent_speed_kitch(kitch, speed);
                                        }
                                        else
                                            if (par == 7)
                                            {
                                                cout << "Приготовить кофе? Да(1)/Нет(0)" << endl;
                                                cin >> kitch.coffee;
                                                coffee_machine(kitch);
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
                            air_temp_bed(bed,t);
                        }
                        else
                            if (par == 2)
                            {
                                cout << "Введите желаемую влажность воздуха (в %): ";
                                cin >> hum;
                                air_hum_bed(bed, hum);
                            }
                            else
                                if (par == 3)
                                {
                                    cout << "Введите желаемую концентрацию CO2 (в %): ";
                                    cin >> co2;
                                    conc_co2_bed(bed, co2);
                                }
                                else
                                    if (par == 4)
                                    {
                                        cout << "Введите желаемую яркость света (в %): ";
                                        cin >> bright;
                                        brightness_bed(bed, bright);
                                    }
                                    else
                                        if (par == 5)
                                        {
                                            cout << "Включить (1) или выключить (0) свет?" << endl;
                                            cin >> light;
                                            if (light == 1 && bed.param_bed.light != 1)
                                            {
                                                bed.param_bed.light = 1;
                                                light_bed(bed);
                                            }
                                            else
                                                if (light == 1)
                                                {
                                                    cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                    cin >> light;
                                                    if (light == 1)
                                                    {
                                                        bed.param_bed.light = 0;
                                                        light_bed(bed);
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
                                                            light_bed(bed);
                                                        }
                                                    }
                                                    else
                                                    {
                                                        bed.param_bed.light = 0;
                                                        light_bed(bed);
                                                    }
                                        }
                                        else
                                            if (par == 6)
                                            {
                                                cout << "Введите желаемую скорость вентиляции: ";
                                                cin >> speed;
                                                vent_speed_bed(bed, speed);
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
                                air_temp_bath(bath,t);
                            }
                            else
                                if (par == 2)
                                {
                                    cout << "Введите желаемую влажность воздуха (в %): ";
                                    cin >> hum;
                                    air_hum_bath(bath, hum);
                                }
                                else
                                    if (par == 3)
                                    {
                                        cout << "Введите желаемую концентрацию CO2 (в %): ";
                                        cin >> co2;
                                        conc_co2_bath(bath, co2);
                                    }
                                    else
                                        if (par == 4)
                                        {
                                            cout << "Введите желаемую яркость света (в %): ";
                                            cin >> bright;
                                            brightness_bath(bath, bright);
                                        }
                                        else
                                            if (par == 5)
                                            {
                                                cout << "Включить (1) или выключить (0) свет?" << endl;
                                                cin >> light;
                                                if (light == 1 && bath.param_bath.light != 1)
                                                {
                                                    bath.param_bath.light = 1;
                                                    light_bath(bath);
                                                }
                                                else
                                                    if (light == 1)
                                                    {
                                                        cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                        cin >> light;
                                                        if (light == 1)
                                                        {
                                                            bath.param_bath.light = 0;
                                                            light_bath(bath);
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
                                                                light_bath(bath);
                                                            }
                                                        }
                                                        else
                                                        {
                                                            bath.param_bath.light = 0;
                                                            light_bath(bath);
                                                        }
                                            }
                                            else
                                                if (par == 6)
                                                {
                                                    cout << "Введите желаемую скорость вентиляции: ";
                                                    cin >> speed;
                                                    vent_speed_bath(bath, speed);
                                                }
                                                else
                                                    if (par == 7)
                                                    {
                                                        cout << "Набрать воду в ванную? Да(1)/Нет(0)" << endl;
                                                        cin >> bath.flag_water;
                                                        water_bath(bath);
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
                                    air_temp_wine(wine,t);
                                }
                                else
                                    if (par == 2)
                                    {
                                        cout << "Введите желаемую влажность воздуха (в %): ";
                                        cin >> hum;
                                        air_hum_wine(wine, hum);
                                    }
                                    else
                                        if (par == 3)
                                        {
                                            cout << "Введите желаемую концентрацию CO2 (в %): ";
                                            cin >> co2;
                                            conc_co2_wine(wine, co2);
                                        }
                                        else
                                            if (par == 4)
                                            {
                                                cout << "Введите желаемую яркость света (в %): ";
                                                cin >> bright;
                                                brightness_wine(wine, bright);
                                            }
                                            else
                                                if (par == 5)
                                                {
                                                    cout << "Включить (1) или выключить (0) свет?" << endl;
                                                    cin >> light;
                                                    if (light == 1 && wine.param_wine.light != 1)
                                                    {
                                                        wine.param_wine.light = 1;
                                                        light_wine(wine);
                                                    }
                                                    else
                                                        if (light == 1)
                                                        {
                                                            cout << "Свет уже включен. Выключить свет? Да(1)/Нет(0)" << endl;
                                                            cin >> light;
                                                            if (light == 1)
                                                            {
                                                                wine.param_wine.light = 0;
                                                                light_wine(wine);
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
                                                                    light_wine(wine);
                                                                }
                                                            }
                                                            else
                                                            {
                                                                wine.param_wine.light = 0;
                                                                light_wine(wine);
                                                            }
                                                }
                                                else
                                                    if (par == 6)
                                                    {
                                                        cout << "Введите желаемую скорость вентиляции: ";
                                                        cin >> speed;
                                                        vent_speed_wine(wine, speed);
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
                            air_temp_kitch(*pkitch, 20);
                            air_hum_bath(*pbath, 55);
                            conc_co2_toil(*ptoil, 10);
                            brightness_bed(*pbed, 40);
                            vent_speed_wine(*pwine, 55);
                        }
    } while (f_menu_rooms);
}