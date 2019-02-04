/**********************************************************************************
**                                                                               **
**                               Plantilla                                       **
**                                                                               **
** Arnau Pérez Fuentes                                      28/1/2019                                        **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int thisByte = 126; 

//********** Setup ****************************************************************
void setup() 
{ 
  Serial.begin(9600); 
  Serial.println("ASCII Table ~ Character Map"); 
} 

void loop()
{ 
  Serial.write(thisByte);    
  Serial.print(", dec: "); 
  Serial.print(thisByte);      
  Serial.print(", hex: "); 
  Serial.print(thisByte, HEX);     
  Serial.print(", oct: "); 
  Serial.print(thisByte, OCT);     
  Serial.print(", bin: "); 
  Serial.println(thisByte, BIN);   

  if(thisByte == 126)  // if printed last visible character '~'
  { 
    while(true)
    { 
    } 
  } 
    } 
