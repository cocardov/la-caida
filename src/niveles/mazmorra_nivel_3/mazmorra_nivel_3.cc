#include "mazmorra_nivel_3.hh"
#include "../mazmorra_nivel_4/mazmorra_nivel_4.hh"
#include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mazmorra_nivel_3
{
    bool elegir = true;

    void usarDaga();
    void hacerRuido();

    void inic_nivel()
    {
        std::cout << " \n";
        std::cout << "  Al final el pasillo dobla a la derecha, te dás cuenta que es un laberinto... Cuando creés que podés estár tranquilo, \n";
        std::cout << "doblás en una esquina y te cruzás con otra criatura. Ésta es más baja, parece no tener ojos ni naríz, pero sus orejas son\n";
        std::cout << "enormes en comparación con su cuerpo. Te quedás completamente quieto y dejás de respirar. De las extremidades de su cuerpo \n";
        std::cout << "parecen salir espinas de gran tamaño, es como si tuviera colmillos por todo el cuerpo a modo de armadura.\n";
        std::cout << "\n";
        std::cout << "  Acercarte sería completamente inutil, un ataque físico no tendría sentido alguno.\n";
        std::cout << " \n";
        std::cout << "1. Usar la daga. \n";
        std::cout << "2. Volver sin hacer ruido. \n";
        std::cout << " \n";

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                usarDaga();
                elegir = false;
                break;
            case 2:
                hacerRuido();
                elegir = false;
                return;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Usar la daga. \n";
                std::cout << "2. Volver sin hacer ruido. \n";
                std::cout << " \n";

                break;
            }

        } // 1er while

        std::cout << "  Inspeccionás el cuerpo de la criatura. Una parte es distinta, parece ser el estómago, pero sentís un cilindro duro. Diseccionás\n";
        std::cout << "el estómago y encontrás dentro del cilindro un pergamino. La curiosidad no de deja esperar para abrirlo...\n";
        std::cout << "\n";
        std::cout << "  Está escrito en el mismo idioma antiguo de la placa que estaba al lado de la primer puerta, por alguna razón lo entendés. Dice:\n";
        std::cout << "\n";
        std::cout << "----------------------------------------------------------------------------------------------------------------------------------\n";
        std::cout << "\n";
        std::cout << "   El que lea este pergamino obtendrá, de forma automática, la capacidad de entender e interpretar el idioma Dravash, constituído \n";
        std::cout << " de 1.342 runas y 78 caracteres.\n";
        std::cout << "\n";
        std::cout << "----------------------------------------------------------------------------------------------------------------------------------\n";
        std::cout << "\n";
        std::cout << "  Terminás de leerlo y se vuelve llamas. Te asustás y lo tirás al piso. Se consume y solo quedan cenizas.\n";
        std::cout << "\n";
        std::cout << "  Quedás impresionado, pero se te ocurre otra idea. Inspeccionás todos los objetos de tu mochila.\n";
        std::cout << "\n";
        std::cout << "  En el mango de la daga dice <Sonido>.\n";
        std::cout << "  Lo que habías anotado en tu diario dice <Ignición> y <Esfera>.\n";
        std::cout << "  Finalmente, la runa dice <Elíxir de Vida Eterna> y <Conexión>.\n";
        std::cout << "\n";
        std::cout << "  Necesitás tiempo para procesar toda esta nueva información, pero ahora tenés mucha sed y hambre, además del cansancio. Te alimentás\n";
        std::cout << "pero te preocupa que dentro de poco te quedes sin recursos.\n";
        std::cout << "\n";
        std::cout << "1. Dormir.\n";
        std::cout << "2. Seguir avanzando.\n";
        std::cout << "\n";

        elegir= true;

        while (elegir == true)
        {
            std::string option;
            std::cout << "Tu elección: ";
            std::getline(std::cin, option);

            switch (std::atoi(option.c_str()))
            {
            case 1:
                std::cout << "\n";
                std::cout << "  Decidís que estás muy cansado como para continuar, la comida te dio fiaca y parece que ahora está todo tranquilo.\n";
                std::cout << "  Te acostás en el piso a dormir. Dormís cerca de 4 horas y un ruido te despierta. No vés qué lo hizo, pero pensás que \n";
                std::cout << "es mejor avanzar.\n";
                elegir = false;
                break;
            case 2:
                mazmorra_nivel_4::inic_nivel();
                elegir = false;
                return;
                
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Dormir. \n";
                std::cout << "2. Seguir avanzando. \n";
                std::cout << " \n";

                break;
            }

        }//while dormir

        mazmorra_nivel_4::inic_nivel();
        return;

    } // void inic_nivel()




    void usarDaga()
    {
        std::cout << "\n";
        std::cout << "  Si tiene orejas tan grandes, debe escuchar muy bien. El bicho está un poco lejos, te mentalizás y recitás la runa\n";
        std::cout << "de la daga. Apenas abrís la boca las orejas de la critaura apuntan hacia vos, como si fueran dos radares y al\n";
        std::cout << "escucharte recitar la runa empieza a correr hacia vos. En el momento justo hacés oscilar la daga en el aire. La onda\n";
        std::cout << "de choque sale de la daga en forma de as y es tan potente que te obliga a cerrar los ojos...\n";
        std::cout << "\n";
        std::cout << "  Escuchás que el bicho cae al piso, te impresiona saber que esta vez le explotó la cabeza. Tu bolso empieza a vibrar,\n";
        std::cout << "sacás la runa y vuelve a pasar lo mismo que antes. Por alguna razón se siente bien, natural.\n";
        std::cout << "\n";
        return;

    }//void usarDaga()

    void hacerRuido()
    {
        std::cout << "\n";
        std::cout << "  Intentás volver por donde viniste sin hacer ruido, pero apenás volver a apoyar tu pié en el suelo las orejas del bicho\n";
        std::cout << "apuntan hacia vos, como si fueran dos radares. Te empieza a latir más fuerte el corazón, y parece que la criatura es\n";
        std::cout << "capaz de escuchar eso. Empieza a correr hacia vos, lanza un chillido, como el de un murciélago para tenerte localizado\n";
        std::cout << "en todo momento. Empezás a correr pero no hacés más que llamar la atención de todos los bichos del laberinto.\n";
        std::cout << "\n";
        std::cout << "  Escuchás chillidos y aullidos por todos lados, antes de que te dés cuenta la criatura te alcanzó y te estampó contra\n";
        std::cout << "una de las paredes. Sus púas se clavan por todo tu cuerpo y empezás a sangrar. Tu sangre se dirige hacia tu bolso, donde\n";
        std::cout << "tenías guardada la runa celeste. Empezás a sentir frío y perdés la consciencia.\n";
        std::cout << "\n";
        std::cout << " <Moriste>.\n";
        std::cout << "\n";
        std::cout << "1. Volver a jugar Mazmorra.\n";

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
                std::cout << "1. Volver a jugar Mazmorra. \n";
                std::cout << " \n";

                break;
            }
        }
        return;

    }//void hacerRuido()


} // namespace mazmorra_nivel_3