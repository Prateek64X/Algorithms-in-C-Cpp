#define _CRT_SECURE_NO_WARNINGS 1 /*Line 1: For    Visual Studio, Remove in other compilers*/
#include<stdio.h>

void knapsack(int n, float weight[], float profit[], float capacity)
{
    float x[20], totalprofit;
    int i, j, remain_capacty;
    remain_capacty = capacity;

    for (i = 0; i < n; i++)
    {
        x[i] = 0.0;
    }

    for (i = 0; i < n; i++)
    {
        if (weight[i] > remain_capacty)
        {
            x[i] = 0.0;
            break;
        }
        else
        {
            x[i] = 1.0;
            totalprofit = totalprofit + profit[i];
            remain_capacty = remain_capacty - weight[i];
        }
    }

    if (i < n)
    {
        x[i] = remain_capacty / weight[i];
    }

    totalprofit = totalprofit + (x[i] * profit[i]);

    //Result
    printf("\nResult of vector = ");
    for (i = 0; i < n; i++)
    {
        printf("%f ", x[i]);
    }

    printf("\nMaximum profit = %f", totalprofit);
}

void main() 
{
    float weight[20], profit[20], capacity;
    int n, i, j;
    float ratio[20], temp;

    printf("Knapsack problem");
    printf("\nEnter the number of objects: ");
    scanf("%d", &n);
    printf("\nEnter weights and profits of each object:");
    for (i = 0; i < n; i++)
    {
        printf("%d> ", i + 1);
        scanf("%f %f", &weight[i], &profit[i]);
    }
    printf("\nEnter the capacity of knapsack: ");
    scanf("%f", &capacity);

    //Finding profit/weight ratio
    for (i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }

    knapsack(n, weight, profit, capacity);
}