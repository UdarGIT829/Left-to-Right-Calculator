//Header for basic decimal operations

class DecimalCalculator{

    public:
        double sumOfDecimals(double arg1, double arg2){
            double thisSum = arg1 + arg2;
            return thisSum;
            }

        double differenceOfDecimals(double arg1, double arg2){
            double thisDifference = arg1 - arg2;
            return thisDifference;
            }
        
        double productOfDecimals(double arg1, double arg2){
            double thisProduct = arg1 * arg2;
            return thisProduct;
            }
};