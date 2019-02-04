/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  drive_kb = drive_mb;
  drive_kb = drive_kb * 1024;


  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");

  Serial.print( drive_kb); 
  Serial.println(" Kilobytes.");
  
  
  drive_mb = drive_mb - 2400;

  Serial.print("But it really only stores ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");

  drive_kb = drive_kb - 4857600;

  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");

  missing_drive_kb = 4857600;
  
  Serial.print("You are missing ");
  Serial.print(missing_drive_kb);
  Serial.print(" Kilobytes!");
  
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
