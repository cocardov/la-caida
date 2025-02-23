#include "deriva.hh"
#include "../mercado_rural_2/mercado_rural_2.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace deriva
{
    bool elegir = true;

    void inic_nivel()
    {
        std::cout << " \n";
        std::cout << "  Avanzás cerca de 2km y no podés más. A unos 100 metros ves una estructura, pero caminar por \n";
        std::cout << "barro húmedo es demasiado cansador, debido al hambre y la sed creés que estás por perder la consciencia,\n";
        std::cout << "cuando el barro empieza a vibrar...\n";
        std::cout << " \n";
        std::cout << "  Del barro frente a vos surge lo que parece ser una estatua de tamaños colosales, en vez de cabeza tiene \n";
        std::cout << "una pirámide. No tiene rasgos faciales. De alguna manera empieza a levitar en el cielo. Te impresiona que \n";
        std::cout << "tenga tales dimensiones. \n";
        std::cout << " \n";
        std::cout << "1. Huír. \n";
        std::cout << "2. Esperar. \n";
        std::cout << "\n";

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                std::cout << " \n";
                std::cout << "  Sin dudarlo dos veces, seguís tus instintos y salís corriendo... \n";
                std::cout << "  \n";
                std::cout << "  La 'estatua' que tenías frente a vos tampoco duda y en un solo movimiento rápido te aplasta de un manotazo \n";
                std::cout << " \n";
                std::cout << "  Sin poder hacer nada, moriste aplastado. <Moriste> \n";
                std::cout << " \n";
                std::cout << "1. Volver a jugar Pantano.\n";
                std::cout << " \n";

                while (true)
                {
                    std::string option;
                    std::cout << "Tu elección: ";
                    std::getline(std::cin, option);

                    switch (std::atoi(option.c_str()))
                    {
                    case 1:
                        inic_nivel();
                        return;

                    default:
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << " \n";
                        std::cout << "Por favor elige una opción válida" << std::endl;
                        std::cout << " \n";
                        std::cout << "1. Volver a jugar Pantano. \n";
                        std::cout << "\n";
                        break;
                    }
                } // while dentro de la opción "huír"

                elegir = false;
                return;
            case 2:
                std::cout << " \n";
                std::cout << "  Más que esperar, sentís impotencia. No podés hacer nada contra la criatura que tenés enfrente, y correr podría \n";
                std::cout << "provocar alguna reacción negativa. No tiene boca ni rasgos faciales, pero dentro de tu cabeza se reproduce:\n";
                std::cout << " \n";
                std::cout << "   -Soy Vordren, el Guardián del Pantano. \n";
                std::cout << " \n";
                std::cout << "   -Puedo ver que rechazaste comer frutos, tenés sed y hambre. Pero no noto que tengás intenciones de perturbar \n";
                std::cout << "el órden de las cosas acá abajo. \n";
                std::cout << " \n";
                std::cout << "   -Te doy un consejo? Los pedestales, como el que está acá cerca, están repartidos por todo el pantano, conectan con\n";
                std::cout << "un mercado rural que está muchos kilómetros más adelante, hacia el noroeste. \n";
                std::cout << " \n";
                std::cout << "   -Sé que desconfiás, pero ahí son criaturas amables, y los frutos de Noctílora, que crecen todo alrededor, son nutritivos. \n";
                std::cout << " \n";
                std::cout << "   -Usar el pedestal tiene un pequeño precio, pero no es nada muy complicado. Espero tengás suerte.\n";
                std::cout << " \n";
                std::cout << "  La estatua que tenías enfrente se convierte en barro nuevamente. Decidís avanzar hasta el pedestal.\n";

                elegir = false;
                break;
            default:

                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Huír. \n";
                std::cout << "2. Esperar. \n";
                std::cout << " \n";
                elegir = true;

                break;
            }//primer switch

        } // 1er while

        std::cout << "  Una vez te acercás, ves una oración escrita con runas antiguas.\n";
        mercado_rural_2::inic_nivel();
        return;

    } // void inic_nivel().

} // namespace deriva