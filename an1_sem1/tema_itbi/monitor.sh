#!/bin/bash

#creeaza fisierul daca nu exista
fisier="/home/tirdeadominic/Documents/tema_itbi/data"
x="0"
for entry in `ls $1`;do
    if [  "/home/tirdeadominic/Documents/tema_itbi/$entry" == $fisier ]; then
        x="1"
    fi
done
if [ "$x" -eq "0" ]; then
    mkdir "$fisier"
fi

# ce face awk If your script relies on specific software or comus"
# pe poz 4 status
# pe poz 5 numele

logfile="/var/log/dpkg.log"
y="0"
while read line
do
    if [ "$y" -eq "0" ]; then
        echo "$line" >> "$HOME/Documents/tema_itbi/monitor.log"
        y="1"
    fi
    if [[ "$line" == *"install"* ]];then
        echo "$line" >> "$HOME/Documents/tema_ibi/monitor.log"
        package=$(echo "$line" | awk '{print $5}')
        if [[ ! -d "$fisier/$package" ]]; then
            mkdir "$HOME/Documents/tema_itbi/data/$package"
        fi
        echo "$line" | awk '{print $1,$2,$4}' >> "$fisier/$package/history.txt"
    fi
    if [[ $line == *"removed"* ]]; then
        package=$(echo "$line" | awk '{print $5}')
    
        if [[ ! -d "$fisier/$package" ]]; then
            mkdir "$fisier/$package" && touch "$fisier/$package/history.txt" 
        fi
    fi
done < "$logfile" 

echo "Scriptul de Monitor a fost finalizat"


