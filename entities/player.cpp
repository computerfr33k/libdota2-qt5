#include "player.h"

Player::Player()
{
    // Initialize to default values
    account_id = -1;
    player_slot = -1;
}

void Player::read(const QJsonObject &jsonObj)
{
    this->setAccountId( lrint(jsonObj["account_id"].toDouble()) );
    this->setPlayerSlot( jsonObj["player_slot"].toInt() );
    this->setHeroId( jsonObj["hero_id"].toInt() );

    QHash<int,int> items;
    items[0] = jsonObj["item_0"].toInt();
    items[1] = jsonObj["item_1"].toInt();
    items[2] = jsonObj["item_2"].toInt();
    items[3] = jsonObj["item_3"].toInt();
    items[4] = jsonObj["item_4"].toInt();
    items[5] = jsonObj["item_5"].toInt();
    this->setItems(items);

    this->setKills( jsonObj["kills"].toInt() );
    this->setDeaths( jsonObj["deaths"].toInt() );
    this->setAssists( jsonObj["assists"].toInt() );
    this->setIsLeaver( jsonObj["leaver_status"].toBool() );
    this->setLastHits( jsonObj["last_hits"].toInt() );
    this->setDenies( jsonObj["denies"].toInt() );
    this->setGoldPerMin( jsonObj["gold_per_min"].toInt() );
    this->setXpPerMin( jsonObj["xp_per_min"].toInt() );
    this->setLevel( jsonObj["level"].toInt() );
    this->setGold( jsonObj["gold"].toInt() );
    this->setGoldSpent( jsonObj["gold_spent"].toInt() );
    this->setHeroDamage( jsonObj["hero_damage"].toInt() );
    this->setTowerDamage( jsonObj["tower_damage"].toInt() );
    this->setHeroHealing( jsonObj["hero_healing"].toInt() );

    // TODO: Parse Ability Upgrades
}

void Player::write(QJsonObject &jsonObj) const
{
    jsonObj["account_id"] = account_id;
    jsonObj["player_slot"] = player_slot;
}

/*
 * Getters
 */

qint64 Player::getAccountId()
{
    return this->account_id;
}

int Player::getPlayerSlot()
{
    return this->player_slot;
}

QString Player::toString() const
{
    return QString::number(this->account_id);
}

int Player::getHeroId()
{
    return this->hero_id;
}

QHash<int,int> Player::getItems() const
{
    return this->items;
}

int Player::getKills()
{
    return this->kills;
}

int Player::getDeaths()
{
    return this->deaths;
}

int Player::getAssists()
{
    return this->assists;
}

bool Player::isLeaver()
{
    return this->leaver_status;
}

int Player::getLastHits()
{
    return this->last_hits;
}

int Player::getDenies()
{
    return this->denies;
}

int Player::getGoldPerMin()
{
    return this->gold_per_min;
}

int Player::getXpPerMin()
{
    return this->xp_per_min;
}

int Player::getLevel()
{
    return this->level;
}

int Player::getGold()
{
    return this->gold;
}

int Player::getGoldSpent()
{
    return this->gold_spent;
}

int Player::getHeroDamage()
{
    return this->hero_damage;
}

int Player::getTowerDamage()
{
    return this->tower_damage;
}

int Player::getHeroHealing()
{
    return this->hero_healing;
}

/*
 * Setters
 */

void Player::setAccountId(qint64 accountId)
{
    this->account_id = accountId;
}

void Player::setPlayerSlot(int slot)
{
    this->player_slot = slot;
}

void Player::setHeroId(int heroId)
{
    this->hero_id = heroId;
}

void Player::setItems(QHash<int, int> items)
{
    this->items = items;
}

void Player::setKills(int kills)
{
    this->kills = kills;
}

void Player::setDeaths(int deaths)
{
    this->deaths = deaths;
}

void Player::setAssists(int assists)
{
    this->assists = assists;
}

void Player::setIsLeaver(bool isLeaver)
{
    this->leaver_status = isLeaver;
}

void Player::setLastHits(int lastHits)
{
    this->last_hits = lastHits;
}

void Player::setDenies(int denies)
{
    this->denies = denies;
}

void Player::setGoldPerMin(int goldPerMin)
{
    this->gold_per_min = goldPerMin;
}

void Player::setXpPerMin(int xpPerMin)
{
    this->xp_per_min = xpPerMin;
}

void Player::setLevel(int level)
{
    this->level = level;
}

void Player::setGold(int gold)
{
    this->gold = gold;
}

void Player::setGoldSpent(int goldSpent)
{
    this->gold_spent = goldSpent;
}

void Player::setHeroDamage(int heroDamage)
{
    this->hero_damage = heroDamage;
}

void Player::setTowerDamage(int towerDamage)
{
    this->tower_damage = towerDamage;
}

void Player::setHeroHealing(int heroHealing)
{
    this->hero_healing = heroHealing;
}
