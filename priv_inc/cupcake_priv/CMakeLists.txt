add_subdirectory(http)
add_subdirectory(net)
add_subdirectory(text)
add_subdirectory(util)

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
set(LOCAL
  ${CMAKE_CURRENT_SOURCE_DIR}/Cupcake_priv_win.h
)
else()

endif()

set(LOCAL
  ${LOCAL}
  ${CMAKE_CURRENT_SOURCE_DIR}/CString.h
)

set(CUPCAKE_SRC
  ${CUPCAKE_SRC}
  ${LOCAL}
  PARENT_SCOPE
)
