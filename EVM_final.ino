#include<LiquidCrystal.h>
LiquidCrystal lcd(11,10,9,8,7,6);
#define sw1 A0
#define sw2 A1
#define sw3 A2
#define sw4 17
#define sw5 18
#define sw6 19
int vote1=0;
int vote2=0;
int vote3=0;
int vote4=0;
void setup()
{
pinMode(sw1, INPUT);
pinMode(sw2,INPUT);
pinMode(sw3,INPUT);
pinMode(sw4,INPUT);
pinMode(sw5,INPUT);
pinMode(sw6, INPUT);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);

lcd.begin(16, 2);
lcd.setCursor(0,0);
lcd.print("Aryan 210002016");
lcd.setCursor(0,1);
lcd.print("Dhananjay 2026");
delay(3000);
lcd.clear();
lcd.print(" VOTING MACHINE ");
lcd.setCursor(0,1);
lcd.print("  LCD DISPLAY");
delay(3000);
digitalWrite(sw1, HIGH);
digitalWrite(sw2, HIGH);
digitalWrite(sw3, HIGH);
digitalWrite(sw4, HIGH);
digitalWrite(sw5, HIGH);
digitalWrite(sw6, HIGH);
lcd.clear();
// lcd.setCursor(0,0);
// lcd.print("AAP");
// lcd.setCursor(4,0);
// lcd.print("BJP");
// lcd.setCursor(8,0);
// lcd.print("INC");
// lcd.setCursor(12,0);
// lcd.print("OTH");
// lcd.clear()
}
void loop()
{int vote=vote1+vote2+vote3+vote4;
  lcd.setCursor(0,0);
lcd.print("1.AAP");
lcd.setCursor(7,0);
lcd.print("2.BJP");
lcd.setCursor(0,1);
lcd.print("3.INC");
lcd.setCursor(7,1);
lcd.print("4.NOTA");
 
// lcd.setCursor(0,0);
// lcd.print("AAP");
// lcd.setCursor(1,1);
// lcd.print(vote1);
// lcd.setCursor(4,0);
// lcd.print("BJP");
// lcd.setCursor(5,1);
// lcd.print(vote2);
// lcd.setCursor(8,0);
// lcd.print("INC");
// lcd.setCursor(9,1);
// lcd.print(vote3);
// lcd.setCursor(12,0);
// lcd.print("OTH");
// lcd.setCursor(13,1);
// lcd.print(vote4);
if(digitalRead(sw6)==0){
if(digitalRead(sw1)==0)
{ digitalWrite(12,HIGH);
vote1++;
lcd.clear();
lcd.setCursor(0,0);
lcd.print("  voted AAP");
while(digitalRead(sw1)==0);
digitalWrite(12,LOW);
delay(2000);
lcd.clear();
}

if(digitalRead(sw2)==0)
{

vote2++;
lcd.clear();
lcd.setCursor(1,0);
lcd.print("  voted BJP");
digitalWrite(12,HIGH);
while(digitalRead(sw2)==0);
digitalWrite(12,LOW);
delay(2000);
lcd.clear();
}

if(digitalRead(sw3)==0)
{
digitalWrite(12,HIGH);
vote3++;
lcd.clear();
lcd.setCursor(1,0);
lcd.print("  voted INC");
while(digitalRead(sw3)==0);
digitalWrite(12,LOW);
delay(2000);
lcd.clear();
}

if(digitalRead(sw4)==0)
{
digitalWrite(12,HIGH);
vote4++;
lcd.clear();
lcd.setCursor(1,0);
lcd.print("  voted NOTA");
while(digitalRead(sw4)==0);
digitalWrite(12,LOW);
delay(2000 );
lcd.clear();
}
if(digitalRead(sw5)==0)
{
digitalWrite(13,HIGH);

if(vote)
{
if((vote1 > vote2 && vote1 > vote3 && vote1 > vote4))
{
lcd.clear();
lcd.print("AAP Wins  ( )");
lcd.setCursor(11, 0);
lcd.print(vote1);
 lcd.setCursor(0,1);
  lcd.print("Total vote =");
  lcd.setCursor(13, 1);
  lcd.print(vote);
delay(5000);
lcd.clear();
}
else if((vote2 > vote1 && vote2 > vote3 && vote2 > vote4))
{
lcd.clear();
lcd.print("BJP Wins  ( )");
 lcd.setCursor(11, 0);
lcd.print(vote2);
 lcd.setCursor(0,1);
  lcd.print("Total vote =");
  lcd.setCursor(13, 1);
  lcd.print(vote);
delay(5000);
lcd.clear();
}
else if((vote3 > vote1 && vote3 > vote2 && vote3 > vote4))
{
lcd.clear();
lcd.print("INC Wins  ( )");
lcd.setCursor(11, 0);
lcd.print(vote3);
 lcd.setCursor(0,1);
  lcd.print("Total vote =");
  lcd.setCursor(13, 1);
  lcd.print(vote);
delay(5000);
lcd.clear();
}
else if(vote4 > vote1 && vote4 > vote2 && vote4 > vote3)
{
lcd.setCursor(0,0);
lcd.clear();
lcd.print("NOTA Wins ( )");
lcd.setCursor(11, 0);
lcd.print(vote4);
 lcd.setCursor(0,1);
  lcd.print("Total vote =");
  lcd.setCursor(13, 1);
  lcd.print(vote);
  delay(1200);
lcd.clear();
lcd.print("  Re-election  ");
delay(5000);
lcd.clear();
}

else
{
lcd.clear();
lcd.print("     Tie Up");
lcd.setCursor(0,1);
  lcd.print("Total vote =");
  lcd.setCursor(13, 1);
  lcd.print(vote);
delay(5000);
lcd.clear();
}

}
else
{
lcd.clear();
lcd.print("   No Voting");
lcd.setCursor(0,1);
  lcd.print("Total vote =");
  lcd.setCursor(13, 1);
  lcd.print(vote);
delay(5000);
lcd.clear();
}
vote1=0;vote2=0;vote3=0;vote4=0,vote=0;
lcd.clear();
digitalWrite(12,LOW);
digitalWrite(13,LOW);
}
}
}