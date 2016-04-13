// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protobuf/Match.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Protobuf/Match.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace computerfr33k {
namespace dota2 {
namespace entities {

namespace {

const ::google::protobuf::Descriptor* Match_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Match_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Match_LobbyType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Match_GameMode_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Protobuf_2fMatch_2eproto() {
  protobuf_AddDesc_Protobuf_2fMatch_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Protobuf/Match.proto");
  GOOGLE_CHECK(file != NULL);
  Match_descriptor_ = file->message_type(0);
  static const int Match_offsets_[17] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, radiant_win_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, duration_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, start_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, match_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, match_seq_num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, tower_status_radiant_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, tower_status_dire_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, barracks_status_radiant_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, barracks_status_dire_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, cluster_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, first_blood_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, lobby_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, human_players_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, leagueid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, positive_votes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, negative_votes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, game_mode_),
  };
  Match_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Match_descriptor_,
      Match::default_instance_,
      Match_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Match, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Match));
  Match_LobbyType_descriptor_ = Match_descriptor_->enum_type(0);
  Match_GameMode_descriptor_ = Match_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Protobuf_2fMatch_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Match_descriptor_, &Match::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Protobuf_2fMatch_2eproto() {
  delete Match::default_instance_;
  delete Match_reflection_;
}

void protobuf_AddDesc_Protobuf_2fMatch_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024Protobuf/Match.proto\022\034computerfr33k.do"
    "ta2.entities\"\327\t\n\005Match\022\023\n\013radiant_win\030\001 "
    "\002(\010\022\020\n\010duration\030\002 \002(\003\022\022\n\nstart_time\030\003 \002("
    "\003\022\020\n\010match_id\030\004 \002(\003\022\025\n\rmatch_seq_num\030\005 \002"
    "(\003\022\034\n\024tower_status_radiant\030\006 \002(\r\022\031\n\021towe"
    "r_status_dire\030\007 \002(\r\022\037\n\027barracks_status_r"
    "adiant\030\010 \002(\r\022\034\n\024barracks_status_dire\030\t \002"
    "(\r\022\017\n\007cluster\030\n \002(\005\022\030\n\020first_blood_time\030"
    "\013 \002(\005\022M\n\nlobby_type\030\014 \002(\0162-.computerfr33"
    "k.dota2.entities.Match.LobbyType:\nLT_INV"
    "ALID\022\025\n\rhuman_players\030\r \002(\005\022\020\n\010leagueid\030"
    "\016 \001(\005\022\026\n\016positive_votes\030\017 \001(\005\022\026\n\016negativ"
    "e_votes\030\020 \001(\005\022K\n\tgame_mode\030\021 \002(\0162,.compu"
    "terfr33k.dota2.entities.Match.GameMode:\n"
    "GM_UNKNOWN\"\325\001\n\tLobbyType\022\027\n\nLT_INVALID\020\377"
    "\377\377\377\377\377\377\377\377\001\022\031\n\025LT_PUBLIC_MATCHMAKING\020\000\022\017\n\013"
    "LT_PRACTICE\020\001\022\021\n\rLT_TOURNAMENT\020\002\022\017\n\013LT_T"
    "UTORIAL\020\003\022\025\n\021LT_COOP_WITH_BOTS\020\004\022\021\n\rLT_T"
    "EAM_MATCH\020\005\022\021\n\rLT_SOLO_QUEUE\020\006\022\r\n\tLT_RAN"
    "KED\020\007\022\023\n\017LT_SOLO_MID_1V1\020\010\"\371\003\n\010GameMode\022"
    "\016\n\nGM_UNKNOWN\020\000\022\017\n\013GM_ALL_PICK\020\001\022\024\n\020GM_C"
    "APTAINS_MODE\020\002\022\023\n\017GM_RANDOM_DRAFT\020\003\022\023\n\017G"
    "M_SINGLE_DRAFT\020\004\022\021\n\rGM_ALL_RANDOM\020\005\022\022\n\016G"
    "M_INTRO_DEATH\020\006\022\023\n\017GM_THE_DIRETIDE\020\007\022\034\n\030"
    "GM_REVERSE_CAPTAINS_MODE\020\010\022\021\n\rGM_GREEVIL"
    "ING\020\t\022\017\n\013GM_TUTORIAL\020\n\022\017\n\013GM_MID_ONLY\020\013\022"
    "\023\n\017GM_LEAST_PLAYED\020\014\022\026\n\022GM_NEW_PLAYER_PO"
    "OL\020\r\022\035\n\031GM_COMPENDIUM_MATCHMAKING\020\016\022\r\n\tG"
    "M_CUSTOM\020\017\022\025\n\021GM_CAPTAINS_DRAFT\020\020\022\025\n\021GM_"
    "BALANCED_DRAFT\020\021\022\024\n\020GM_ABILITY_DRAFT\020\022\022\014"
    "\n\010GM_EVENT\020\023\022\035\n\031GM_ALL_RANDOM_DEATH_MATC"
    "H\020\024\022\031\n\025GM_ONE_V_ONE_SOLO_MID\020\025\022\026\n\022GM_RAN"
    "KED_ALL_PICK\020\026", 1294);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Protobuf/Match.proto", &protobuf_RegisterTypes);
  Match::default_instance_ = new Match();
  Match::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Protobuf_2fMatch_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Protobuf_2fMatch_2eproto {
  StaticDescriptorInitializer_Protobuf_2fMatch_2eproto() {
    protobuf_AddDesc_Protobuf_2fMatch_2eproto();
  }
} static_descriptor_initializer_Protobuf_2fMatch_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Match_LobbyType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Match_LobbyType_descriptor_;
}
bool Match_LobbyType_IsValid(int value) {
  switch(value) {
    case -1:
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Match_LobbyType Match::LT_INVALID;
const Match_LobbyType Match::LT_PUBLIC_MATCHMAKING;
const Match_LobbyType Match::LT_PRACTICE;
const Match_LobbyType Match::LT_TOURNAMENT;
const Match_LobbyType Match::LT_TUTORIAL;
const Match_LobbyType Match::LT_COOP_WITH_BOTS;
const Match_LobbyType Match::LT_TEAM_MATCH;
const Match_LobbyType Match::LT_SOLO_QUEUE;
const Match_LobbyType Match::LT_RANKED;
const Match_LobbyType Match::LT_SOLO_MID_1V1;
const Match_LobbyType Match::LobbyType_MIN;
const Match_LobbyType Match::LobbyType_MAX;
const int Match::LobbyType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Match_GameMode_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Match_GameMode_descriptor_;
}
bool Match_GameMode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Match_GameMode Match::GM_UNKNOWN;
const Match_GameMode Match::GM_ALL_PICK;
const Match_GameMode Match::GM_CAPTAINS_MODE;
const Match_GameMode Match::GM_RANDOM_DRAFT;
const Match_GameMode Match::GM_SINGLE_DRAFT;
const Match_GameMode Match::GM_ALL_RANDOM;
const Match_GameMode Match::GM_INTRO_DEATH;
const Match_GameMode Match::GM_THE_DIRETIDE;
const Match_GameMode Match::GM_REVERSE_CAPTAINS_MODE;
const Match_GameMode Match::GM_GREEVILING;
const Match_GameMode Match::GM_TUTORIAL;
const Match_GameMode Match::GM_MID_ONLY;
const Match_GameMode Match::GM_LEAST_PLAYED;
const Match_GameMode Match::GM_NEW_PLAYER_POOL;
const Match_GameMode Match::GM_COMPENDIUM_MATCHMAKING;
const Match_GameMode Match::GM_CUSTOM;
const Match_GameMode Match::GM_CAPTAINS_DRAFT;
const Match_GameMode Match::GM_BALANCED_DRAFT;
const Match_GameMode Match::GM_ABILITY_DRAFT;
const Match_GameMode Match::GM_EVENT;
const Match_GameMode Match::GM_ALL_RANDOM_DEATH_MATCH;
const Match_GameMode Match::GM_ONE_V_ONE_SOLO_MID;
const Match_GameMode Match::GM_RANKED_ALL_PICK;
const Match_GameMode Match::GameMode_MIN;
const Match_GameMode Match::GameMode_MAX;
const int Match::GameMode_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Match::kRadiantWinFieldNumber;
const int Match::kDurationFieldNumber;
const int Match::kStartTimeFieldNumber;
const int Match::kMatchIdFieldNumber;
const int Match::kMatchSeqNumFieldNumber;
const int Match::kTowerStatusRadiantFieldNumber;
const int Match::kTowerStatusDireFieldNumber;
const int Match::kBarracksStatusRadiantFieldNumber;
const int Match::kBarracksStatusDireFieldNumber;
const int Match::kClusterFieldNumber;
const int Match::kFirstBloodTimeFieldNumber;
const int Match::kLobbyTypeFieldNumber;
const int Match::kHumanPlayersFieldNumber;
const int Match::kLeagueidFieldNumber;
const int Match::kPositiveVotesFieldNumber;
const int Match::kNegativeVotesFieldNumber;
const int Match::kGameModeFieldNumber;
#endif  // !_MSC_VER

Match::Match()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:computerfr33k.dota2.entities.Match)
}

