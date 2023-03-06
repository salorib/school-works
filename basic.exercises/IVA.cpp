# include <cstdio>

main(){

    float iva, final_price, price;

        printf("Price: ");
        scanf("%f", &price);

    iva = price * 0.15;
    final_price = price + iva;

        printf("Total IVA: %.2f" ,iva); printf(" and total price product is: %.2f" ,final_price);
    return 0;
}
