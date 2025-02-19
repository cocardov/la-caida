#ifndef ESTADO_H
#define ESTADO_H

class estado
{
public:
   int valentía, hechicero, suerte, salud, hambre;
   bool muerto;
   void actualizarSalud(int salud);

   estado()
   {
      this->salud = 100;
   }

private:
   void morir();
}; // class estado

static estado estadoGlobal;

#endif