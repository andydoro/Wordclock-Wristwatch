
void displayTime(void) {

  // get time from the RTC
  //DateTime theTime = calculateTime(); // takes into account DST
  DateTime theTime = DST.calculateTime(RTC.now());
  theTime = theTime.unixtime() + 150;  // add 2.5 minutes to give better five minute estimates.

  //DateTime theTime;
  /*
    // serial print current time
    Serial.print(theTime.year(), DEC);
    Serial.print('/');
    Serial.print(theTime.month(), DEC);
    Serial.print('/');
    Serial.print(theTime.day(), DEC);
    Serial.print(' ');
    Serial.print(theTime.hour(), DEC);
    Serial.print(':');
    Serial.print(theTime.minute(), DEC);
    Serial.print(':');
    Serial.print(theTime.second(), DEC);
    Serial.println();
  */
  // turn everything off
  watch.fillScreen(0);

  // theTime we display the appropriate theTime.minute() counter
  if ((theTime.minute() > 4) && (theTime.minute() < 10)) {
    MFIVE;
  }
  if ((theTime.minute() > 9) && (theTime.minute() < 15)) {
    MTEN;
  }
  if ((theTime.minute() > 14) && (theTime.minute() < 20)) {
    AQUARTER;
  }
  if ((theTime.minute() > 19) && (theTime.minute() < 25)) {
    TWENTY;
  }
  if ((theTime.minute() > 24) && (theTime.minute() < 30)) {
    TWENTY;
    MFIVE;
  }
  if ((theTime.minute() > 29) && (theTime.minute() < 35)) {
    HALF;
  }
  if ((theTime.minute() > 34) && (theTime.minute() < 40)) {
    TWENTY;
    MFIVE;
  }
  if ((theTime.minute() > 39) && (theTime.minute() < 45)) {
    TWENTY;
  }
  if ((theTime.minute() > 44) && (theTime.minute() < 50)) {
    AQUARTER;
  }
  if ((theTime.minute() > 49) && (theTime.minute() < 55)) {
    MTEN;
  }
  if (theTime.minute() > 54) {
    MFIVE;
  }

  if ((theTime.minute() < 5))
  {
    switch (theTime.hour()) {
      case 1:
      case 13:
        ONE;
        break;
      case 2:
      case 14:
        TWO;
        break;
      case 3:
      case 15:
        THREE;
        break;
      case 4:
      case 16:
        FOUR;
        break;
      case 5:
      case 17:
        FIVE;
        break;
      case 6:
      case 18:
        SIX;
        break;
      case 7:
      case 19:
        SEVEN;
        break;
      case 8:
      case 20:
        EIGHT;
        break;
      case 9:
      case 21:
        NINE;
        break;
      case 10:
      case 22:
        TEN;
        break;
      case 11:
      case 23:
        ELEVEN;
        break;
      case 0:
      case 12:
        TWELVE;
        break;
    }
    //OCLOCK;
  }
  else if ((theTime.minute() < 35) && (theTime.minute() > 4))
  {
    PAST;
    switch (theTime.hour()) {
      case 1:
      case 13:
        ONE;
        break;
      case 2:
      case 14:
        TWO;
        break;
      case 3:
      case 15:
        THREE;
        break;
      case 4:
      case 16:
        FOUR;
        break;
      case 5:
      case 17:
        FIVE;
        break;
      case 6:
      case 18:
        SIX;
        break;
      case 7:
      case 19:
        SEVEN;
        break;
      case 8:
      case 20:
        EIGHT;
        break;
      case 9:
      case 21:
        NINE;
        break;
      case 10:
      case 22:
        TEN;
        break;
      case 11:
      case 23:
        ELEVEN;
        break;
      case 0:
      case 12:
        TWELVE;
        break;
    }
  }
  else
  {
    // if we are greater than 34 minutes past the hour then display
    // the next hour, as we will be displaying a 'to' sign
    TO;
    switch (theTime.hour()) {
      case 1:
      case 13:
        TWO;
        break;
      case 14:
      case 2:
        THREE;
        break;
      case 15:
      case 3:
        FOUR;
        break;
      case 4:
      case 16:
        FIVE;
        break;
      case 5:
      case 17:
        SIX;
        break;
      case 6:
      case 18:
        SEVEN;
        break;
      case 7:
      case 19:
        EIGHT;
        break;
      case 8:
      case 20:
        NINE;
        break;
      case 9:
      case 21:
        TEN;
        break;
      case 10:
      case 22:
        ELEVEN;
        break;
      case 11:
      case 23:
        TWELVE;
        break;
      case 0:
      case 12:
        ONE;
        break;
    }
  }
  //watch.writeDisplay();

}









