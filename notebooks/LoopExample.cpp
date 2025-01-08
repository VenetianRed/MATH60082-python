# include <iostream>

double f(double x)
{
    return x*x;
}

int main( int argc, char *argv[] )
{
	int step_num = 0 ;
	double x = 0.0 ;
    double sum = 0.0 ;
    while(x <= 1.0)
    {
        sum = sum + f(x);
        if(x > 0.9) {
        	std::cout << step_num << ": x = " << x ;
        	std::cout <<  ", |x - (n/100)| = " << fabs(x - (step_num/100.0)) ;
        	std::cout << ", sum = " << sum << std::endl ;
        }
            
        x = x + 0.01 ;
        step_num++ ;
    }
    
	return( 0 ) ;
}