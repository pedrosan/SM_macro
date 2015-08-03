

awk '{r=255*$1;g=255*$2;b=255*$3;printf "  %5.1f  %5.1f  %5.1f\n",r,g,b}' /more/software/CIAO-4.0/data/b.lut
awk '{r=int(255*$1);g=int(255*$2);b=int(255*$3);printf "  %3d  %3d  %3d\n",r,g,b}' /more/software/CIAO-4.0/data/b.lut
