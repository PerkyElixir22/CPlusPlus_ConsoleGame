// Class for fish data
struct fish
{
  std::string name; // Name of fish
  unsigned int price; // Base price of fish
  unsigned int ownedAmount; // The amount of fish of specific type that are owned
  unsigned int step; // The amount of fish that should be given every time the chance check returns true
  bool unlocked; // If the fish should be given
  unsigned int rarity; // Chance that the fish will be given relative to rarityReference
  unsigned int rarityReference = 100; // The maximum value that the random number generator gives
};

// Class for bank account data
struct bankAccount
{
  std::string name; // Name of bank account
  unsigned int storedMoney; // Amount of money stored in bank account
  unsigned int PricePM; // Price of bank account "per month"
  unsigned int setupPrice; // Price of buying bank account
  unsigned int maxIn; // Maximum amount of money that can be deposited every day
  unsigned int maxOut; // Maximum amount of money that can be withdrawn every day
  bool purchased; // If the bank account has been purchased
  bool purchasable; // If the bank account can be purchased
};

struct shopItem
{
  std::string name; // Name of shop item
  unsigned int buyPrice; // Price to buy shop item (if lower than 0 then item will not be buyable)
  unsigned int sellPrice; // Price to sell shop item (if lower than 0 then item will not be sellable)
  int ownedAmount; // Amount of item player has (if applicable)
  bool purchasable; // If shop item is purchasable/sellable
}
