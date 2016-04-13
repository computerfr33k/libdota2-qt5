// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protobuf/Match.proto

#ifndef PROTOBUF_Protobuf_2fMatch_2eproto__INCLUDED
#define PROTOBUF_Protobuf_2fMatch_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace computerfr33k {
namespace dota2 {
namespace entities {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Protobuf_2fMatch_2eproto();
void protobuf_AssignDesc_Protobuf_2fMatch_2eproto();
void protobuf_ShutdownFile_Protobuf_2fMatch_2eproto();

class Match;

enum Match_LobbyType {
  Match_LobbyType_LT_INVALID = -1,
  Match_LobbyType_LT_PUBLIC_MATCHMAKING = 0,
  Match_LobbyType_LT_PRACTICE = 1,
  Match_LobbyType_LT_TOURNAMENT = 2,
  Match_LobbyType_LT_TUTORIAL = 3,
  Match_LobbyType_LT_COOP_WITH_BOTS = 4,
  Match_LobbyType_LT_TEAM_MATCH = 5,
  Match_LobbyType_LT_SOLO_QUEUE = 6,
  Match_LobbyType_LT_RANKED = 7,
  Match_LobbyType_LT_SOLO_MID_1V1 = 8
};
bool Match_LobbyType_IsValid(int value);
const Match_LobbyType Match_LobbyType_LobbyType_MIN = Match_LobbyType_LT_INVALID;
const Match_LobbyType Match_LobbyType_LobbyType_MAX = Match_LobbyType_LT_SOLO_MID_1V1;
const int Match_LobbyType_LobbyType_ARRAYSIZE = Match_LobbyType_LobbyType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Match_LobbyType_descriptor();
inline const ::std::string& Match_LobbyType_Name(Match_LobbyType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Match_LobbyType_descriptor(), value);
}
inline bool Match_LobbyType_Parse(
    const ::std::string& name, Match_LobbyType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Match_LobbyType>(
    Match_LobbyType_descriptor(), name, value);
}
enum Match_GameMode {
  Match_GameMode_GM_UNKNOWN = 0,
  Match_GameMode_GM_ALL_PICK = 1,
  Match_GameMode_GM_CAPTAINS_MODE = 2,
  Match_GameMode_GM_RANDOM_DRAFT = 3,
  Match_GameMode_GM_SINGLE_DRAFT = 4,
  Match_GameMode_GM_ALL_RANDOM = 5,
  Match_GameMode_GM_INTRO_DEATH = 6,
  Match_GameMode_GM_THE_DIRETIDE = 7,
  Match_GameMode_GM_REVERSE_CAPTAINS_MODE = 8,
  Match_GameMode_GM_GREEVILING = 9,
  Match_GameMode_GM_TUTORIAL = 10,
  Match_GameMode_GM_MID_ONLY = 11,
  Match_GameMode_GM_LEAST_PLAYED = 12,
  Match_GameMode_GM_NEW_PLAYER_POOL = 13,
  Match_GameMode_GM_COMPENDIUM_MATCHMAKING = 14,
  Match_GameMode_GM_CUSTOM = 15,
  Match_GameMode_GM_CAPTAINS_DRAFT = 16,
  Match_GameMode_GM_BALANCED_DRAFT = 17,
  Match_GameMode_GM_ABILITY_DRAFT = 18,
  Match_GameMode_GM_EVENT = 19,
  Match_GameMode_GM_ALL_RANDOM_DEATH_MATCH = 20,
  Match_GameMode_GM_ONE_V_ONE_SOLO_MID = 21,
  Match_GameMode_GM_RANKED_ALL_PICK = 22
};
bool Match_GameMode_IsValid(int value);
const Match_GameMode Match_GameMode_GameMode_MIN = Match_GameMode_GM_UNKNOWN;
const Match_GameMode Match_GameMode_GameMode_MAX = Match_GameMode_GM_RANKED_ALL_PICK;
const int Match_GameMode_GameMode_ARRAYSIZE = Match_GameMode_GameMode_MAX + 1;

const ::google::protobuf::EnumDescriptor* Match_GameMode_descriptor();
inline const ::std::string& Match_GameMode_Name(Match_GameMode value) {
  return ::google::protobuf::internal::NameOfEnum(
    Match_GameMode_descriptor(), value);
}
inline bool Match_GameMode_Parse(
    const ::std::string& name, Match_GameMode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Match_GameMode>(
    Match_GameMode_descriptor(), name, value);
}
// ===================================================================

class Match : public ::google::protobuf::Message {
 public:
  Match();
  virtual ~Match();

