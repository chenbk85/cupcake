
add_subdirectory(http)
add_subdirectory(net)
add_subdirectory(text)
add_subdirectory(util)

file(GLOB
  LOCAL
  "*.h"
)

set(CUPCAKE_UNIT_SRC
  ${CUPCAKE_UNIT_SRC}
  ${LOCAL}
  PARENT_SCOPE
)
