#include <iostream>
#include <vector>
#include <math.h>

long float Mean_Square_Error (std::vector<float> predicted_value_vec, std::vector<float> actual_value_vec, int hard_lower_limit, int hard_upper_limit)
{
    long float objective_loss_linear{0};
    float sample_size = hard_upper_limit-hard_lower_limit;
    
    std::vector<float> square_difference(sample_size); 
    for (int i = hard_lower_limit; i < hard_upper_limit; i++)
    {
        square_difference[i] = pow(predicted_value_vec[i]-actual_value_vec[i],2);
    }
    float sum_difference{0};
    for (int i = 0; i < square_difference.size();i++)
    {
        sum_difference += square_difference[i];
    }
    objective_loss_linear = (1/sample_size)*sum_difference;
    return objective_loss_linear;
}
/*
Documentation:
The functoin Mean_Square_Error calculate the mean square error (MSE) in batch, by setting the hard_lower_limit (the lower index) and the hard_upper_limit (the upper index) of the given dataset processing unit. 

Setting hard_lower_limit to 0 and hard_upper_limit to size of dataset results in MSE for all sample point in the sample space. 
*/

