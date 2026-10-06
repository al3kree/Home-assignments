

#include <stdio.h>

int main() {
    int type;
    float a, h, d, base, wall, area;

    // запросить тип бассейна
    printf("Enter the type of the pool (1 - square, 2 -round): ");
    scanf("%d", &type);
    // Если указан 1 тип, 
    if (type == 1) 
    {
        //     то спросить длинну стороны и высоту
        printf("Enter the length of the pool's side: ");
        scanf("%f", &a);
        printf("Enter the height of the pool: ");
        scanf("%f", &h);
        //     посчитать площадь основания
        base = a * a;
        //     пл. стены
        wall = 4 * a * h;
    }
    // Если указан 2 тип, 
    else if (type == 2) 
    {
        //     то спросить диаметр и высоту
        printf("Enter the diameter of the pool: ");
        scanf("%f", &d);
        printf("Enter the height of the pool: ");
        scanf("%f", &h);
        //     посчитать площадь основания
        base = 3.14 * d * d / 4;
        //     пл. стены
        wall = 3.14 * d * h;
    }
    
    // Иначе, 
    else
    {
        //     Неизвестный результат
        printf("Unknown option...\n");
        return 1;
    }

    // сложить
    area = base + wall;
    //     вывести результат
    printf("%f square meters of tiles are needed to cover the walls and the bottom of the pool\n", area);
return 0;
}