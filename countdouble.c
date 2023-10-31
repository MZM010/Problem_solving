/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/
bool containsDuplicate(int* nums, int numsSize){
    int i, j, var = 1;

    for (i = 0; i < numsSize; i++)
    {
        for (j = var; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }

        }
        var++;

    }
    return false;

}
