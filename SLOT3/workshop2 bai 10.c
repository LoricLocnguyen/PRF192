#include <stdio.h>

int main() {
    float balance = 10000.0;
    float withdraw_amount;
    int choice;

    printf("=====================================\n");
    printf("        ATM MO PHONG DON GIAN         \n");
    printf("=====================================\n");
    printf("So du ban dau: %.2f VND\n", balance);
    printf("=====================================\n\n");

    while (1) {
        printf("---------- MENU LUA CHON ------------\n");
        printf("1. Rut tien\n");
        printf("2. Kiem tra so du\n");
        printf("3. Thoat\n");
        printf("-------------------------------------\n");
        printf("Nhap lua chon (1-3): ");

        if (scanf("%d", &choice) != 1) {
            printf("? Loi: Vui long nhap so nguyen!\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 3) {
            printf("\n=====================================\n");
            printf("Cam on ban da su dung ATM!\n");
            printf("Hen gap lai ??\n");
            printf("=====================================\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("\nNhap so tien muon rut: ");
                if (scanf("%f", &withdraw_amount) != 1) {
                    printf("? Loi: So tien khong hop le!\n");
                    while (getchar() != '\n');
                    break;
                }

                if (withdraw_amount <= 0) {
                    printf("? So tien phai lon hon 0!\n");
                } 
                else if (withdraw_amount > balance) {
                    printf("? Khong du so du!\n");
                    printf("So du hien tai: %.2f VND\n", balance);
                } 
                else {
                    balance -= withdraw_amount;
                    printf("? Rut tien thanh cong!\n");
                    printf("So tien rut: %.2f VND\n", withdraw_amount);
                    printf("So du con lai: %.2f VND\n", balance);
                }
                break;

            case 2:
                printf("\n?? So du hien tai cua ban: %.2f VND\n", balance);
                break;

            default:
                printf("? Lua chon khong hop le. Vui long chon lai!\n");
        }

        if (balance <= 0) {
            printf("\n=====================================\n");
            printf("? So du da het. Chuong trinh ket thuc!\n");
            printf("=====================================\n");
            break;
        }

        printf("\n=====================================\n\n");
    }

    return 0;
}
