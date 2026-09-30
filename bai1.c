#include <stdio.h>

struct UserAccount {
    int user_id;
    int monthly_fee;
    int days_overdue;
};

int main() {
    struct UserAccount user_list[4] = {
        {1001, 180000, 0},
        {1002, 90000, 5},
        {1003, 260000, 1},
        {1004, 90000, 4}
    };

    int total_revenue = 0;

    printf("=== DANH SACH TAI KHOAN SUBSCRIPTION ===\n");
    printf("%-10s %-12s %-15s %-15s\n", "MA TK", "PHI THANG", "NO CUOC", "TRANG THAI");

    for (int i = 0; i < 4; i++) {
        if (user_list[i].days_overdue <= 3) {
            total_revenue += user_list[i].monthly_fee;
            printf("%-10d %-12d %-15d %-15s\n",
                   user_list[i].user_id,
                   user_list[i].monthly_fee,
                   user_list[i].days_overdue,
                   "Hop le");
        } else {
            printf("%-10d %-12d %-15d %-15s\n",
                   user_list[i].user_id,
                   user_list[i].monthly_fee,
                   user_list[i].days_overdue,
                   "Qua han");
        }
    }

    printf("-----------------------------------------------\n");
    printf("Tong doanh thu thuc thu: %d VND\n", total_revenue);

    return 0;
}