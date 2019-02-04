/**********************************************************************************
**                                                                               **
**                               Plantilla                                       **
**                                                                               **
** Arnau Pérez Fuentes                                      28/1/2019                                        **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ********************************************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    Serial.print ("r1= ");
    Serial.print (r1);
    Serial.print ("ohms ");
    r2 = Serial.parseInt();
    Serial.print ("r2= ");
    Serial.print (r2);
    Serial.println ("ohms");
    
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
     Serial.print("rSerie=");
     rSerie=r1+r2;
     Serial.print(rSerie);
     Serial.print("ohms ");
     Serial.print("rParalel=");
     rParalel=(r1*r2)/(r1+r2);
     Serial.print(rParalel);
     Serial.println("ohms");
     Serial.println("Entra nous valors per r1 i r2");
  }
  }
}
