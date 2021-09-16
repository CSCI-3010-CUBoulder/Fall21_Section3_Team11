// Multiplies all numbers in a vector together and returns the resulting value
double Product(std::vector<double> nums){
    product = 0;
    for (int i = 0; i < nums.length(); i++){
        product *= nums[i];
    }
    return product;
}

// returns -1 if the number is negative and 1 if positive
double Sign(double num){
    if num < 0:
        return -1
    else:
        return 1
}