void Match::InitAsDefaultInstance() {
}

Match::Match(const Match& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:computerfr33k.dota2.entities.Match)
}

void Match::SharedCtor() {
  _cached_size_ = 0;
  radiant_win_ = false;
  duration_ = GOOGLE_LONGLONG(0);
  start_time_ = GOOGLE_LONGLONG(0);
  match_id_ = GOOGLE_LONGLONG(0);
  match_seq_num_ = GOOGLE_LONGLONG(0);
  tower_status_radiant_ = 0u;
  tower_status_dire_ = 0u;
  barracks_status_radiant_ = 0u;
  barracks_status_dire_ = 0u;
  cluster_ = 0;
  first_blood_time_ = 0;
  lobby_type_ = -1;
  human_players_ = 0;
  leagueid_ = 0;
  positive_votes_ = 0;
  negative_votes_ = 0;
  game_mode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Match::~Match() {
  // @@protoc_insertion_point(destructor:computerfr33k.dota2.entities.Match)
  SharedDtor();
}

void Match::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Match::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Match::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Match_descriptor_;
}

const Match& Match::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Protobuf_2fMatch_2eproto();
  return *default_instance_;
}

Match* Match::default_instance_ = NULL;

Match* Match::New() const {
  return new Match;
}

void Match::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Match*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(duration_, barracks_status_radiant_);
  }
  if (_has_bits_[8 / 32] & 65280) {
    ZR_(barracks_status_dire_, first_blood_time_);
    ZR_(human_players_, negative_votes_);
    lobby_type_ = -1;
  }
  game_mode_ = 0;

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Match::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:computerfr33k.dota2.entities.Match)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool radiant_win = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &radiant_win_)));
          set_has_radiant_win();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_duration;
        break;
      }

      // required int64 duration = 2;
      case 2: {
        if (tag == 16) {
         parse_duration:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &duration_)));
          set_has_duration();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_start_time;
        break;
      }

      // required int64 start_time = 3;
      case 3: {
        if (tag == 24) {
         parse_start_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &start_time_)));
          set_has_start_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_match_id;
        break;
      }

      // required int64 match_id = 4;
      case 4: {
        if (tag == 32) {
         parse_match_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &match_id_)));
          set_has_match_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_match_seq_num;
        break;
      }

      // required int64 match_seq_num = 5;
      case 5: {
        if (tag == 40) {
         parse_match_seq_num:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &match_seq_num_)));
          set_has_match_seq_num();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_tower_status_radiant;
        break;
      }

      // required uint32 tower_status_radiant = 6;
      case 6: {
        if (tag == 48) {
         parse_tower_status_radiant:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &tower_status_radiant_)));
          set_has_tower_status_radiant();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_tower_status_dire;
        break;
      }

      // required uint32 tower_status_dire = 7;
      case 7: {
        if (tag == 56) {
         parse_tower_status_dire:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &tower_status_dire_)));
          set_has_tower_status_dire();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_barracks_status_radiant;
        break;
      }

      // required uint32 barracks_status_radiant = 8;
      case 8: {
        if (tag == 64) {
         parse_barracks_status_radiant:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &barracks_status_radiant_)));
          set_has_barracks_status_radiant();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_barracks_status_dire;
        break;
      }

      // required uint32 barracks_status_dire = 9;
      case 9: {
        if (tag == 72) {
         parse_barracks_status_dire:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &barracks_status_dire_)));
          set_has_barracks_status_dire();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(80)) goto parse_cluster;
        break;
      }

      // required int32 cluster = 10;
      case 10: {
        if (tag == 80) {
         parse_cluster:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cluster_)));
          set_has_cluster();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(88)) goto parse_first_blood_time;
        break;
      }

      // required int32 first_blood_time = 11;
      case 11: {
        if (tag == 88) {
         parse_first_blood_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &first_blood_time_)));
          set_has_first_blood_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(96)) goto parse_lobby_type;
        break;
      }

      // required .computerfr33k.dota2.entities.Match.LobbyType lobby_type = 12 [default = LT_INVALID];
      case 12: {
        if (tag == 96) {
         parse_lobby_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::computerfr33k::dota2::entities::Match_LobbyType_IsValid(value)) {
            set_lobby_type(static_cast< ::computerfr33k::dota2::entities::Match_LobbyType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(12, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(104)) goto parse_human_players;
        break;
      }

      // required int32 human_players = 13;
      case 13: {
        if (tag == 104) {
         parse_human_players:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &human_players_)));
          set_has_human_players();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(112)) goto parse_leagueid;
        break;
      }

      // optional int32 leagueid = 14;
      case 14: {
        if (tag == 112) {
         parse_leagueid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &leagueid_)));
          set_has_leagueid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(120)) goto parse_positive_votes;
        break;
      }

      // optional int32 positive_votes = 15;
      case 15: {
        if (tag == 120) {
         parse_positive_votes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &positive_votes_)));
          set_has_positive_votes();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(128)) goto parse_negative_votes;
        break;
      }

      // optional int32 negative_votes = 16;
      case 16: {
        if (tag == 128) {
         parse_negative_votes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &negative_votes_)));
          set_has_negative_votes();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(136)) goto parse_game_mode;
        break;
      }

      // required .computerfr33k.dota2.entities.Match.GameMode game_mode = 17 [default = GM_UNKNOWN];
      case 17: {
        if (tag == 136) {
         parse_game_mode:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::computerfr33k::dota2::entities::Match_GameMode_IsValid(value)) {
            set_game_mode(static_cast< ::computerfr33k::dota2::entities::Match_GameMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(17, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:computerfr33k.dota2.entities.Match)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:computerfr33k.dota2.entities.Match)
  return false;
#undef DO_
}

void Match::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:computerfr33k.dota2.entities.Match)
  // required bool radiant_win = 1;
  if (has_radiant_win()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->radiant_win(), output);
  }

  // required int64 duration = 2;
  if (has_duration()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->duration(), output);
  }

  // required int64 start_time = 3;
  if (has_start_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->start_time(), output);
  }

  // required int64 match_id = 4;
  if (has_match_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->match_id(), output);
  }

  // required int64 match_seq_num = 5;
  if (has_match_seq_num()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->match_seq_num(), output);
  }

  // required uint32 tower_status_radiant = 6;
  if (has_tower_status_radiant()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->tower_status_radiant(), output);
  }

  // required uint32 tower_status_dire = 7;
  if (has_tower_status_dire()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->tower_status_dire(), output);
  }

  // required uint32 barracks_status_radiant = 8;
  if (has_barracks_status_radiant()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->barracks_status_radiant(), output);
  }

  // required uint32 barracks_status_dire = 9;
  if (has_barracks_status_dire()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->barracks_status_dire(), output);
  }

  // required int32 cluster = 10;
  if (has_cluster()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->cluster(), output);
  }

  // required int32 first_blood_time = 11;
  if (has_first_blood_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->first_blood_time(), output);
  }

  // required .computerfr33k.dota2.entities.Match.LobbyType lobby_type = 12 [default = LT_INVALID];
  if (has_lobby_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      12, this->lobby_type(), output);
  }

  // required int32 human_players = 13;
  if (has_human_players()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->human_players(), output);
  }

  // optional int32 leagueid = 14;
  if (has_leagueid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->leagueid(), output);
  }

  // optional int32 positive_votes = 15;
  if (has_positive_votes()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->positive_votes(), output);
  }

  // optional int32 negative_votes = 16;
  if (has_negative_votes()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(16, this->negative_votes(), output);
  }

  // required .computerfr33k.dota2.entities.Match.GameMode game_mode = 17 [default = GM_UNKNOWN];
  if (has_game_mode()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      17, this->game_mode(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:computerfr33k.dota2.entities.Match)
}

