#include "src/frontends/sql/bridge.h"

#include "google/protobuf/text_format.h"

namespace raksha::frontends::sql {

// For now, have "verify" just print out the protobuf it receives as input
// to its return value
std::string verify(const ExpressionArena &arena) {
  std::string textproto_output;
  proto2::TextFormat::PrintToString(arena, &textproto_output);
  return textproto_output;
}

}  // namespace raksha::frontends::sql
