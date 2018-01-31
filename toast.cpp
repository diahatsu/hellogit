#include "toast.h"

toast::toast() //overloaded constructor 1/3
{
    toast_level = 50;
    toast_id = 0;
}
toast::toast(int level) //overloade constructor 2/3
{
    toast_level = level;
    toast_id = 0;
}
toast::toast(int level, int id) //overloaded constructor 3/3
{
    toast_level = level;
    toast_id = id;
}

void toast::setToastLevel(int level) //set fuction (level)
{
    toast_level = level;
}
int toast::getToastLevel() //get function (level)
{
    return toast_level;
}

void toast::setToastID(int id) //set function (id)
{
    toast_id = id;
}
int toast::getToastID() //get function (id)
{
    return toast_id;
}