  Match(const Match& from);

  inline Match& operator=(const Match& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Match& default_instance();

  void Swap(Match* other);

  // implements Message ----------------------------------------------

  Match* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Match& from);
  void MergeFrom(const Match& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Match_LobbyType LobbyType;
  static const LobbyType LT_INVALID = Match_LobbyType_LT_INVALID;
  static const LobbyType LT_PUBLIC_MATCHMAKING = Match_LobbyType_LT_PUBLIC_MATCHMAKING;
  static const LobbyType LT_PRACTICE = Match_LobbyType_LT_PRACTICE;
  static const LobbyType LT_TOURNAMENT = Match_LobbyType_LT_TOURNAMENT;
  static const LobbyType LT_TUTORIAL = Match_LobbyType_LT_TUTORIAL;
  static const LobbyType LT_COOP_WITH_BOTS = Match_LobbyType_LT_COOP_WITH_BOTS;
  static const LobbyType LT_TEAM_MATCH = Match_LobbyType_LT_TEAM_MATCH;
  static const LobbyType LT_SOLO_QUEUE = Match_LobbyType_LT_SOLO_QUEUE;
  static const LobbyType LT_RANKED = Match_LobbyType_LT_RANKED;
  static const LobbyType LT_SOLO_MID_1V1 = Match_LobbyType_LT_SOLO_MID_1V1;
  static inline bool LobbyType_IsValid(int value) {
    return Match_LobbyType_IsValid(value);
  }
  static const LobbyType LobbyType_MIN =
    Match_LobbyType_LobbyType_MIN;
  static const LobbyType LobbyType_MAX =
    Match_LobbyType_LobbyType_MAX;
  static const int LobbyType_ARRAYSIZE =
    Match_LobbyType_LobbyType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  LobbyType_descriptor() {
    return Match_LobbyType_descriptor();
  }
  static inline const ::std::string& LobbyType_Name(LobbyType value) {
    return Match_LobbyType_Name(value);
  }
  static inline bool LobbyType_Parse(const ::std::string& name,
      LobbyType* value) {
    return Match_LobbyType_Parse(name, value);
  }

  typedef Match_GameMode GameMode;
  static const GameMode GM_UNKNOWN = Match_GameMode_GM_UNKNOWN;
  static const GameMode GM_ALL_PICK = Match_GameMode_GM_ALL_PICK;
  static const GameMode GM_CAPTAINS_MODE = Match_GameMode_GM_CAPTAINS_MODE;
  static const GameMode GM_RANDOM_DRAFT = Match_GameMode_GM_RANDOM_DRAFT;
  static const GameMode GM_SINGLE_DRAFT = Match_GameMode_GM_SINGLE_DRAFT;
  static const GameMode GM_ALL_RANDOM = Match_GameMode_GM_ALL_RANDOM;
  static const GameMode GM_INTRO_DEATH = Match_GameMode_GM_INTRO_DEATH;
  static const GameMode GM_THE_DIRETIDE = Match_GameMode_GM_THE_DIRETIDE;
  static const GameMode GM_REVERSE_CAPTAINS_MODE = Match_GameMode_GM_REVERSE_CAPTAINS_MODE;
  static const GameMode GM_GREEVILING = Match_GameMode_GM_GREEVILING;
  static const GameMode GM_TUTORIAL = Match_GameMode_GM_TUTORIAL;
  static const GameMode GM_MID_ONLY = Match_GameMode_GM_MID_ONLY;
  static const GameMode GM_LEAST_PLAYED = Match_GameMode_GM_LEAST_PLAYED;
  static const GameMode GM_NEW_PLAYER_POOL = Match_GameMode_GM_NEW_PLAYER_POOL;
  static const GameMode GM_COMPENDIUM_MATCHMAKING = Match_GameMode_GM_COMPENDIUM_MATCHMAKING;
  static const GameMode GM_CUSTOM = Match_GameMode_GM_CUSTOM;
  static const GameMode GM_CAPTAINS_DRAFT = Match_GameMode_GM_CAPTAINS_DRAFT;
  static const GameMode GM_BALANCED_DRAFT = Match_GameMode_GM_BALANCED_DRAFT;
  static const GameMode GM_ABILITY_DRAFT = Match_GameMode_GM_ABILITY_DRAFT;
  static const GameMode GM_EVENT = Match_GameMode_GM_EVENT;
  static const GameMode GM_ALL_RANDOM_DEATH_MATCH = Match_GameMode_GM_ALL_RANDOM_DEATH_MATCH;
  static const GameMode GM_ONE_V_ONE_SOLO_MID = Match_GameMode_GM_ONE_V_ONE_SOLO_MID;
  static const GameMode GM_RANKED_ALL_PICK = Match_GameMode_GM_RANKED_ALL_PICK;
  static inline bool GameMode_IsValid(int value) {
    return Match_GameMode_IsValid(value);
  }
  static const GameMode GameMode_MIN =
    Match_GameMode_GameMode_MIN;
  static const GameMode GameMode_MAX =
    Match_GameMode_GameMode_MAX;
  static const int GameMode_ARRAYSIZE =
    Match_GameMode_GameMode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  GameMode_descriptor() {
    return Match_GameMode_descriptor();
  }
  static inline const ::std::string& GameMode_Name(GameMode value) {
    return Match_GameMode_Name(value);
  }
  static inline bool GameMode_Parse(const ::std::string& name,
      GameMode* value) {
    return Match_GameMode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required bool radiant_win = 1;
  inline bool has_radiant_win() const;
  inline void clear_radiant_win();
  static const int kRadiantWinFieldNumber = 1;
  inline bool radiant_win() const;
  inline void set_radiant_win(bool value);

  // required int64 duration = 2;
  inline bool has_duration() const;
  inline void clear_duration();
  static const int kDurationFieldNumber = 2;
  inline ::google::protobuf::int64 duration() const;
  inline void set_duration(::google::protobuf::int64 value);

  // required int64 start_time = 3;
  inline bool has_start_time() const;
  inline void clear_start_time();
  static const int kStartTimeFieldNumber = 3;
  inline ::google::protobuf::int64 start_time() const;
  inline void set_start_time(::google::protobuf::int64 value);

  // required int64 match_id = 4;
  inline bool has_match_id() const;
  inline void clear_match_id();
  static const int kMatchIdFieldNumber = 4;
  inline ::google::protobuf::int64 match_id() const;
  inline void set_match_id(::google::protobuf::int64 value);

  // required int64 match_seq_num = 5;
  inline bool has_match_seq_num() const;
  inline void clear_match_seq_num();
  static const int kMatchSeqNumFieldNumber = 5;
  inline ::google::protobuf::int64 match_seq_num() const;
  inline void set_match_seq_num(::google::protobuf::int64 value);

  // required uint32 tower_status_radiant = 6;
  inline bool has_tower_status_radiant() const;
  inline void clear_tower_status_radiant();
  static const int kTowerStatusRadiantFieldNumber = 6;
  inline ::google::protobuf::uint32 tower_status_radiant() const;
  inline void set_tower_status_radiant(::google::protobuf::uint32 value);

  // required uint32 tower_status_dire = 7;
  inline bool has_tower_status_dire() const;
  inline void clear_tower_status_dire();
  static const int kTowerStatusDireFieldNumber = 7;
  inline ::google::protobuf::uint32 tower_status_dire() const;
  inline void set_tower_status_dire(::google::protobuf::uint32 value);

  // required uint32 barracks_status_radiant = 8;
  inline bool has_barracks_status_radiant() const;
  inline void clear_barracks_status_radiant();
  static const int kBarracksStatusRadiantFieldNumber = 8;
  inline ::google::protobuf::uint32 barracks_status_radiant() const;
  inline void set_barracks_status_radiant(::google::protobuf::uint32 value);

  // required uint32 barracks_status_dire = 9;
  inline bool has_barracks_status_dire() const;
  inline void clear_barracks_status_dire();
  static const int kBarracksStatusDireFieldNumber = 9;
  inline ::google::protobuf::uint32 barracks_status_dire() const;
  inline void set_barracks_status_dire(::google::protobuf::uint32 value);

  // required int32 cluster = 10;
  inline bool has_cluster() const;
  inline void clear_cluster();
  static const int kClusterFieldNumber = 10;
  inline ::google::protobuf::int32 cluster() const;
  inline void set_cluster(::google::protobuf::int32 value);

  // required int32 first_blood_time = 11;
  inline bool has_first_blood_time() const;
  inline void clear_first_blood_time();
  static const int kFirstBloodTimeFieldNumber = 11;
  inline ::google::protobuf::int32 first_blood_time() const;
  inline void set_first_blood_time(::google::protobuf::int32 value);

  // required .computerfr33k.dota2.entities.Match.LobbyType lobby_type = 12 [default = LT_INVALID];
  inline bool has_lobby_type() const;
  inline void clear_lobby_type();
  static const int kLobbyTypeFieldNumber = 12;
  inline ::computerfr33k::dota2::entities::Match_LobbyType lobby_type() const;
  inline void set_lobby_type(::computerfr33k::dota2::entities::Match_LobbyType value);

  // required int32 human_players = 13;
  inline bool has_human_players() const;
  inline void clear_human_players();
  static const int kHumanPlayersFieldNumber = 13;
  inline ::google::protobuf::int32 human_players() const;
  inline void set_human_players(::google::protobuf::int32 value);

  // optional int32 leagueid = 14;
  inline bool has_leagueid() const;
  inline void clear_leagueid();
  static const int kLeagueidFieldNumber = 14;
  inline ::google::protobuf::int32 leagueid() const;
  inline void set_leagueid(::google::protobuf::int32 value);

  // optional int32 positive_votes = 15;
  inline bool has_positive_votes() const;
  inline void clear_positive_votes();
  static const int kPositiveVotesFieldNumber = 15;
  inline ::google::protobuf::int32 positive_votes() const;
  inline void set_positive_votes(::google::protobuf::int32 value);

  // optional int32 negative_votes = 16;
  inline bool has_negative_votes() const;
  inline void clear_negative_votes();
  static const int kNegativeVotesFieldNumber = 16;
  inline ::google::protobuf::int32 negative_votes() const;
  inline void set_negative_votes(::google::protobuf::int32 value);

  // required .computerfr33k.dota2.entities.Match.GameMode game_mode = 17 [default = GM_UNKNOWN];
  inline bool has_game_mode() const;
  inline void clear_game_mode();
  static const int kGameModeFieldNumber = 17;
  inline ::computerfr33k::dota2::entities::Match_GameMode game_mode() const;
  inline void set_game_mode(::computerfr33k::dota2::entities::Match_GameMode value);

  // @@protoc_insertion_point(class_scope:computerfr33k.dota2.entities.Match)
 private:
  inline void set_has_radiant_win();
  inline void clear_has_radiant_win();
  inline void set_has_duration();
  inline void clear_has_duration();
  inline void set_has_start_time();
  inline void clear_has_start_time();
  inline void set_has_match_id();
  inline void clear_has_match_id();
  inline void set_has_match_seq_num();
  inline void clear_has_match_seq_num();
  inline void set_has_tower_status_radiant();
  inline void clear_has_tower_status_radiant();
  inline void set_has_tower_status_dire();
  inline void clear_has_tower_status_dire();
  inline void set_has_barracks_status_radiant();
  inline void clear_has_barracks_status_radiant();
  inline void set_has_barracks_status_dire();
  inline void clear_has_barracks_status_dire();
  inline void set_has_cluster();
  inline void clear_has_cluster();
  inline void set_has_first_blood_time();
  inline void clear_has_first_blood_time();
  inline void set_has_lobby_type();
  inline void clear_has_lobby_type();
  inline void set_has_human_players();
  inline void clear_has_human_players();
  inline void set_has_leagueid();
  inline void clear_has_leagueid();
  inline void set_has_positive_votes();
  inline void clear_has_positive_votes();
  inline void set_has_negative_votes();
  inline void clear_has_negative_votes();
  inline void set_has_game_mode();
  inline void clear_has_game_mode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 duration_;
  ::google::protobuf::int64 start_time_;
  bool radiant_win_;
  ::google::protobuf::uint32 tower_status_radiant_;
  ::google::protobuf::int64 match_id_;
  ::google::protobuf::int64 match_seq_num_;
  ::google::protobuf::uint32 tower_status_dire_;
  ::google::protobuf::uint32 barracks_status_radiant_;
  ::google::protobuf::uint32 barracks_status_dire_;
  ::google::protobuf::int32 cluster_;
  ::google::protobuf::int32 first_blood_time_;
  int lobby_type_;
  ::google::protobuf::int32 human_players_;
  ::google::protobuf::int32 leagueid_;
  ::google::protobuf::int32 positive_votes_;
  ::google::protobuf::int32 negative_votes_;
  int game_mode_;
  friend void  protobuf_AddDesc_Protobuf_2fMatch_2eproto();
  friend void protobuf_AssignDesc_Protobuf_2fMatch_2eproto();
  friend void protobuf_ShutdownFile_Protobuf_2fMatch_2eproto();

  void InitAsDefaultInstance();
  static Match* default_instance_;
};
// ===================================================================


// ===================================================================

// Match

// required bool radiant_win = 1;
inline bool Match::has_radiant_win() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Match::set_has_radiant_win() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Match::clear_has_radiant_win() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Match::clear_radiant_win() {
  radiant_win_ = false;
  clear_has_radiant_win();
}
inline bool Match::radiant_win() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.radiant_win)
  return radiant_win_;
}
inline void Match::set_radiant_win(bool value) {
  set_has_radiant_win();
  radiant_win_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.radiant_win)
}

