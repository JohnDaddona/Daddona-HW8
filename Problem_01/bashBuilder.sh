# John Daddona
# Homework 08
# This is a small bash script to build the compiled
# LED codes together. An example Invocation is ./bashBuilder.sh

#!/bin/bash

g++ -g myApp.cpp derek_LED.cpp -o myApp

echo "Done building!"
