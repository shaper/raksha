#ifndef THIRD_PARTY_RAKSHA_SRC_FRONTENDS_SQL_BRIDGE_H_
#define THIRD_PARTY_RAKSHA_SRC_FRONTENDS_SQL_BRIDGE_H_

#include "src/frontends/sql/sql_ir.pb.h"

namespace raksha::frontends::sql {

std::string verify(const raksha::frontends::sql::ExpressionArena &arena);

}  // namespace raksha::frontends::sql

#endif  // THIRD_PARTY_RAKSHA_SRC_FRONTENDS_SQL_BRIDGE_H_