// required int64 duration = 2;
inline bool Match::has_duration() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Match::set_has_duration() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Match::clear_has_duration() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Match::clear_duration() {
  duration_ = GOOGLE_LONGLONG(0);
  clear_has_duration();
}
inline ::google::protobuf::int64 Match::duration() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.duration)
  return duration_;
}
inline void Match::set_duration(::google::protobuf::int64 value) {
  set_has_duration();
  duration_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.duration)
}

// required int64 start_time = 3;
inline bool Match::has_start_time() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Match::set_has_start_time() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Match::clear_has_start_time() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Match::clear_start_time() {
  start_time_ = GOOGLE_LONGLONG(0);
  clear_has_start_time();
}
inline ::google::protobuf::int64 Match::start_time() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.start_time)
  return start_time_;
}
inline void Match::set_start_time(::google::protobuf::int64 value) {
  set_has_start_time();
  start_time_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.start_time)
}

// required int64 match_id = 4;
inline bool Match::has_match_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Match::set_has_match_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Match::clear_has_match_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Match::clear_match_id() {
  match_id_ = GOOGLE_LONGLONG(0);
  clear_has_match_id();
}
inline ::google::protobuf::int64 Match::match_id() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.match_id)
  return match_id_;
}
inline void Match::set_match_id(::google::protobuf::int64 value) {
  set_has_match_id();
  match_id_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.match_id)
}

