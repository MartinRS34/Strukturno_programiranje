//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n, number,tmp, a = 10;
//    cin >> n;
//
//    for (int i = 0 ; i< n ; i++) {
//        cin >> number;
//        tmp = number;
//        int flag = 0;
//        while (tmp > 9) {
//            int c1 = tmp % 10;
//            int c2 = (tmp / 10) % 10;
//            if (c1 >= c2) {
//                flag == 1;
//                break;
//
//            }
//            tmp = tmp / 10;
//        }
//        if(flag == 0){
//            cout<< number;
//        }
//    }
//
//    return 0;
//}
 #include <iostream>

    using namespace std;

    int main() {
        int num, i, tmp, min = -1, N;
        cin >> N;

        for (i = 0; i < N; i++) {
            cin >> num;
            tmp = num;
            while (tmp > 9) {
                if (tmp % 10 >= (tmp / 10) % 10) break;
                tmp /= 10;
            }
            if (tmp < 10) {
                cout << num << endl;
                if (min == -1) min = num;
                else if (num < min) min = num;
            }
        }

        cout << min;
        return 0;
    }