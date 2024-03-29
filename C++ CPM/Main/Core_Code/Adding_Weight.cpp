#include <iostream>
#include <vector>

float Addition_Layer_Linear (std::vector<float> changing_weight, std::vector<float> sample_input)
{
    float result{0};
    int vecSize = changing_weight.size();
    std::vector<float>::iterator iterating_val_w = changing_weight.begin();
    std::vector<float>::iterator iterating_val_sample = sample_input.begin();
    for (int i = 0; i < vecSize; i++)
    {
        result += *iterating_val_w*(*iterating_val_sample);
        iterating_val_sample++;
        iterating_val_w++;
    }
    return result;
}

