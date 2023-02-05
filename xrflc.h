#include "map"

namespace xrflc {
struct Instance {
  const char *TypeName;
  Instance(const char *_name);
  Instance(const Instance &origin);
};
Instance::Instance(const char *_name) { this->TypeName = _name; }
Instance::Instance(const Instance &origin) { this->TypeName = origin.TypeName; }
}  // namespace xrflc

#define XRFLC_RGST(_STRUCT)              \
  namespace xrflc {                      \
  Instance Prototype##_STRUCT(#_STRUCT); \
  Instance Load(_STRUCT _target) {       \
    Instance result(Prototype##_STRUCT); \
    return result;                       \
  }                                      \
  };  // namespace xrflc
