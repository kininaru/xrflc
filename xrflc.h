#include "map"

#define XRFLC_RGST(_STRUCT)          \
  namespace xrflc {                  \
  struct R##_STRUCT {                \
    const char *TypeName = #_STRUCT; \
  };                                 \
  R##_STRUCT Load(_STRUCT _target) { \
    R##_STRUCT result;               \
    return result;                   \
  }                                  \
  };  // namespace xrflc
