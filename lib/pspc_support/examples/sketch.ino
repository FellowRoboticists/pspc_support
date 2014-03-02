// pspc_support Arduino library
//
// Copyright (c) 2014 Dave Sieh
// See LICENSE.txt for details.

#include <pspc_support.h>

int loopIndex = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // NOTE: the P(...) is the thing
  Serial.print(P("Loop Index = ")); Serial.println(loopIndex);

  loopIndex++;
  delay(1000);
}
