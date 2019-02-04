/**********************************************************************************
**                                                                               **
**                                                                     **
**                                                                               **
** Arnau Pérez Fuentes                                      3/2/2019           **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************

int num, nums;
long suma;
double mitja;

//********** Setup ****************************************************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.print("Entrar numeros un a un (per acabar 0): ");

}

//********** Loop *****************************************************************
void loop() {
  nums = 0;
  num = 1;
  do{
    // if there's any serial available, read it:
    while (Serial.available() > 0) {
      // look for the next valid integer in the incoming serial stream:
      num = Serial.parseInt(); 
      Serial.print(num);
      Serial.print(" - ");
    
      // look for the newline. That's the end of your sentence:
      if (Serial.read() == '\n') { 
          suma = suma + num;
          nums++; 
      }
    }
  }while (num != 0);
  nums--;
  mitja = float(suma) / nums;
    
  Serial.println(""); 
  Serial.print("S'han entrat ");
  Serial.print(nums);
  Serial.print(" numeros, la suma de tots ells es ");
  Serial.print(suma);
  Serial.print(" i la mitja ");
  Serial.print(mitja);
  Serial.println(".");
  Serial.println("");
  Serial.print("Entrar numeros un a un (per acabar 0): ");   
}

//********** Funcions *************************************************************
