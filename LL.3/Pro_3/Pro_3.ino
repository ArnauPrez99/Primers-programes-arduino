/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 100;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua<90)
  {
    Serial.println("Aigua encara no bull");
}

  else if (tempAigua>=90 && tempAigua<100)
{
  Serial.println("Aigua a punt de bullir");
}
  
 else if (tempAigua==100)
 {
   Serial.println ("Aigua a 100ºC");
  }

 else 
 {
  Serial.println ("Aigua bullint");
 } 
}
//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
