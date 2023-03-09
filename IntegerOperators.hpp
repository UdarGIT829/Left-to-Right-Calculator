//Header for basic integer operations

class IntegerCalculator{

    public:
        int sumOfInts(int arg1, int arg2){
            int thisSum = arg1 + arg2;
            return thisSum;
        }

        int differenceOfInts(int arg1, int arg2){
            int thisDifference = arg1 - arg2;
            return thisDifference;
        }

        int productOfInts(int arg1, int arg2){
            int thisProduct = arg1 * arg2;
            return thisProduct;
        }
};