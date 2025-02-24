#include "mercado_rural_2.hh"
#include "../final_bueno/final_bueno.hh"
#include "../../utils/utils.hh"
#include <cstdlib>
#include <iostream>
#include <random>
#include <string>

namespace mercado_rural_2
{
    bool elegir = true;

    void aceptarGuia();
    void explorar();

    void inic_nivel()
    {
        std::cout << "  Es la primer vez que ves una oración tan larga. Alcanzás a reconocer que se trata de magia oscura, reconocés \n";
        std::cout << "el caracter de <Sangre>. Es muy raro, es la primer vez que algo de acá abajo te habla, pero no  podés hacer\n";
        std::cout << "otra cosa más que confiar, pensás que por alguna razón Vordren te ayudó. Prácticamente evitó que mueras de hambre.\n";
        std::cout << " \n";
        std::cout << "  Deducís que podés hacer dos cosas, 1. Recitar las runas puede llevarte al mercado, o 2. Se trata de algún \n";
        std::cout << "tipo de mecanismo con el que interactuar. \n";
        std::cout << " \n";
        std::cout << "  Entonces tus opciones son: \n";
        std::cout << "1. Recitar las runas del pedestal. \n";
        std::cout << "2. Interactuar. \n";
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
                std::cout << "  Te toma varios minutos interpretar como recitar las runas, pero lo hacés. No pasa nada. \n";
                std::cout << "  Pensás que probablemente sean instrucciones. \n";
                std::cout << " \n";
                std::cout << "2. Interactuar. \n";
                std::cout << " \n";
                elegir = true;
                break;

            case 2:
                std::cout << " \n";
                std::cout << "  Se te ocurre una idea, aunque no sabés qué consecuencias pueda tener. Vordren dijo que activar las runas \n";
                std::cout << "tiene un 'precio', y viendo el caracter de <Sangre>, algo es bastante obvio. \n";
                std::cout << "\n";
                std::cout << "  Recordar que querés aprender magia oscura te llena de determinación, anotás todo lo que ves grabado en tu libreta, \n";
                std::cout << "mordés tu pulgar y una pequeña gota de sangre emerge a la superficie. Sentís que algo empieza a vibrar en tu bolso, eso \n";
                std::cout << "te alarma un poco, pero continuás y acercás tu pulgar a las runas del pedestal, es como si éstas te llamaran.\n";
                std::cout << " \n";
                std::cout << "  Las runas grabadas en el pedestal se iluminan de rojo y la gota de sangre de tu dedo es succionada por éstas. El barro del\n";
                std::cout << "pantano se seca en un círculo alrededor del pedestal. Llamas negras con tonos rojizos se alzan sobre el perímetro del círculo y \n";
                std::cout << "todo tiembla. De pronto, las llamas se consumen y a ahora estás en un lugar distinto, en el mercado... \n";
                std::cout << " \n";
        
                elegir = false;
                break;

            default:

                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Recitar las runas del pedestal. \n";
                std::cout << "2. Interactuar. \n";
                std::cout << " \n";
                elegir = true;

                break;
            }

        } // 1er while

        std::cout << "  Buscás en tu bolso qué era lo que vibraba, pero no encontrás nada capaz de hacerlo. Desesperado, \n";
        std::cout << "corrés hacia las plantas de Noctílora. Sus frutos son tan jugosos que sacias hambre y sed al mismo \n";
        std::cout << "tiempo.\n";
        std::cout << " \n";
        std::cout << "  Este nuevo entorno te tiene completamente desconcertado, realmente hay puestos manejados por criaturas,\n";
        std::cout << "y criaturas que intercambian cristales parecidos a los que transportan la luz del sol, por otros objetos.\n";
        std::cout << "Un sistema económico completo y bien manejado. \n";
        std::cout << " \n";
        std::cout << "  Sentís que todos te tienen un ojo encima, no son hostiles, es más, podrías decir que hasta son amables,\n";
        std::cout << "pero es como si por alguna razón estaban esperando tu llegada. Te da muy mala espina. \n";
        std::cout << "  De pronto, se te acerca un mercader, demuestra mucho interés en guiarte por el mercado. \n";
        std::cout << " \n";
        std::cout << "1. Aceptar la guía. \n";
        std::cout << "2. Explorar por tu cuenta. \n";
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
                aceptarGuia();
                elegir = false;
                break;

            case 2:
                std::cout << " \n";
                explorar();
                elegir = false;
                break;

            default:

                std::cout << " \n";
                std::cout << " \n";
                std::cout << " \n";
                std::cout << "Por favor elige una opción válida" << std::endl;
                std::cout << " \n";
                std::cout << "1. Aceptar la guía. \n";
                std::cout << "2. Explorar por tu cuenta. \n";
                std::cout << " \n";
                elegir = true;

                break;
            }

        }//2ndo while

        std::cout << " \n";
        std::cout << "  Volvés a los puestos, muy inquieto. Parece que está anocheciendo. Las criaturas te ofrecen un lugar \n";
        std::cout << "en el que pasar la noche, aceptás manteniedo la calma. \n";
        std::cout << " \n";
        std::cout << "  Fingís que vas a dormir, pero en realidad te ponés a pensar en la runa, en la montaña al final del mercado, \n";
        std::cout << "en que te sentiste observado desde el primer instante en el que llegaste, como si las criaturas supieran que \n";
        std::cout << "estabas por llegar. Entonces, todo cuadra en tu cabeza... \n";
        std::cout << " \n";
        std::cout << "  Toda interacción, hasta la más mínima con cualquier cosa de esta cueva, siempre tuvo intenciones de \n";
        std::cout << "matarte. Pensas en el ave que te 'invitaba' a comer los frutos del musgo, en cómo te sentiste observado desde \n";
        std::cout << "caíste acá abajo, en cómo todo te guió hasta el Mercado, en cómo podrían saber las criaturas que llegarías, si \n";
        std::cout << "Vordren era el único con el que habías hablado.\n";
        std::cout << " \n";
        std::cout << "  Ahora todo es claro como el agua. La fauna y flora de las cuevas es una mente de colmena que te guió hasta el\n";
        std::cout << "Mercado para poder volver a abrir un pasaje a la superficie. Vaya a saber quién con qué intenciones.  \n";
        std::cout << " \n";

        final_bueno::inic_nivel();
        
        return;

    }//void inic_nivel()

 void aceptarGuia()
 {
     std::cout << "  El mercader te guía entre los diferentes puestos. Te habla en un idioma que nunca antes habías escuchado pero \n";
     std::cout << "lo que te cuenta se reproduce en tu cabeza en español, y él entiende lo que vos decís. \n";
     std::cout << " \n";
     std::cout << "   -Estamos acá hace mucho tiempo, somos criaturas muy longevas, hasta ahora no murió nadie por vejez, todo inició \n";
     std::cout << "hace unos 250.000 años, luego de que la caída de un meteorito tirara los escombros de una montaña enorme sobre un extenso\n";
     std::cout << "valle, creando este sistema de cuevas en el que la vida perduró. \n";
     std::cout << " \n";
     std::cout << "   -A diferencia de ustedes, nosotros no tuvimos que empezar a evolucionar desde cero, pero quedamos encerrados acá. \n";
     std::cout << " \n";
     std::cout << "  Llegan al final del mercado, en realidad, el 'final' es una montaña. \n";
     std::cout << " \n";
     std::cout << "   -Éste es nuestro lugar sagrado, creemos que alguna vez fue una puerta entre la superficie y las cuevas, pero desde\n";
     std::cout << "que llegamos nunca pasó nada. Nunca nadie pudo subir. \n";
     std::cout << "  El mercader te muestra una parte de la montaña que está tallada, es muy bonita. Pero hay algo raro, en el centro  \n";
     std::cout << "hay una cavidad muy pequeña parecida a la runa que juntaste apenas caíste en la cueva. Es más, tiene grabada exactamente\n";
     std::cout << "la misma runa. \n";
     std::cout << " \n";
     std::cout << "  Decidís que es mejor no decir nada. Presentís que las intenciones del mercader no son tan inocentes. \n";
     return;

 }// void aceptarGuia()

 void explorar()
 {
     std::cout << "  Avanzás entre los distintos puestos. Sentís que todos te miran.\n";
     std::cout << "  Después de un tiempo, llegás al final del Mercado, bueno, el 'final' no es más que una montaña. Decidis rodearla, solo\n";
     std::cout << "por mera curiosidad. Antes de rodear la montaña, mirás hacia atrás, parece que nadie te está viendo. \n";
     std::cout << " \n";
     std::cout << "  Al llegar a la parte de atrás de la montaña quedás perplejo, grabado en la piedra hay muchas runas y dibujos, alcanzás \n";
     std::cout << "a descifrar algunos caracteres, esto no hace más que volver todo más siniestro. Leés <Sacrificio>, <Humano>, <Acceso> \n";
     std::cout << "<Superficie>, <Infierno> y <Liberación>. Empezás a hiperventilarte, tu corazón parece tener taquicardia. \n";
     std::cout << " \n";
     std::cout << "  Te obligás a calmarte. Terminás de darle la vuelta a la montaña y ves otra parte grabada, esta vez no son runas. Es \n";
     std::cout << "todo muy simétrico y algo te desconcierta. En el centro hay una cavidad muy pequeña parecida a la runa que juntaste apenas \n";
     std::cout << "caíste en la cueva. Es más, tiene grabada exactamente la misma runa. \n";
    return;

 }//void explorar()


} // namespace mercado_rural_2.