::google::protobuf::uint8* Match::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:computerfr33k.dota2.entities.Match)
  // required bool radiant_win = 1;
  if (has_radiant_win()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->radiant_win(), target);
  }

  // required int64 duration = 2;
  if (has_duration()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->duration(), target);
  }

  // required int64 start_time = 3;
  if (has_start_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->start_time(), target);
  }

  // required int64 match_id = 4;
  if (has_match_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->match_id(), target);
  }

  // required int64 match_seq_num = 5;
  if (has_match_seq_num()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->match_seq_num(), target);
  }

  // required uint32 tower_status_radiant = 6;
  if (has_tower_status_radiant()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->tower_status_radiant(), target);
  }

  // required uint32 tower_status_dire = 7;
  if (has_tower_status_dire()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->tower_status_dire(), target);
  }

  // required uint32 barracks_status_radiant = 8;
  if (has_barracks_status_radiant()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->barracks_status_radiant(), target);
  }

  // required uint32 barracks_status_dire = 9;
  if (has_barracks_status_dire()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->barracks_status_dire(), target);
  }

  // required int32 cluster = 10;
  if (has_cluster()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->cluster(), target);
  }

  // required int32 first_blood_time = 11;
  if (has_first_blood_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->first_blood_time(), target);
  }

  // required .computerfr33k.dota2.entities.Match.LobbyType lobby_type = 12 [default = LT_INVALID];
  if (has_lobby_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      12, this->lobby_type(), target);
  }

  // required int32 human_players = 13;
  if (has_human_players()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->human_players(), target);
  }

  // optional int32 leagueid = 14;
  if (has_leagueid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->leagueid(), target);
  }

  // optional int32 positive_votes = 15;
  if (has_positive_votes()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->positive_votes(), target);
  }

  // optional int32 negative_votes = 16;
  if (has_negative_votes()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(16, this->negative_votes(), target);
  }

  // required .computerfr33k.dota2.entities.Match.GameMode game_mode = 17 [default = GM_UNKNOWN];
  if (has_game_mode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      17, this->game_mode(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:computerfr33k.dota2.entities.Match)
  return target;
}

