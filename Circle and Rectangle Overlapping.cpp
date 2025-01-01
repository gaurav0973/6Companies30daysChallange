class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {

        int close_Xaxis = max(x1,min(x2,xCenter));
        int close_Yaxis = max(y1,min(y2,yCenter));

        int distanceX = xCenter - close_Xaxis;
        int distanceY = yCenter - close_Yaxis;
        return distanceX * distanceX + distanceY*distanceY <= radius*radius;
    }
};