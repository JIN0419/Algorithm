#include <iostream>

using namespace std;

int main(){

    int count;

    cin >> count;

    double result[count];

    for(int i =0 ; i <count; i++){
        int num;
        cin >> num;
        
        int score[num];
        int sum = 0;

        for( int j = 0; j < num; j++){
            cin >> score[j];
            sum = sum + score[j];
        }

        double ave = (double)sum/(double)num;
        int over = 0;
        for( int l = 0; l < num; l++){
            if(score[l] > ave){
                over = over + 1;
            }
        }
        result[i] = (double)over/(double)num*100;
    }

    for(int k = 0; k < count; k++){
        printf("%.3f", result[k]);
        cout << '%' << '\n';
    }
}