// required int64 match_seq_num = 5;
inline bool Match::has_match_seq_num() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Match::set_has_match_seq_num() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Match::clear_has_match_seq_num() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Match::clear_match_seq_num() {
  match_seq_num_ = GOOGLE_LONGLONG(0);
  clear_has_match_seq_num();
}
inline ::google::protobuf::int64 Match::match_seq_num() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.match_seq_num)
  return match_seq_num_;
}
inline void Match::set_match_seq_num(::google::protobuf::int64 value) {
  set_has_match_seq_num();
  match_seq_num_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.match_seq_num)
}

// required uint32 tower_status_radiant = 6;
inline bool Match::has_tower_status_radiant() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Match::set_has_tower_status_radiant() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Match::clear_has_tower_status_radiant() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Match::clear_tower_status_radiant() {
  tower_status_radiant_ = 0u;
  clear_has_tower_status_radiant();
}
inline ::google::protobuf::uint32 Match::tower_status_radiant() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.tower_status_radiant)
  return tower_status_radiant_;
}
inline void Match::set_tower_status_radiant(::google::protobuf::uint32 value) {
  set_has_tower_status_radiant();
  tower_status_radiant_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.tower_status_radiant)
}

// required uint32 tower_status_dire = 7;
inline bool Match::has_tower_status_dire() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Match::set_has_tower_status_dire() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Match::clear_has_tower_status_dire() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Match::clear_tower_status_dire() {
  tower_status_dire_ = 0u;
  clear_has_tower_status_dire();
}
inline ::google::protobuf::uint32 Match::tower_status_dire() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.tower_status_dire)
  return tower_status_dire_;
}
inline void Match::set_tower_status_dire(::google::protobuf::uint32 value) {
  set_has_tower_status_dire();
  tower_status_dire_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.tower_status_dire)
}

