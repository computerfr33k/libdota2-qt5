#include "player.h"

class PlayerPrivate
{
public:
    virtual ~PlayerPrivate() { }

    /* Variables */
    qint32 account_id;
    qint32 player_slot;
    qint32 items[6];
    qint32 kills;
    qint32 deaths;
    qint32 assists;
    qint32 leaver_status;
    qint32 gold;
    qint32 last_hits;
    qint32 denies;
    qint32 gold_per_min;
    qint32 xp_per_min;
    qint32 gold_spent;
    qint32 hero_damage;
    qint32 tower_damage;
    qint32 hero_healing;
    qint32 level;
};

Player::Player(QObject *parent) : QObject(parent)
{

}

Player::~Player()
{
}

qint32 Player::getAccountId()
{
    Q_D(Player);
    return d->account_id;
}

void* Player::getPlayerSlot()
{
}

void* Player::getHeroId()
{
}

QString Player::getItemName(int iSlot)
{
    Q_D(Player);
    QFile file("qrc:/content/data/items.json");
    if(!file.open(QIODevice::ReadOnly)) {
        return "Error opening items.json";
    }

    QJsonDocument itemJSON = QJsonDocument::fromJson(file.readAll());
    qDebug() << itemJSON;
    file.close();
}

void* Player::getKills()
{
}

void* Player::getDeaths()
{
}

void* Player::getAssists()
{
}

void* Player::getLeaverStatus()
{
}

void* Player::getGold()
{
}

void* Player::getLastHits()
{
}

void* Player::getDenies()
{
}

void* Player::getGoldPerMin()
{
}

void* Player::getXpPerMin()
{
}

void* Player::getGoldSpent()
{
}

void* Player::getHeroDamage()
{
}

void* Player::getTowerDamage()
{
}

void* Player::getHeroHealing()
{
}

void* Player::getLevel()
{
}
