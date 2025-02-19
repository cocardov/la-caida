#include "llanura_nivel_1.hh"
#include "../llanura_nivel_2/llanura_nivel_2.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace llanura_nivel_1
{

    void noInspeccionarPlanta();
    void inspeccionarPlanta();
    void seguirInspeccionando();

    bool tocarBaya = true;
    bool tocarHoja = true;

    void inic_nivel()
    {

        std::cout << "\n";
        std::cout << "\n";
        std::cout << "  Decidís continuar por el camino de la derecha, de repente, todo se ilumina a tu \n";
        std::cout << "alrededor. Lo siguiente que ves es un valle muy extenso, repleto de plantas que nunca \n";
        std::cout << "antes habías visto en ningún libro. La iluminación es rara, parece que la luz del sol \n";
        std::cout << "es transportada hasta abajo por un complejo sistema de cristales. \n";
        std::cout << "\n";
        std::cout << "  Inspeccionar planta?\n";
        std::cout << "1. Sí. \n";
        std::cout << "2. No. \n";
        std::cout << "\n";

        tocarBaya = true;

        while (tocarBaya == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                inspeccionarPlanta();
                tocarBaya = false;
                if (tocarHoja == false)
                {
                    break;
                }
                else if (tocarHoja == true)
                {
                    return;
                }

            case 2:
                noInspeccionarPlanta();
                tocarBaya = false;
                break;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Sí. \n";
                std::cout << "2. No. \n";
                std::cout << " \n";

                break;
            }
        } // 1er while

        std::cout << "  Como sea, seguís adelante. Recorres cerca de un kilómetro y te empezás a preocupar \n";
        std::cout << "ya que tenés sed y hambre, por ahora te alimentás, pero tus recursos son limitados. \n";
        std::cout << "  Avanzás unos kilómetros más, contemplando un mundo inimaginable, criaturas que \n";
        std::cout << "parecen flotar, animales que atraviesan objetos. \n";
        std::cout << " \n";
        std::cout << "  Entrás en una zona pantanosa, apenas podés caminar. Te arrepentís y volvés, se está \n";
        std::cout << "terminando la luz (en la superficie aparentemente está anocheciendo). Por lo que \n";
        std::cout << "decidís acampar en lo que parece ser una cueva pequeña (es apenas una cavidad de tierra \n";
        std::cout << "faltante en una pared, probablemente provocada por la actividad sísmica). \n";
        std::cout << " \n";
        std::cout << "Tienes un poco de frío y la noche será larga: \n";
        std::cout << "1. Intentar encender un fuego usando las runas que anotaste. \n";
        std::cout << "2. Intentar mantener el calor corporal con cosas de tu mochila. \n";
        std::cout << " \n";

        while (true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                // completar, hacer función void encenderFuego()
                return;
            case 2:
                // completar, hacer función void manternerCalor() (va a ser solo texto, pero no importa)
                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Intentar encender un fuego usando las runas que anotaste. \n";
                std::cout << "2. Intentar mantener el calor corporal con cosas de tu mochila. \n";
                std::cout << " \n";
                break;
            }
        }

    } // void inic_nivel()

    void inspeccionarPlanta()
    {
        std::cout << " \n";
        std::cout << " \n";
        std::cout << "  Te acercás y ves que la planta tiene varios frutos, parecidos a una baya. Decidís \n";
        std::cout << "agarrar uno. Lo guardás en un frasco que tenías en la mochila. \n";
        std::cout << " --Baya desconocida +1. \n";
        std::cout << " \n";

        std::cout << "  Seguir inspeccionando? \n";
        std::cout << "1. Sí.\n";
        std::cout << "2. No.\n";

        tocarHoja = true;

        while (tocarHoja == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                seguirInspeccionando();
                tocarHoja = true;
                return;
            case 2:
                std::cout << "Decidís conformarte con los frutos. \n";
                std::cout << " \n";
                tocarHoja = false;
                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Sí. \n";
                std::cout << "2. No. \n";
                std::cout << " \n";
                break;
            }
        }

        return;
    } // void inspeccionarPlanta()

    void noInspeccionarPlanta()
    {
        std::cout << " \n";
        std::cout << " \n";
        std::cout << "  Ignorás la flora desconocida. Un movimiento inteligente, no conocer las propiedades \n";
        std::cout << "de la planta podría ser peligroso. \n";
        std::cout << " \n";
        return;
    } // void noInspeccionarPlanta()

    void seguirInspeccionando()
    {
        std::cout << "  Las hojas de la planta tienen un tacto extraño, parieran no tener peso. Esto te llama \n";
        std::cout << "mucho la atención. Guardás un par de ojas en otro frasco, una vez en la superficie podrías \n";
        std::cout << "investigarlas. \n";
        std::cout << " \n";
        std::cout << "  Como sea, seguís adelante. Recorres cerca de un kilómetro y te empezás a preocupar \n";
        std::cout << "ya que tenés sed y hambre, por ahora te alimentás, pero tus recursos son limitados. \n";
        std::cout << "  Avanzás unos kilómetros más, contemplando un mundo inimaginable, criaturas que \n";
        std::cout << "parecen flotar, animales que atraviesan objetos. \n";
        std::cout << " \n";
        std::cout << "  Entrás en una zona pantanosa, apenas podés caminar. Te arrepentís y volvés, se está \n";
        std::cout << "terminando la luz (en la superficie aparentemente está anocheciendo). Por lo que \n";
        std::cout << "decidís acampar en lo que parece ser una cueva pequeña (es apenas una cavidad de tierra \n";
        std::cout << "faltante en una pared, probablemente provocada por la actividad sísmica). \n";
        std::cout << "  Decidís acostarte y descansar...\n";
        std::cout << " \n";
        std::cout << "  Te despertaste en medio de la noche por un dolor insoportable. Tu brazo izquierdo \n";
        std::cout << "sufre de una necrosis fuertísima, desprende un olor horrible. \n";
        std::cout << "  Debido a tus recursos limitados no podés hacer nada más que esperar tu muerte debido \n";
        std::cout << "a la infección.\n";
        std::cout << " \n";
        std::cout << "< Moriste > \n";
        std::cout << " \n";
        std::cout << "1. Volver a jugar Llanura nivel 1. \n";
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
                std::cout << "1. Volver a jugar Llanura nivel 1. \n";
                std::cout << " \n";
                break;
            }
        }
        std::cout << " \n";
        std::cout << " \n";
        tocarBaya = false;
        tocarHoja = false;
        return;
    }

} // namespace llanura_nivel_1.
