
#!/bin/bash
# Shell script



cd ~/debchive
ls > packages.txt
gksudo 
sudo dpkg -i $(cat packages.txt)
rm -rf packages.txt
