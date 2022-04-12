#!/usr/bin/env bash

make

printf "\nTEST: INVALID AMOUNT OF ARGS\n"
rm -f in*
./ex04
./ex04 0
./ex04 0 1
./ex04 0 1 2 3

printf "\nTEST: INVALID S1/S2\n"
rm -f in*
ls -la > infile
./ex04 infile "" ""
./ex04 infile "" "lol"
./ex04 infile "lol" ""

printf "\nTEST: INVALID INPUT/OUTPUT\n"
rm -f in*
ls -la > infile
chmod 0 infile
./ex04 infile "cool" "ok"
touch infile.replace
chmod a+r infile
chmod 0 infile.replace
./ex04 infile "cool" "ok"

printf "\nTEST: FUNCTIONNALITY (replacing every 'w' with ' [[ wow! ]] ')\n"
rm -f in*
ls -la > infile
printf "\nEXECUTION:\n\n"
./ex04 infile "w" " [[ wow! ]] "
printf "\nBEFORE:\n\n"
cat infile
printf "\nAFTER:\n\n"
cat infile.replace

printf "\nCLEANING UP...\n"
rm -f in*
make fclean