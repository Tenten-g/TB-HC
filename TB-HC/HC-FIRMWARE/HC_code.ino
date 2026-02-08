void setup() {
  // put your setup code here, to run once:

  U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);
int button;
pinMode(8, INPUT );
pinMode(9, INPUT );
pinMode(10, INPUT );
pinMode(11, INPUT );
}

void loop() {
  u8g2.setFont(u8g2_font_ncenB14_tr);
  if (digitalRead(8) == HIGH){
    button = 8;
    u8g2.clearBuffer();
    u8g2.drawStr(0,15, button);
    u8g2.sendBuffer();
    delay(1000);
  }
  if (digitalRead(9) == HIGH){
    button = 9;
    u8g2.clearBuffer();
    u8g2.drawStr(0,15, button);
    u8g2.sendBuffer();
    delay(1000);
  }
  if (digitalRead(10) == HIGH){
    button = 10;
    u8g2.clearBuffer();
    u8g2.drawStr(0,15, button);
    u8g2.sendBuffer();
    delay(1000);
  }
  if (digitalRead(11) == HIGH){
    button = 11;
    u8g2.clearBuffer();
    u8g2.drawStr(0,15, button);
    u8g2.sendBuffer();
    delay(1000);
  }

  // put your main code here, to run repeatedly:

}
