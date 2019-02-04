/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int IndicadorEnergetic = 100;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (IndicadorEnergetic<3.5)
  {
    Serial.println("A");
}

  else if (IndicadorEnergetic<6.5)
{
  Serial.println("B");
}  
 else if (IndicadorEnergetic<11.1)
 {
   Serial.println ("C");
  }
 else if (IndicadorEnergetic<17.7)
 {
  Serial.println ("D");
 } 
 else if (IndicadorEnergetic<38.2)
 {
  Serial.println ("E");
 }
 else if (IndicadorEnergetic<43.2)
 {
  Serial.println ("F");
 }
 else 
 {
  Serial.println ("G");
 }
}
//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
