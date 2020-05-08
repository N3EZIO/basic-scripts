#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Syntax: ./ports.sh <ip>"
else
nmap $1| grep open | cut -d " " -f 1 | cut -d"/" -f 1 | tr '\n' ','
fi
