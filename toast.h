#ifndef TOAST_H
#define TOAST_H

class toast
{
    private:
        int toast_level;
        int toast_id;

    public:
        toast(); //overloaded constructor 1/3
        toast(int level); //overloade constructor 2/3
        toast(int level, int id); //overloaded constructor 3/3

        void setToastLevel(int level); //set fuction (level)
        int getToastLevel(); //get function (level)

        void setToastID(int id); //set function (id)
        int getToastID(); //get function (id)
};