int Match::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool radiant_win = 1;
    if (has_radiant_win()) {
      total_size += 1 + 1;
    }

    // required int64 duration = 2;
    if (has_duration()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->duration());
    }

    // required int64 start_time = 3;
    if (has_start_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->start_time());
    }

    // required int64 match_id = 4;
    if (has_match_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->match_id());
    }

    // required int64 match_seq_num = 5;
    if (has_match_seq_num()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->match_seq_num());
    }

    // required uint32 tower_status_radiant = 6;
    if (has_tower_status_radiant()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->tower_status_radiant());
    }

    // required uint32 tower_status_dire = 7;
    if (has_tower_status_dire()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->tower_status_dire());
    }

    // required uint32 barracks_status_radiant = 8;
    if (has_barracks_status_radiant()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->barracks_status_radiant());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint32 barracks_status_dire = 9;
    if (has_barracks_status_dire()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->barracks_status_dire());
    }

    // required int32 cluster = 10;
    if (has_cluster()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cluster());
    }

    // required int32 first_blood_time = 11;
    if (has_first_blood_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->first_blood_time());
    }

    // required .computerfr33k.dota2.entities.Match.LobbyType lobby_type = 12 [default = LT_INVALID];
    if (has_lobby_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->lobby_type());
    }

    // required int32 human_players = 13;
    if (has_human_players()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->human_players());
    }

    // optional int32 leagueid = 14;
    if (has_leagueid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->leagueid());
    }

    // optional int32 positive_votes = 15;
    if (has_positive_votes()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->positive_votes());
    }

    // optional int32 negative_votes = 16;
    if (has_negative_votes()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->negative_votes());
    }

  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    // required .computerfr33k.dota2.entities.Match.GameMode game_mode = 17 [default = GM_UNKNOWN];
    if (has_game_mode()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->game_mode());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Match::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Match* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Match*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Match::MergeFrom(const Match& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_radiant_win()) {
      set_radiant_win(from.radiant_win());
    }
    if (from.has_duration()) {
      set_duration(from.duration());
    }
    if (from.has_start_time()) {
      set_start_time(from.start_time());
    }
    if (from.has_match_id()) {
      set_match_id(from.match_id());
    }
    if (from.has_match_seq_num()) {
      set_match_seq_num(from.match_seq_num());
    }
    if (from.has_tower_status_radiant()) {
      set_tower_status_radiant(from.tower_status_radiant());
    }
    if (from.has_tower_status_dire()) {
      set_tower_status_dire(from.tower_status_dire());
    }
    if (from.has_barracks_status_radiant()) {
      set_barracks_status_radiant(from.barracks_status_radiant());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_barracks_status_dire()) {
      set_barracks_status_dire(from.barracks_status_dire());
    }
    if (from.has_cluster()) {
      set_cluster(from.cluster());
    }
    if (from.has_first_blood_time()) {
      set_first_blood_time(from.first_blood_time());
    }
    if (from.has_lobby_type()) {
      set_lobby_type(from.lobby_type());
    }
    if (from.has_human_players()) {
      set_human_players(from.human_players());
    }
    if (from.has_leagueid()) {
      set_leagueid(from.leagueid());
    }
    if (from.has_positive_votes()) {
      set_positive_votes(from.positive_votes());
    }
    if (from.has_negative_votes()) {
      set_negative_votes(from.negative_votes());
    }
  }
  if (from._has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    if (from.has_game_mode()) {
      set_game_mode(from.game_mode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Match::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Match::CopyFrom(const Match& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Match::IsInitialized() const {
  if ((_has_bits_[0] & 0x00011fff) != 0x00011fff) return false;

  return true;
}

void Match::Swap(Match* other) {
  if (other != this) {
    std::swap(radiant_win_, other->radiant_win_);
    std::swap(duration_, other->duration_);
    std::swap(start_time_, other->start_time_);
    std::swap(match_id_, other->match_id_);
    std::swap(match_seq_num_, other->match_seq_num_);
    std::swap(tower_status_radiant_, other->tower_status_radiant_);
    std::swap(tower_status_dire_, other->tower_status_dire_);
    std::swap(barracks_status_radiant_, other->barracks_status_radiant_);
    std::swap(barracks_status_dire_, other->barracks_status_dire_);
    std::swap(cluster_, other->cluster_);
    std::swap(first_blood_time_, other->first_blood_time_);
    std::swap(lobby_type_, other->lobby_type_);
    std::swap(human_players_, other->human_players_);
    std::swap(leagueid_, other->leagueid_);
    std::swap(positive_votes_, other->positive_votes_);
    std::swap(negative_votes_, other->negative_votes_);
    std::swap(game_mode_, other->game_mode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Match::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Match_descriptor_;
  metadata.reflection = Match_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace entities
}  // namespace dota2
}  // namespace computerfr33k

// @@protoc_insertion_point(global_scope)
