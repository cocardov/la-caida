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
    void encenderFuego();
    void llamarCriatura();

    bool tocarBaya = true;
    bool tocarHoja = true;
    bool recitarRuna = true;
    bool sobrevivir = true;
    

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
                encenderFuego();
                if (recitarRuna == true)
                {
                   llamarCriatura();
                   if (sobrevivir == true)
                   {
                    //llanura_nivel_2::inic_nivel()
                    return;
                   }

                   else if (sobrevivir == false)
                   {
                    return;
                   } 
                }

                else if (recitarRuna == false)
                {
                    //llanura_nivel_2::inic_nivel()
                    return;
                }

                return;
            case 2:
                std::cout << "\n";
                std::cout << "  No hacés fuego, ya que podría salir mal o atraer alguna criatura...\n";
                std::cout << "\n";
                std::cout << "  Te acostás en el piso, con tu mochila encima tuyo, no es mucho, es casi nada, \n";
                std::cout << "pero te ayuda a conservar algo de calor. \n";
                std::cout << "  Dormís... \n";
                std::cout << "\n";

                llanura_nivel_2::inic_nivel();

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
        } // 2ndo while



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

    } // void seguirInspeccionando()

    void encenderFuego()
    {
        std::cout << " \n";
        std::cout << "  Se te ocurre una idea. Juntás un poco de leña de la zona y recitás las runas que habías \n";
        std::cout << "anotado en tu diario antes. \n";
        std::cout << " \n";
    
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> distrib(0.0, 1.0);

        float random_float = distrib(gen); // generar una probabilidad del 80% de que salga bien.

        if (random_float <= 0.8f) // posibilidad 1, sale bien
        {
            std::cout << "  Increíblemente lográs recitar bien las runas, invocás una esfera de fuego que aparece \n";
            std::cout << "frente a vos, la direccionás al montón de leña que habías juntado y éste arde. \n";
            std::cout << "  Te alegrás por el fuego, te desconcentrás y la esfera se consume. \n";
            std::cout << " \n";
            recitarRuna = true;
            return;
        }

        else if (random_float > 0.8f) //probabilidad 2, sale mal
        {
            std::cout << "  Te equivocás pronunciando un fonema, no terminás de entender del todo cómo estaría bien \n";
            std::cout << "dicho. Apenas se llega a generar una leve luz, pero no lográs encender fuego.\n";
            std::cout << " \n";
            recitarRuna = false;
            return;
        }
        return;
    } // void encenderFuego()

    void llamarCriatura()
    {
    std::cout << " \n";
    std::cout << "  Pronto sucumbís al sueño...\n";
    std::cout << " \n";
    std::cout << "  Te despestás en medio de la noche. Hay algo afuera, pero no sabés qué es. \n";
    std::cout << " \n";
    std::cout << "  Ahora podés:\n";
    std::cout << "1. Auyentar a lo que sea que esté afuera. \n";
    std::cout << "2. Quedarse en silencio. \n";
    std::cout << "\n";

    while (true)
    {
        std::string option;
        std::cout << "Tu elección: ";
        std::getline(std::cin, option);

        switch (std::atoi(option.c_str()))
        {
        case 1:
            std::cout << " \n";
            std::cout << "  Te levantás y empezás a gritar para que la criatura se vaya. Ésta al escucharte \n";
            std::cout << "se acerca... \n";
            std::cout << "\n";
            std::cout << "  No sabés con lo que te metiste. Frente a la entrada de la cueva ahora hay un bicho \n";
            std::cout << "de casi 3m de altura. Sin pelo, con forma humanoide, una piel parecida a la tuya, pero  \n";
            std::cout << "con escamas y sus patas parecen las de un ave. Su cabeza es desproporcionalmente enorme en\n";
            std::cout << "comparación con su cuerpo. Y sus ojos son completamente negros. \n";
            std::cout << " \n";
            std::cout << "  Se te hela la sangre. No podés hacer nada porque te quedaste paralizado ante ésta atrocidad. \n";
            std::cout << "  El bicho empieza a correr hacia vos, y un segundo después ya está enfrente tuyo. Es \n";
            std::cout << "muy rápido. Abre su boca con forma de pico, y ves que adentro no hay más que muchos dientes \n";
            std::cout << "esperando tu carne. \n";
            std::cout << "  Empieza arrancándote tu brazo izquierdo de un mordisco. Sigue con tu cabeza. \n";
            std::cout << " \n";
            std::cout << "< Moriste > \n";
            std::cout << " \n";
            std::cout << "1. Volver a jugar Llanura nivel 1. \n";
            std::cout << " \n";
    
            sobrevivir = false;

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
            return;

        case 2:
            std::cout << " \n";
            std::cout << "  Decidís quedarte en silencio. Rápidamente te das cuenta que es tu mejor opción. \n";
            std::cout << "  Frente a la entrada de la cueva pasa un bicho de casi 3m de altura. Sin pelo, con \n";  
            std::cout << "una piel parecida a la tuya, pero con escamas. Su cabeza es desproporcionalmente enorme \n";
            std::cout << "en comparación con su cuerpo. Y sus ojos son completamente negros. \n";
            std::cout << " \n";
            std::cout << "  Por suerte, no te vé. \n";
            std::cout << "  Intentás seguir durmiendo. Te obligás a hacerlo. \n";

            sobrevivir = true;

            return;
        
        default:
            std::cout << " \n";
            std::cout << " \n";
            std::cout << " \n";
            std::cout << "Por favor elige una opción válida" << std::endl;
            std::cout << " \n";
            std::cout << "1. Auyentar a lo que sea que esté afuera. \n";
            std::cout << "2. Quedarse en silencio. \n";
            std::cout << " \n";

            break;
        }
    } //while opción encenderFuego()

    }// llamarCriatura().

} // namespace llanura_nivel_1.