// required uint32 barracks_status_radiant = 8;
inline bool Match::has_barracks_status_radiant() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Match::set_has_barracks_status_radiant() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Match::clear_has_barracks_status_radiant() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Match::clear_barracks_status_radiant() {
  barracks_status_radiant_ = 0u;
  clear_has_barracks_status_radiant();
}
inline ::google::protobuf::uint32 Match::barracks_status_radiant() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.barracks_status_radiant)
  return barracks_status_radiant_;
}
inline void Match::set_barracks_status_radiant(::google::protobuf::uint32 value) {
  set_has_barracks_status_radiant();
  barracks_status_radiant_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.barracks_status_radiant)
}

// required uint32 barracks_status_dire = 9;
inline bool Match::has_barracks_status_dire() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Match::set_has_barracks_status_dire() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Match::clear_has_barracks_status_dire() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Match::clear_barracks_status_dire() {
  barracks_status_dire_ = 0u;
  clear_has_barracks_status_dire();
}
inline ::google::protobuf::uint32 Match::barracks_status_dire() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.barracks_status_dire)
  return barracks_status_dire_;
}
inline void Match::set_barracks_status_dire(::google::protobuf::uint32 value) {
  set_has_barracks_status_dire();
  barracks_status_dire_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.barracks_status_dire)
}

