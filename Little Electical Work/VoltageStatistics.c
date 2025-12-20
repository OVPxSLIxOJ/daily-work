#include <stdio.h>

int main() {
    float voltage[10] = { 220.5, 218.3, 221.0, 219.8, 222.5, 217.6, 220.0, 223.1, 218.9, 221.5 };
    float sum = 0.0;
    float average = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += voltage[i];
    }
    average = sum / 10;
    printf("Average Voltage:%.2f V\n", average);
    int max = 0;
    int min = 0;
    for (int i = 1; i < 10; i++)
    {
        if (voltage[i] > voltage[max])
        {
            max = i;
        }
        if (voltage[i] < voltage[min])
        {
            min = i;
        }
	}
    printf("Max Voltage: %.2f V\n", voltage[max]);
    printf("Min Voltage: %.2f V\n", voltage[min]);
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (voltage[i] > average)
        {
            count++;
        }
    }
	printf("Number of readings above average: %d\n", count);
    return 0;
}