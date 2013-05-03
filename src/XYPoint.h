
#ifndef XYPOINT_ECP6549W

#define XYPOINT_ECP6549W


class XYPoint
{
    private:
    int x,y;

    public:
    // Constructeur
    XYPoint(int,int);
    ~XYPoint();
    // Accesseurs
    int getX();
    int getY();
    // Mutateurs
    void setX();
    void setY();
};

#endif /* end of include guard: XYPOINT_ECP6549W */
