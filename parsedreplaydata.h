#ifndef PARSEDREPLAYDATA
#define PARSEDREPLAYDATA

#include <string>
using namespace std;

// A Seperate class would be overkill since all we need is somewhere to store our data.
struct ParsedReplayData {
    double match_id;
    int season;
    int radiant_win;
    double duration;
    int first_blood_time;
    int start_time;
    double match_seq_num;
    int game_mode;
    int tower_status_radiant;
    int tower_status_dire;
    int barracks_status_radiant;
    int barracks_status_dire;
    int replay_salt;
    int lobby_type;
    int human_players;
    int leagueid;
    int cluster;
    int positive_votes;
    int negative_votes;

    int radiant_team_id;
    string radiant_name;
    string radiant_logo;
    int radiant_team_complete;

    int dire_team_id;
    string dire_name;
    string dire_logo;
    int dire_team_complete;
};

struct Slots {
    int id;
};

#endif // PARSEDREPLAYDATA