// required int32 cluster = 10;
inline bool Match::has_cluster() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Match::set_has_cluster() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Match::clear_has_cluster() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Match::clear_cluster() {
  cluster_ = 0;
  clear_has_cluster();
}
inline ::google::protobuf::int32 Match::cluster() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.cluster)
  return cluster_;
}
inline void Match::set_cluster(::google::protobuf::int32 value) {
  set_has_cluster();
  cluster_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.cluster)
}

// required int32 first_blood_time = 11;
inline bool Match::has_first_blood_time() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Match::set_has_first_blood_time() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Match::clear_has_first_blood_time() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Match::clear_first_blood_time() {
  first_blood_time_ = 0;
  clear_has_first_blood_time();
}
inline ::google::protobuf::int32 Match::first_blood_time() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.first_blood_time)
  return first_blood_time_;
}
inline void Match::set_first_blood_time(::google::protobuf::int32 value) {
  set_has_first_blood_time();
  first_blood_time_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.first_blood_time)
}

// required .computerfr33k.dota2.entities.Match.LobbyType lobby_type = 12 [default = LT_INVALID];
inline bool Match::has_lobby_type() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Match::set_has_lobby_type() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Match::clear_has_lobby_type() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Match::clear_lobby_type() {
  lobby_type_ = -1;
  clear_has_lobby_type();
}
inline ::computerfr33k::dota2::entities::Match_LobbyType Match::lobby_type() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.lobby_type)
  return static_cast< ::computerfr33k::dota2::entities::Match_LobbyType >(lobby_type_);
}
inline void Match::set_lobby_type(::computerfr33k::dota2::entities::Match_LobbyType value) {
  assert(::computerfr33k::dota2::entities::Match_LobbyType_IsValid(value));
  set_has_lobby_type();
  lobby_type_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.lobby_type)
}

