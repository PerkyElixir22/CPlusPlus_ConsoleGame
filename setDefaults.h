money = 200;

for(int i = 0; i < 8; i++)
{
  Fish[i].name = "Fish_"+i;
  Fish[i].ownedAmount = 0;
  Fish[i].unlocked = false;
  Fish[i].rarity = 100/(i+1);
  Fish[i].step = 1;
  Fish[i].price = 0;

  bank[i].purchasable = true;
  bank[i].purchased = false;
  bank[i].storedMoney = 0;
  bank[i].name = "Account_"+i;
}

Fish[0].price = 10;
Fish[1].price = 15;
Fish[2].price = 25;
Fish[3].price = 40;
Fish[4].price = 60;
Fish[5].price = 85;
Fish[6].price = 115;
Fish[7].price = 150;

bank[0].setupPrice = 50;
bank[1].setupPrice = 150;
bank[2].setupPrice = 500;
bank[3].setupPrice = 1000;
bank[4].setupPrice = 1750;
bank[5].setupPrice = 3000;
bank[6].setupPrice = 5000;
bank[7].setupPrice = 15000;

bank[0].pricePM = 10;
bank[1].pricePM = 25;
bank[2].pricePM = 50;
bank[3].pricePM = 150;
bank[4].pricePM = 500;
bank[5].pricePM = 750;
bank[6].pricePM = 1500;
bank[7].pricePM = 5000;

bank[0].maxIn = 1000;
bank[1].maxIn = 2500;
bank[2].maxIn = 5000;
bank[3].maxIn = 15000;
bank[4].maxIn = 50000;
bank[5].maxIn = 75000;
bank[6].maxIn = 150000;
bank[7].maxIn = 500000;

bank[0].maxOut = bank[0].maxIn/2;
bank[1].maxOut = bank[1].maxIn/2;
bank[2].maxOut = bank[2].maxIn/2;
bank[3].maxOut = bank[3].maxIn/2;
bank[4].maxOut = bank[4].maxIn/2;
bank[5].maxOut = bank[5].maxIn/2;
bank[6].maxOut = bank[6].maxIn/2;
bank[7].maxOut = bank[7].maxIn/2;
