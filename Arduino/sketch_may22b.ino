#include <SoftwareSerial.h>
#include <RDM6300.h>

//Inicializa a serial nos pinos 17 (RX) e 16 (TX)
SoftwareSerial RFID(17,16);

uint8_t Payload[6]; // used for read comparisons

RDM6300 RDM6300(Payload);

void setup()
{
  RFID.begin(9600);
  //Inicializa a serial para comunicacao com o PC
  Serial.begin(9600);
  //Informacoes iniciais
  Serial.println("Leitor RFID RDM6300\n");
}

void loop()
{
 if {
  RFID.read()
 
  //Aguarda a aproximacao da tag RFID
  while (RFID.available() > 0)
  {
    uint8_t c = RFID.read();
    if (RDM6300.decode(c))
    {
      Serial.print("ID TAG: ");
      //Mostra os dados no serial monitor
      for (int i = 0; i < 5; i++) {
        Serial.print(Payload[i], HEX);
        Serial.print(" ");
           }
          }
        }
      }
     }
