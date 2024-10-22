cmake_minimum_required(VERSION 3.29)
project(ChessGame)

set(CMAKE_CXX_STANDARD 17)

set(Qt6_DIR "C:/Qt/6.8.0/mingw_64/lib/cmake/Qt6")
set(Qt6CoreTools_DIR "C:/Qt/6.8.0/mingw_64/lib/cmake/Qt6CoreTools")
set(Qt6GuiTools_DIR "C:/Qt/6.8.0/mingw_64/lib/cmake/Qt6GuiTools")

find_package(Qt6 COMPONENTS Widgets REQUIRED)

set(SOURCES main.cpp
        src/model/ChessPiece.cpp
        include/model/ChessPiece.h
        src/model/ChessBoard.cpp
        include/model/ChessBoard.h
        src/model/ChessGame.cpp
        include/model/ChessGame.h
        src/model/ChessPlayer.cpp
        include/model/ChessPlayer.h
        src/model/pieces/ChessPawn.cpp
        include/model/pieces/ChessPawn.h
        src/Controller.cpp
        include/Controller.h
        src/view/tools/View.cpp
        include/view/tools/View.h
        src/view/GameView.cpp
        include/view/GameView.h
        src/view/tools/MainPanel.cpp
        include/view/tools/MainPanel.h
        src/view/component/BoardPanel.cpp
        include/view/component/BoardPanel.h
        src/view/component/SideBarPanel.cpp
        include/view/component/SideBarPanel.h
        src/view/tools/Component.cpp
        include/view/tools/Component.h
        src/view/component/TileButton.cpp
        include/view/component/TileButton.h)
set(HEADERS)
set(UI)

# Inclure les fichiers générés par uic et moc
qt6_wrap_ui(UI_HEADERS ${UI})
qt6_wrap_cpp(MOC_HEADERS ${HEADERS})

add_executable(ChessGame ${SOURCES} ${UI_HEADERS} ${MOC_HEADERS})

target_link_libraries(ChessGame Qt6::Widgets)