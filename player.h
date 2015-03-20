#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QFile>
#include <QUrl>

class PlayerPrivate;
class Player : public QObject
{
    Q_OBJECT
public:
    explicit Player(QObject *parent = 0);
    ~Player();

    qint32 getAccountId();
    void* getPlayerSlot();
    void* getHeroId();
    qint32 getItemId(int iSlot);
    QString getItemName(int iSlot);
    void* getKills();
    void* getDeaths();
    void* getAssists();
    void* getLeaverStatus();
    void* getGold();
    void* getLastHits();
    void* getDenies();
    void* getGoldPerMin();
    void* getXpPerMin();
    void* getGoldSpent();
    void* getHeroDamage();
    void* getTowerDamage();
    void* getHeroHealing();
    void* getLevel();

protected:
    const QScopedPointer<PlayerPrivate> d_ptr;
    Player(PlayerPrivate &dd, QObject *parent);

private:
    Q_DECLARE_PRIVATE(Player)
};

#endif // PLAYER_H
