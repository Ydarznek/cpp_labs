#include <iostream>
#include <map>

using namespace std;

map<int, int> getMinCoins(int amount) {
    const int coinDenominations[] = {1000, 500, 200, 100, 50, 10, 5, 1};
    const int numDenominations = sizeof(coinDenominations) / sizeof(coinDenominations[0]);

    map<int, int> coinsUsed;

    for (int i = 0; i < numDenominations; ++i) {
        int coin = coinDenominations[i];
        if (amount >= coin) {
            coinsUsed[coin] = amount / coin;
            amount = amount % coin;
        }
    }

    return coinsUsed;
}

int main() {
    int amount;
    cout << "Введите сумму в копейках: ";
    cin >> amount;

    map<int, int> result = getMinCoins(amount);

    cout << "Для выдачи суммы " << amount << " копеек необходимо:\n";

    for (const auto& [denomination, count] : result) {
        if (count > 0) {
            cout << "Монет номиналом " << denomination << " копеек: " << count << endl;
        }
    }

    return 0;
}
