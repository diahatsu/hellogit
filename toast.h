class toast
{
    private:
        int toast_level;
        int toast_id;

    public:
        toast() //overloaded constructor 1/3
        {
            toast_level = 50;
            toast_id = 0;
        }
        toast(int level) //overloade constructor 2/3
        {
            toast_level = level;
            toast_id = 0;
        }
        toast(int level, int id) //overloaded constructor 3/3
        {
            toast_level = level;
            toast_id = id;
        }

        void setToastLevel(int level) //set fuction (level)
        {
            toast_level = level;
        }
        int getToastLevel() //get function (level)
        {
            return toast_level;
        }

        void setToastID(int id) //set function (id)
        {
            toast_id = id;
        }
        int getToastID() //get function (id)
        {
            return toast_id;
        }
};
