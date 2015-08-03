// Copyright (C) 1999-2010
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>

#include "default.h"
#include "util.h"

GreyColorMap::GreyColorMap()
{
  name = dupstr("Grey");
  fileName = dupstr("grey.sao");

  char* redStr = (char*)"(0,0)(1,1)";
  char* greenStr = (char*)"(0,0)(1,1)";
  char* blueStr = (char*)"(0,0)(1,1)";

  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

RedColorMap::RedColorMap()
{
  name = dupstr("Red");
  fileName = dupstr("red.sao");

  char* redStr = (char*)"(0,0)(1,1)";
  char* greenStr = (char*)"(0,0)(0,0)";
  char* blueStr = (char*)"(0,0)(0,0)";

  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

GreenColorMap::GreenColorMap()
{
  name = dupstr("Green");
  fileName = dupstr("green.sao");

  char* redStr = (char*)"(0,0)(0,0)";
  char* greenStr = (char*)"(0,0)(1,1)";
  char* blueStr = (char*)"(0,0)(0,0)";

  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

BlueColorMap::BlueColorMap()
{
  name = dupstr("Blue");
  fileName = dupstr("blue.sao");

  char* redStr = (char*)"(0,0)(0,0)";
  char* greenStr = (char*)"(0,0)(0,0)";
  char* blueStr = (char*)"(0,0)(1,1)";

  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

AColorMap::AColorMap()
{
  name = dupstr("A");
  fileName = dupstr("a.sao");
  
  char* redStr = (char*)"(0,0)(.25,0)(.5,1)(1,1)";
  char* greenStr = (char*)"(0,0)(.25,1)(.5,0)(.77,0)(1,1)";
  char* blueStr = (char*)"(0,0)(.125,0)(.5,1)(.64,.5)(.77,0)(1,0)";

  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

BColorMap::BColorMap()
{
  name = dupstr("B");
  fileName = dupstr("b.sao");
  
  char* redStr = (char*)"(0,0)(.25,0)(.5,1)(1,1)";
  char* greenStr = (char*)"(0,0)(.5,0)(.75,1)(1,1)";
  char* blueStr = (char*)"(0,0)(.25,1)(.5,0)(.75,0)(1,1)";

  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

BBColorMap::BBColorMap()
{
  name = dupstr("BB");
  fileName = dupstr("bb.sao");
  
  char* redStr = (char*)"(0,0)(.5,1)(1,1)";
  char* greenStr = (char*)"(0,0)(.25,0)(.75,1)(1,1)";
  char* blueStr = (char*)"(0,0)(.5,0)(1,1)";

  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

HEColorMap::HEColorMap()
{
  name = dupstr("HE");
  fileName = dupstr("he.sao");
  
  char* redStr = (char*)"(0,0)(.015,.5)(.25,.5)(.5,.75)(1,1)";
  char* greenStr = (char*)"(0,0)(.065,0)(.125,.5)(.25,.75)(.5,.810)(1,1)";
  char* blueStr = (char*)"(0,0)(.015,.125)(.030,.375)(.065,.625)(.25,.25)(1,1)";

  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

I8ColorMap::I8ColorMap()
{
  name = dupstr("I8");
  fileName = dupstr("i8.lut");
  size = 8;
  colors = new RGBColor[8];

  colors[0] = RGBColor(0,0,0);
  colors[1] = RGBColor(0,1,0);
  colors[2] = RGBColor(0,0,1);
  colors[3] = RGBColor(0,1,1);
  colors[4] = RGBColor(1,0,0);
  colors[5] = RGBColor(1,1,0);
  colors[6] = RGBColor(1,0,1);
  colors[7] = RGBColor(1,1,1);
}

AIPSColorMap::AIPSColorMap()
{
  name = dupstr("AIPS0");
  fileName = dupstr("aips0.lut");
  size = 9;
  colors = new RGBColor[9];

  colors[0] = RGBColor(.196,.196,.196);
  colors[1] = RGBColor(.475,.000,.608);
  colors[2] = RGBColor(.000,.000,.785);
  colors[3] = RGBColor(.373,.655,.925);
  colors[4] = RGBColor(.000,.596,.000);
  colors[5] = RGBColor(.000,.965,.000);
  colors[6] = RGBColor(1.00,1.00,.000);
  colors[7] = RGBColor(1.00,.694,.000);
  colors[8] = RGBColor(1.00,.000,.000);
}

HeatColorMap::HeatColorMap()
{
  name = dupstr("Heat");
  fileName = dupstr("heat.sao");

  char* redStr = (char*)"(0,0)(.34,1)(1,1)";
  char* greenStr = (char*)"(0,0)(1,1)";
  char* blueStr = (char*)"(0,0)(.65,0)(.98,1)(1,1)";
 
  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

CoolColorMap::CoolColorMap()
{
  name = dupstr("Cool");
  fileName = dupstr("cool.sao");

  char* redStr = (char*)"(0,0)(.29,0)(.76,.1)(1,1)";
  char* greenStr = (char*)"(0,0)(.22,0)(.96,1)(1,1)";
  char* blueStr = (char*)"(0,0)(.53,1)(1,1)";
 
  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

RainbowColorMap::RainbowColorMap()
{
  name = dupstr("Rainbow");
  fileName = dupstr("rainbow.sao");

  char* redStr = (char*)"(0,1)(.2,0)(.6,0)(.8,1)(1,1)";
  char* greenStr = (char*)"(0,0)(.2,0)(.4,1)(.8,1)(1,0)";
  char* blueStr = (char*)"(0,1)(.4,1)(.6,0)(1,0)";
 
  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

StandardColorMap::StandardColorMap()
{
  name = dupstr("Standard");
  fileName = dupstr("standard.sao");

  char* redStr = (char*)"(0,0)(.333,.3)(.333, 0)(.666,.3)(.666,.3)(1, 1)";
  char* greenStr = (char*)"(0,0)(.333,.3)(.333,.3)(.666, 1)(.666, 0)(1,.3)";
  char* blueStr = (char*)"(0,0)(.333, 1)(.333, 0)(.666,.3)(.666, 0)(1,.3)";
 
  loadColor(redStr, &red);
  loadColor(greenStr, &green);
  loadColor(blueStr, &blue);
}

StaircaseColorMap::StaircaseColorMap()
{
  name = dupstr("Staircase");
  fileName = dupstr("staircase.lut");
  size = 15;
  colors = new RGBColor[15];

  int count = 0;
  {
    for (int i=1; i<=5; i++) {
      float k = i/5.;
      colors[count++] = RGBColor(k*.3,k*.3,k*1);
    }
  }
  {
    for (int i=1; i<=5; i++) {
      float k = i/5.;
      colors[count++] = RGBColor(k*.3,k*1,k*.3);
    }
  }
  {
    for (int i=1; i<=5; i++) {
      float k = i/5.;
      colors[count++] = RGBColor(k*1,k*.3,k*.3);
    }
  }
}

ColorColorMap::ColorColorMap()
{
  name = dupstr("Color");
  fileName = dupstr("color.lut");
  size = 16;
  colors = new RGBColor[16];

  colors[0] = RGBColor(0,0,0);
  colors[1] = RGBColor(0.18431, 0.18431, 0.18431);
  colors[2] = RGBColor(0.37255, 0.37255, 0.37255);
  colors[3] = RGBColor(0.56078, 0.56078, 0.56078);
  colors[4] = RGBColor(0.74902, 0.74902, 0.74902);
  colors[5] = RGBColor(0.93725, 0.93725, 0.93725);
  colors[6] = RGBColor(0.00000, 0.18431, 0.93725);
  colors[7] = RGBColor(0.00000, 0.37255, 0.74902);
  colors[8] = RGBColor(0.00000, 0.49804, 0.49804);
  colors[9] = RGBColor(0.00000, 0.74902, 0.30980);
  colors[10] = RGBColor(0.00000, 0.93725, 0.00000);
  colors[11] = RGBColor(0.30980, 0.62353, 0.00000);
  colors[12] = RGBColor(0.49804, 0.49804, 0.00000);
  colors[13] = RGBColor(0.62353, 0.30980, 0.00000);
  colors[14] = RGBColor(0.93725, 0.00000, 0.00000);
  colors[15] = RGBColor(0.74902, 0.00000, 0.30980);
}

SLSColorMap::SLSColorMap()
{
  name = dupstr("SLS");
  fileName = dupstr("sls.lut");
  size = 200;

  char buf[] = "\
0.000000 0.000000 0.000000\n\
0.043442 0.000000 0.052883\n\
0.086883 0.000000 0.105767\n\
0.130325 0.000000 0.158650\n\
0.173767 0.000000 0.211533\n\
0.217208 0.000000 0.264417\n\
0.260650 0.000000 0.317300\n\
0.304092 0.000000 0.370183\n\
0.347533 0.000000 0.423067\n\
0.390975 0.000000 0.475950\n\
0.434417 0.000000 0.528833\n\
0.477858 0.000000 0.581717\n\
0.521300 0.000000 0.634600\n\
0.506742 0.000000 0.640217\n\
0.492183 0.000000 0.645833\n\
0.477625 0.000000 0.651450\n\
0.463067 0.000000 0.657067\n\
0.448508 0.000000 0.662683\n\
0.433950 0.000000 0.668300\n\
0.419392 0.000000 0.673917\n\
0.404833 0.000000 0.679533\n\
0.390275 0.000000 0.685150\n\
0.375717 0.000000 0.690767\n\
0.361158 0.000000 0.696383\n\
0.346600 0.000000 0.702000\n\
0.317717 0.000000 0.712192\n\
0.288833 0.000000 0.722383\n\
0.259950 0.000000 0.732575\n\
0.231067 0.000000 0.742767\n\
0.202183 0.000000 0.752958\n\
0.173300 0.000000 0.763150\n\
0.144417 0.000000 0.773342\n\
0.115533 0.000000 0.783533\n\
0.086650 0.000000 0.793725\n\
0.057767 0.000000 0.803917\n\
0.028883 0.000000 0.814108\n\
0.000000 0.000000 0.824300\n\
0.000000 0.019817 0.838942\n\
0.000000 0.039633 0.853583\n\
0.000000 0.059450 0.868225\n\
0.000000 0.079267 0.882867\n\
0.000000 0.099083 0.897508\n\
0.000000 0.118900 0.912150\n\
0.000000 0.138717 0.926792\n\
0.000000 0.158533 0.941433\n\
0.000000 0.178350 0.956075\n\
0.000000 0.198167 0.970717\n\
0.000000 0.217983 0.985358\n\
0.000000 0.237800 1.000000\n\
0.000000 0.268533 1.000000\n\
0.000000 0.299267 1.000000\n\
0.000000 0.330000 1.000000\n\
0.000000 0.360733 1.000000\n\
0.000000 0.391467 1.000000\n\
0.000000 0.422200 1.000000\n\
0.000000 0.452933 1.000000\n\
0.000000 0.483667 1.000000\n\
0.000000 0.514400 1.000000\n\
0.000000 0.545133 1.000000\n\
0.000000 0.575867 1.000000\n\
0.000000 0.606600 1.000000\n\
0.000000 0.631733 0.975300\n\
0.000000 0.656867 0.950600\n\
0.000000 0.682000 0.925900\n\
0.000000 0.707133 0.901200\n\
0.000000 0.732267 0.876500\n\
0.000000 0.757400 0.851800\n\
0.000000 0.782533 0.827100\n\
0.000000 0.807667 0.802400\n\
0.000000 0.832800 0.777700\n\
0.000000 0.857933 0.753000\n\
0.000000 0.883067 0.728300\n\
0.000000 0.908200 0.703600\n\
0.000000 0.901908 0.676675\n\
0.000000 0.895617 0.649750\n\
0.000000 0.889325 0.622825\n\
0.000000 0.883033 0.595900\n\
0.000000 0.876742 0.568975\n\
0.000000 0.870450 0.542050\n\
0.000000 0.864158 0.515125\n\
0.000000 0.857867 0.488200\n\
0.000000 0.851575 0.461275\n\
0.000000 0.845283 0.434350\n\
0.000000 0.838992 0.407425\n\
0.000000 0.832700 0.380500\n\
0.000000 0.832308 0.354858\n\
0.000000 0.831917 0.329217\n\
0.000000 0.831525 0.303575\n\
0.000000 0.831133 0.277933\n\
0.000000 0.830742 0.252292\n\
0.000000 0.830350 0.226650\n\
0.000000 0.829958 0.201008\n\
0.000000 0.829567 0.175367\n\
0.000000 0.829175 0.149725\n\
0.000000 0.828783 0.124083\n\
0.000000 0.828392 0.098442\n\
0.000000 0.828000 0.072800\n\
0.033167 0.834167 0.066733\n\
0.066333 0.840333 0.060667\n\
0.099500 0.846500 0.054600\n\
0.132667 0.852667 0.048533\n\
0.165833 0.858833 0.042467\n\
0.199000 0.865000 0.036400\n\
0.232167 0.871167 0.030333\n\
0.265333 0.877333 0.024267\n\
0.298500 0.883500 0.018200\n\
0.331667 0.889667 0.012133\n\
0.364833 0.895833 0.006067\n\
0.398000 0.902000 0.000000\n\
0.430950 0.902000 0.000000\n\
0.463900 0.902000 0.000000\n\
0.496850 0.902000 0.000000\n\
0.529800 0.902000 0.000000\n\
0.562750 0.902000 0.000000\n\
0.595700 0.902000 0.000000\n\
0.628650 0.902000 0.000000\n\
0.661600 0.902000 0.000000\n\
0.694550 0.902000 0.000000\n\
0.727500 0.902000 0.000000\n\
0.760450 0.902000 0.000000\n\
0.793400 0.902000 0.000000\n\
0.810617 0.897133 0.003983\n\
0.827833 0.892267 0.007967\n\
0.845050 0.887400 0.011950\n\
0.862267 0.882533 0.015933\n\
0.879483 0.877667 0.019917\n\
0.896700 0.872800 0.023900\n\
0.913917 0.867933 0.027883\n\
0.931133 0.863067 0.031867\n\
0.948350 0.858200 0.035850\n\
0.965567 0.853333 0.039833\n\
0.982783 0.848467 0.043817\n\
1.000000 0.843600 0.047800\n\
0.995725 0.824892 0.051600\n\
0.991450 0.806183 0.055400\n\
0.987175 0.787475 0.059200\n\
0.982900 0.768767 0.063000\n\
0.978625 0.750058 0.066800\n\
0.974350 0.731350 0.070600\n\
0.970075 0.712642 0.074400\n\
0.965800 0.693933 0.078200\n\
0.961525 0.675225 0.082000\n\
0.957250 0.656517 0.085800\n\
0.952975 0.637808 0.089600\n\
0.948700 0.619100 0.093400\n\
0.952975 0.600408 0.085617\n\
0.957250 0.581717 0.077833\n\
0.961525 0.563025 0.070050\n\
0.965800 0.544333 0.062267\n\
0.970075 0.525642 0.054483\n\
0.974350 0.506950 0.046700\n\
0.978625 0.488258 0.038917\n\
0.982900 0.469567 0.031133\n\
0.987175 0.450875 0.023350\n\
0.991450 0.432183 0.015567\n\
0.995725 0.413492 0.007783\n\
1.000000 0.394800 0.000000\n\
0.998342 0.361900 0.000000\n\
0.996683 0.329000 0.000000\n\
0.995025 0.296100 0.000000\n\
0.993367 0.263200 0.000000\n\
0.991708 0.230300 0.000000\n\
0.990050 0.197400 0.000000\n\
0.988392 0.164500 0.000000\n\
0.986733 0.131600 0.000000\n\
0.985075 0.098700 0.000000\n\
0.983417 0.065800 0.000000\n\
0.981758 0.032900 0.000000\n\
0.980100 0.000000 0.000000\n\
0.955925 0.000000 0.000000\n\
0.931750 0.000000 0.000000\n\
0.907575 0.000000 0.000000\n\
0.883400 0.000000 0.000000\n\
0.859225 0.000000 0.000000\n\
0.835050 0.000000 0.000000\n\
0.810875 0.000000 0.000000\n\
0.786700 0.000000 0.000000\n\
0.762525 0.000000 0.000000\n\
0.738350 0.000000 0.000000\n\
0.714175 0.000000 0.000000\n\
0.690000 0.000000 0.000000\n\
0.715833 0.083333 0.083333\n\
0.741667 0.166667 0.166667\n\
0.767500 0.250000 0.250000\n\
0.793333 0.333333 0.333333\n\
0.819167 0.416667 0.416667\n\
0.845000 0.500000 0.500000\n\
0.870833 0.583333 0.583333\n\
0.896667 0.666667 0.666667\n\
0.922500 0.750000 0.750000\n\
0.948333 0.833333 0.833333\n\
0.974167 0.916667 0.916667\n\
1.000000 1.000000 1.000000\n\
1.000000 1.000000 1.000000\n\
1.000000 1.000000 1.000000\n\
1.000000 1.000000 1.000000\n\
1.000000 1.000000 1.000000\n\
1.000000 1.000000 1.000000\n\
1.000000 1.000000 1.000000\n\
1.000000 1.000000 1.000000\n\
";

  string x(buf);
  istringstream str(x);

  colors = new RGBColor[size];
  for (int i=0; i<size; i++)
    str >> colors[i];
}

HSVColorMap::HSVColorMap()
{
  /* HSV: hue varies uniformly from 270 to 360 and back to 270.
   * Value varies from zero to one using a cube root relation
   * which causes the value to approach 1.0 rapidly away from zero.
   * Saturation is zero near the endpoints, causing the curve
   * to range from black to white at the endpoints, but ranges
   * to 1.0 at the halfway point, causing nearly saturated colors
   * in the middle of the range.
   */

  name = dupstr("HSV");
  fileName = dupstr("hsv.lut");
  size = 200;
  colors = new RGBColor[size];

  for (int i=0; i<size; i++) {
    // generate in hsv
    float frac = 1.0 - ((float)i / (float)(size - 1));

    float h = frac * 360.0 + 270.0;
    float s = fabs(sin (frac * 3.1416));
    float v = pow((1.0 - frac), (1.0 / 3.0));

    // convert to rgb
    while (h >= 360.0)
      h -= 360.0;

    h /= 60.0;
    int ii = (int)h;
    float f = h - ii;
    float p = v * (1 - s);
    float q = v * (1 - s*f);
    float t = v * (1 - s * (1.0 - f));

    switch (ii) {
    case 0:
      colors[i] = RGBColor(v,t,p);
      break;
    case 1:
      colors[i] = RGBColor(q,v,p);
      break;
    case 2:
      colors[i] = RGBColor(p,v,t);
      break;
    case 3:
      colors[i] = RGBColor(p,q,v);
      break;
    case 4:
      colors[i] = RGBColor(t,p,v);
      break;
    case 5:
      colors[i] = RGBColor(v,p,q);
      break;
    }
  }
}
