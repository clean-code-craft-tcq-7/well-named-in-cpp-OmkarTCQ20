#include "TelCoColurCoder.hpp"
Using namespace TelCoColorCoder;

TelCoColorCoder :: ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder :: MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        TelCoColorCoder :: MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

TelCoColorCoder :: int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
  }

TelCoColorCoder :: ColorPair::MajorColor getMajor() {
    return majorColor;
 }
TelCoColorCoder :: ColorPair:: MinorColor getMinor() {
      return minorColor;
 }

TelCoColorCoder :: ColorPair::std::string ToString() {
  std::string colorPairStr = MajorColorNames[majorColor];
  colorPairStr += " ";
  colorPairStr += MinorColorNames[minorColor];
   return colorPairStr;
 }