// required int32 human_players = 13;
inline bool Match::has_human_players() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Match::set_has_human_players() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Match::clear_has_human_players() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Match::clear_human_players() {
  human_players_ = 0;
  clear_has_human_players();
}
inline ::google::protobuf::int32 Match::human_players() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.human_players)
  return human_players_;
}
inline void Match::set_human_players(::google::protobuf::int32 value) {
  set_has_human_players();
  human_players_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.human_players)
}

// optional int32 leagueid = 14;
inline bool Match::has_leagueid() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void Match::set_has_leagueid() {
  _has_bits_[0] |= 0x00002000u;
}
inline void Match::clear_has_leagueid() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void Match::clear_leagueid() {
  leagueid_ = 0;
  clear_has_leagueid();
}
inline ::google::protobuf::int32 Match::leagueid() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.leagueid)
  return leagueid_;
}
inline void Match::set_leagueid(::google::protobuf::int32 value) {
  set_has_leagueid();
  leagueid_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.leagueid)
}

// optional int32 positive_votes = 15;
inline bool Match::has_positive_votes() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void Match::set_has_positive_votes() {
  _has_bits_[0] |= 0x00004000u;
}
inline void Match::clear_has_positive_votes() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void Match::clear_positive_votes() {
  positive_votes_ = 0;
  clear_has_positive_votes();
}
inline ::google::protobuf::int32 Match::positive_votes() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.positive_votes)
  return positive_votes_;
}
inline void Match::set_positive_votes(::google::protobuf::int32 value) {
  set_has_positive_votes();
  positive_votes_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.positive_votes)
}

// optional int32 negative_votes = 16;
inline bool Match::has_negative_votes() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void Match::set_has_negative_votes() {
  _has_bits_[0] |= 0x00008000u;
}
inline void Match::clear_has_negative_votes() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void Match::clear_negative_votes() {
  negative_votes_ = 0;
  clear_has_negative_votes();
}
inline ::google::protobuf::int32 Match::negative_votes() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.negative_votes)
  return negative_votes_;
}
inline void Match::set_negative_votes(::google::protobuf::int32 value) {
  set_has_negative_votes();
  negative_votes_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.negative_votes)
}

// required .computerfr33k.dota2.entities.Match.GameMode game_mode = 17 [default = GM_UNKNOWN];
inline bool Match::has_game_mode() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void Match::set_has_game_mode() {
  _has_bits_[0] |= 0x00010000u;
}
inline void Match::clear_has_game_mode() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void Match::clear_game_mode() {
  game_mode_ = 0;
  clear_has_game_mode();
}
inline ::computerfr33k::dota2::entities::Match_GameMode Match::game_mode() const {
  // @@protoc_insertion_point(field_get:computerfr33k.dota2.entities.Match.game_mode)
  return static_cast< ::computerfr33k::dota2::entities::Match_GameMode >(game_mode_);
}
inline void Match::set_game_mode(::computerfr33k::dota2::entities::Match_GameMode value) {
  assert(::computerfr33k::dota2::entities::Match_GameMode_IsValid(value));
  set_has_game_mode();
  game_mode_ = value;
  // @@protoc_insertion_point(field_set:computerfr33k.dota2.entities.Match.game_mode)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace entities
}  // namespace dota2
}  // namespace computerfr33k

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::computerfr33k::dota2::entities::Match_LobbyType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::computerfr33k::dota2::entities::Match_LobbyType>() {
  return ::computerfr33k::dota2::entities::Match_LobbyType_descriptor();
}
template <> struct is_proto_enum< ::computerfr33k::dota2::entities::Match_GameMode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::computerfr33k::dota2::entities::Match_GameMode>() {
  return ::computerfr33k::dota2::entities::Match_GameMode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Protobuf_2fMatch_2eproto__INCLUDED
