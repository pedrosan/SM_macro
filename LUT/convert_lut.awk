#!/usr/bin/awk -f 

BEGIN{
  n=0;
}
{
  n++;
  r=int(255*$1);
  g=int(255*$2);
  b=int(255*$3);
  # printf "  %8.6f  %8.6f  %8.6f    ",$1,$2,$3;
  # printf "        add_ctype lut%03d  %3d  %3d  %3d\n",n,r,g,b
  printf "        %3d  %3d  %3d\n",r,g,b;
}
