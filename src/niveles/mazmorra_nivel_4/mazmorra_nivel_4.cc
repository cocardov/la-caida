#include "mazmorra_nivel_4.hh"
#include "../mazmorra_nivel_5/mazmorra_nivel_5.hh"
#include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mazmorra_nivel_4
{
    bool elegir = true;

    void usarDaga();
    void recitarEsfera();
    void fingirMuerte();
    void esferaFuego();

    void inic_nivel()
    {
        std::cout << "\n";
        std::cout << "  Estás cansado pero seguís avanzando. Encontrás una especie de puerta con una placa al lado, te llenás de esperanza\n";
        std::cout << "pensando que podría ser una salida, pero cuando llegás leés: <Los que estés dispuestos a renacer del infierno, abran \n";
        std::cout << "ésta puerta> \n";
        std::cout << "\n";
        std::cout << "  Abrís la puerta y atrás de esta hay otra escalera en espiral. La historia parece repetirse ya que al fondo hay una\n";
        std::cout << "puerta con una placa al lado, pero esta vez dice 'Nivel 2'.\n";
        std::cout << "\n";
        std::cout << "  Pasás e inmediatamente recitás la esfera de fuego. Iluminás la zona y pero no hay ningún enemigo visible. No aún...\n";
        std::cout << "\n";
        std::cout << "  La esfera de fuego se consume.\n";
        std::cout << "\n";
        std::cout << "  Escuchás un ruido a insecto, ésto te alarma mucho. Ves ocho pequeños puntos en la oscuridad del fondo del pasillo. De\n";
        std::cout << "las sombras ves que emerge, desde la arista superior derecha del pasillo, lo anatómicamente más parecido que viste a una \n";
        std::cout << "araña. Tiene dos largos colmillos y se mueve en cuatro patas que usa a modo de trípode. Tumbarla va a ser complicada. Además\n";
        std::cout << "tiene cuatro extremidades superiores que parece saber usar bien y están afiladas. La parte del abdómen es muy rara, parece\n";
        std::cout << "haber desarrollado algún tipo de simbiosis con un hongo, más especificamente con los que lanzan esporas.\n";
        std::cout << "\n";
        std::cout << "  Reconocés una especie de araña de la superfie bastante parecida, que se caracteriza por los asaltos a distancia y las\n";
        std::cout << "emboscadas. La criatura enfrente tuyo demuestra una posición agresiva.\n";
        std::cout << "\n";
        std::cout << "1. Usar la daga.\n";
        std::cout << "2. Usar la esfera de fuego.\n";
        std::cout << "\n";

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
                recitarEsfera();
                elegir = false;
                break;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Usar la daga. \n";
                std::cout << "2. Usar la esfera de fuego. \n";
                std::cout << " \n";

                break;
            }

        } // 1er while

        std::cout << "  Tu primer ataque falla y la araña dá su asalto. En fracciones de segundo pega un salto con tanta fueza que recorre \n";
        std::cout << "toda la distancia que te separa de ella. Con una de sus patas apunta a tu corazón, pero conseguís moverte un poco hacia \n";
        std::cout << "la derecha y te apuñala en el hombro izquierdo. Sentís un ardor insoportable y empezás a sangrar. Por lo menos no es tu\n";
        std::cout << "brazo hábil. Sentís un olor a azufre fuertísimo y quedás ciego unos segundos, empezás a toser porque te pican las vías\n";
        std::cout << "respiratiorias \n";
        std::cout << " \n";
        std::cout << "  Cuando volvés a abrir los ojos ves una nube de esporas que te lleva hasta el abdómen de la araña, donde se produce\n";
        std::cout << "una simbiosis con el hongo. \n";
        std::cout << " \n";
        std::cout << "1. Hacerse el muerto. \n";
        std::cout << "2. Usar la esfera de fuego \n";
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
                fingirMuerte();
                elegir = false;
                break;
            case 2:
                esferaFuego();
                elegir = false;
                break;
            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Hacerse el muerto. \n";
                std::cout << "2. Usar la esfera de fuego. \n";
                std::cout << " \n";

                break;
            }

        } // 2ndo while.

        std::cout << "  Probar el escudo?\n";
        std::cout << "1. Sí. \n";
        std::cout << "2. No. \n";
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
                std::cout << "  Recitás el <Escudo definitivo>. Un campo violeta aparece a tu alrededor. Te concentrás en la forma de éste, te dás cuenta \n";
                std::cout << "que es mucho más versátil de lo que pensabas, la araña no extraía todo su potencial. \n";
                std::cout << " \n";
                std::cout << "  Si te concentrás lo suficiente podés expandirlo hasta dos metros alrededor tuyo o comprimirlo para que se adapte a la forma \n";
                std::cout << "de tu cuerpo y esté a unos pocos centímetros de tu piel. También le podés dar formas puntiagudas, es decir, estirarlo. El escudo \n";
                std::cout << "se desvanece. Manipularlo de esta forma requiere de mucha concentración, no sabés si lo vas a poder usar durante un enfrentamiento. \n";
                std::cout << " \n";
                elegir = false;
                break;
            case 2:
                std::cout << " \n";
                std::cout << "  Decidís no recitar nada, guardás energía. \n";
                std::cout << " \n";
                elegir = false;
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

        } // 3er while.

        mazmorra_nivel_5::inic_nivel();


        return;
    } // void inic_nivel().

    void usarDaga()
    {
        std::cout << " \n";
        std::cout << "  No esperás a que la araña empiece, rápidamente sacás la daga de tu mochila y recitás <Sonido>. La onda de sonido \n";
        std::cout << "parece impactar a la araña. Pero cuando abrís los ojos ves un campo de color violeta bastante traslúcido alrededor de \n";
        std::cout << "la araña. Ves como una de las cuatro extremidades superiores brilla. \n";
        std::cout << " \n";
        return;
    } // void usarDaga()

    void recitarEsfera()
    {
        std::cout << " \n";
        std::cout << "  No esperás a que la araña empiece, rápidamente recitás la esfera de fuego y la convinás con un hechizo actual, \n";
        std::cout << "<Lanzar>. Parece que impactaste a la araña, pero cuando volvés a mirar ves un campo de color violeta bastante traslúcido \n";
        std::cout << "alrededor de la araña. ves como una de las cuatro extremidades superiores brilla. \n";
        std::cout << " \n";
        return;
    } // void recitarEsfera().

    void fingirMuerte()
    {
        std::cout << " \n";
        std::cout << "  Fingís caer intoxicado por las esporas de la araña, todo para llamar su atención. La araña se acerca de forma cautelosa\n";
        std::cout << "hasta donde estás vos. Una vez sentís que está encima tuyo, apretás la daga con fuerza y apuntás a la pata que brillaba \n";
        std::cout << "de violeta. La criatura retrocede muy rápidamente de un salto, pero la hoja de tu daga llega a cortar casi la mitad de la \n";
        std::cout << "pata. Escuchás un chillido de agonía. \n";
        std::cout << " \n";
        std::cout << "1. Usar daga. \n";
        std::cout << "2. Usar esfera de fuego. \n";
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
                std::cout << "  No le das tiempo a la araña a alejarse mucho, con la misma daga esta vez recitás <Sonido>. La onda de choque la impacta, \n";
                std::cout << "parece rebotar dentro del abdómen de la criatura, ya que éste explota. Pedazos de araña vuelan por todo el pasillo \n";
                std::cout << "manchándolo de sangre. \n";
                std::cout << " \n";
                std::cout << "  No sentís asco... \n";
                std::cout << " \n";
                std::cout << "   La sangre de la araña empieza a fluir hacia vos, sacás la runa celeste de tu bolso y absorbés todo. De repente te \n";
                std::cout << "sentís bien, tus heridas sanan. Quedás estupefacto ante la capacidad de la runa. Cerca de una de las patas de la araña \n";
                std::cout << "encontrás otra runa, es violeta y un poco más grande que la celeste. Dice <Escudo definitivo> en Dravash. \n";
                std::cout << " \n";
                std::cout << "--Runa violeta (Escudo definitivo) +1. \n";
                std::cout << " \n";

                elegir = false;
                return;

            case 2:

                std::cout << " \n";
                std::cout << "  No le das tiempo a la araña de alejarse mucho, recitás la esfera de fuego, la apuntás hacia la nube de esporas que \n";
                std::cout << "llega hasta el abdómen de la criatura y ésta se enciende en una violenta reacción en cadena. El azufre de las esporas\n";
                std::cout << "es altamente inflamable. Las llamas alcanzan la araña y escuchás una explosión, probablemente proveniente del abdómen. \n";
                std::cout << " \n";
                std::cout << "  Partes de la araña salen volando y manchan todo el pasillo con sangre. \n";
                std::cout << " \n";
                std::cout << "  No sentís asco... \n";
                std::cout << " \n";
                std::cout << "   La sangre de la araña empieza a fluir hacia vos, sacás la runa celeste de tu bolso y absorbés todo. De repente te \n";
                std::cout << "sentís bien, tus heridas sanan. Quedás estupefacto ante la capacidad de la runa. Cerca de una de las patas de la araña \n";
                std::cout << "encontrás otra runa, es violeta y un poco más grande que la celeste. Dice <Escudo definitivo> en Dravash. \n";
                std::cout << " \n";
                std::cout << "--Runa violeta (Escudo definitivo) +1. \n";
                std::cout << " \n";

                elegir = false;
                return;

            default:
                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Usar daga. \n";
                std::cout << "2. Usar la esfera de fuego. \n";
                std::cout << " \n";

                break;
            }

        } // while adentro de fingirMuerte().

        return;
    } // void fingirMuerte().

    void esferaFuego()
    {
        std::cout << " \n";
        std::cout << "  Se te ocurre una idea. El azufre es inflamable. \n";
        std::cout << " \n";
        std::cout << "  Recitás la esfera de fuego y la apuntás hacia las esporas alrededor tuyo. Producís una combustión en cadena muy\n";
        std::cout << "rápida y agresiva. Te quemás. Lográs ver como reacción llega en un instante hasta el abdómen de la araña. Ésta usa  \n";
        std::cout << "el mismo campo violeta de antes, pero no lo hace a tiempo. Este campo de fuerza la condena, arde en llamas \n";
        std::cout << "dentro de él. Escuchás una explosión, muy probablemente del abdómen de la araña, que contenía la mayor cantidad de \n";
        std::cout << "azufre. Partes de la araña salen volando y esparcen sangre por todo el pasillo. \n";
        std::cout << " \n";
        std::cout << "  No sentís asco...  \n";
        std::cout << " \n";
        std::cout << "  La sangre de la araña empieza a fluir hacia vos, sacás la runa celeste de tu bolso y absorbés todo. De repente te \n";
        std::cout << "sentís bien, tus heridas sanan. Quedás estupefacto ante la capacidad de la runa. Cerca de una de las patas de la araña \n";
        std::cout << "encontrás otra runa, es violeta y un poco más grande que la celeste. Dice <Escudo definitivo> en Dravash. \n";
        std::cout << " \n";
        std::cout << "--Runa violeta (Escudo definitivo) +1. \n";
        std::cout << " \n";

        return;
    } // void esferaFuego().

} // namespace mazmorra_nivel_4
