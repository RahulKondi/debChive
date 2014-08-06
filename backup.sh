#!/bin/bash
# Shell script

echo "Shell script working!"
cd ~/
gksudo
rm -rf debchive
mkdir debchive
cp -R /var/cache/apt/archives/* ~/debchive







