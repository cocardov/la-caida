#include "mazmorra_nivel_1.hh"
#include "../mazmorra_nivel_2/mazmorra_nivel_2.hh"
#include "../llanura_nivel_1/llanura_nivel_1.hh"
// #include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mazmorra_nivel_1
{
    bool elegir = true;

    void inic_nivel()
    {
        std::cout << " \n";
        std::cout << "  Decidís tomar el camino de la izquierda, parece seguir bajando y es bastante oscuro, pronto, ves luz. Lo que\n";
        std::cout << "parecía ser una cueva ahora se transforma en unas escaleras en espiral, iluminadas por antorchas que parecen estar\n";
        std::cout << "ahí desde hace mucho tiempo, tienen telarañas. No le dás mucha importancia, pero te preguntás cómo es que siguen \n";
        std::cout << "encendidas.\n";
        std::cout << " \n";
        std::cout << "   Algo no te gusta, podés hacer dos cosas:\n";
        std::cout << "1. Seguir bajando. \n";
        std::cout << "2. Subir y tomar el camino de la derecha. \n";
        std::cout << " \n";

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                std::cout << " \n";
                std::cout << "  Pensás que volver a subir es una pérdida de tiempo, qué puede tener el otro camino, que éste no? Seguís bajando. \n";
                std::cout << " \n";
                elegir = false;
                break;
            case 2:
                std::cout << " \n";
                std::cout << "  Elegís seguír tus instintos y subís como podés. \n";
                llanura_nivel_1::inic_nivel();
                elegir = false;
                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Seguir bajando. \n";
                std::cout << "2. Subir y tomar el camino de la derecha. \n";
                std::cout << " \n";

                break;
            }

        } // primer while

        std::cout << "  Bajás muchos escalones, parece que nunca vas a llegar. Cuando llegás al fondo, algo te hace cuestionar si realmente \n";
        std::cout << "querés seguir bajando. Hay una puerta bastante grande que parece pesada, al lado de ésta hay una placa escrita en un \n";
        std::cout << "idioma olvidado. Hay un silencio tan puro que te dá miedo. La placa tiene un símbolo que solo habías visto en libros \n";
        std::cout << "sobre magia oscura. No sabés bien qué significa, en los libros se lo relaciona al infierno, a las mazmorras. Te dá intriga. \n";
        std::cout << " \n";
        std::cout << "1. Abrir la puerta. \n";
        std::cout << "2. Acobardarte. \n";
        std::cout << " \n";

        elegir = true;

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                std::cout << " \n";
                std::cout << "  Querés aprender magia oscura. Ese egoísmo te lleva a abrir la puerta. Es un pasillo 'normal'. Está oscuro, pero pasás. \n";
                mazmorra_nivel_2::inic_nivel();

                elegir = false;

                return;
            case 2:
                std::cout << " \n";
                std::cout << "  Subís como podés. Probablemente te arrepientas de quedarte con la duda de saber qué había atrás de esa puerta. O no. \n";
                llanura_nivel_1::inic_nivel();
                elegir = false;

                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Abrir la puerta. \n";
                std::cout << "2. Acobardarte. \n";
                std::cout << " \n";

                break;
            }

        } // segundo while

        return;
    
    } // void inic_nivel().

} // namespace mazmorra_nivel_1
