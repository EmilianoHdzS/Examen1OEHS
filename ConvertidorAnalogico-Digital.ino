
//profe el codigo me compilo 2 o 3 veces bien y despues de eso ya no quiso 
//supuestamente porque detectaba errores pero eso no habia pasado la primera vez

unsigned char outport []= {2,3,4,5,6,7,8,9,10,11}; // para declarar las salidas
void porta(unsigned char ndato);

unsigned char x;
for(x=0;x<=7;x++)
{
  if((ndato>>x)&1)
  digitalWrite(outport[x],HIGH);
  else
  digitalWrite(outport[x],LOW);

}

void setup() {

  unsigned char y;
  for(y=0;y<=7;y++)
    pinMode(outport[y],OUTPUT);
  
}

void loop() {

  unsigned char ndato;
  while(1)
  {
    delayMicroseconds(100);
    ndato = analogRead(0)>>2;

    porta(ndato);
  }
  
}
