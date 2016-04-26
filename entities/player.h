#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QDebug>
#include <QHash>
#include <QException>
#include <cmath>

#include <serializers/playerjsonserializer.h>

namespace entities
{
    class Player : public JsonSerializable
    {
    public:
        Player();

        /*
         * JsonSerializable Interface
         */
        void read(const QJsonObject &jsonObj);
        void write(QJsonObject &jsonObj) const;

        /*
         * Getters
         */
        qint64 getAccountId();
        int getPlayerSlot();
        int getHeroId();
        QHash<int,int> getItems() const;
        int getKills();
        int getDeaths();
        int getAssists();
        bool isLeaver();
        int getLastHits();
        int getDenies();
        int getGoldPerMin();
        int getXpPerMin();
        int getLevel();
        int getGold();
        int getGoldSpent();
        int getHeroDamage();
        int getTowerDamage();
        int getHeroHealing();

        QString toString() const;

        /*
         * Setters
         */
        void setAccountId(qint64 accountId);
        void setPlayerSlot(int slot);
        void setHeroId(int heroId);
        void setItems(QHash<int,int> items);
        void setItem(int slot, int itemId);
        void setKills(int kills);
        void setDeaths(int deaths);
        void setAssists(int assists);
        void setIsLeaver(bool isLeaver);
        void setLastHits(int lastHits);
        void setDenies(int denies);
        void setGoldPerMin(int goldPerMin);
        void setXpPerMin(int xpPerMin);
        void setLevel(int level);
        void setGold(int gold);
        void setGoldSpent(int goldSpent);
        void setHeroDamage(int heroDamage);
        void setTowerDamage(int towerDamage);
        void setHeroHealing(int heroHealing);

    private:
        qint64 account_id;
        int player_slot;
        int hero_id;
        QHash<int,int> items;
        int kills;
        int deaths;
        int assists;
        bool leaver_status;
        int last_hits;
        int denies;
        int gold_per_min;
        int xp_per_min;
        int level;
        int gold;
        int gold_spent;
        int hero_damage;
        int tower_damage;
        int hero_healing;
    };

}

#endif // PLAYER_H
