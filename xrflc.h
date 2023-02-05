#include "map"

namespace xrflc {

struct StructInfo {
  const char *StructName;
  unsigned MemberCount;
  StructInfo(const char *_structName);
};

StructInfo::StructInfo(const char *_structName) {
  this->StructName = _structName;
}

};  // namespace xrflc

#define XRFLC_RGST(STRUCT_NAME) xrflc::StructInfo R##STRUCT_NAME(#STRUCT_NAME);
