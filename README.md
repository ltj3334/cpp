VSCODE C++ Programming Initialize

1. c_cpp_propertiese.sjon

- cpp 파일 클릭 후 "보기" 탭 -> 명령 팔레트 -> "C/C++ 구성 편집"
- configure setting

            "name": "Mac",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "macFrameworkPath": [
                "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks"
            ],
            "compilerPath": "/usr/bin/g++",
            "cStandard": "c17",
            "cppStandard": "c++17",
            "intelliSenseMode": "macos-clang-x64"

2. tasks.json

- cpp 파일 클릭 후 -> "터미널 탭" -> 작업 구성
- configure setting

      "type": "cppbuild",
      "label": "C/C++: g++ 활성 파일 빌드",
      "command": "/usr/bin/g++",
      "args": [
        "-fdiagnostics-color=always",
        "-g",
        "-Wall",
        "-std=c++17",
        "${fileDirname}/*.cpp",
        "-o",
        "${fileDirname}/${fileBasenameNoExtension}"
      ],
      "options": {
        "cwd": "${fileDirname}"
      },

3. launch.json

- cpp 파일 클릭 후 "실행" 탭 -> 구성 추가
- configure setting

      "name": "g++ - 활성 파일 빌드 및 디버그",
      "type": "lldb",
      "request": "launch",
      "program": "${fileDirname}/${fileBasenameNoExtension}",
      "args": [],
      "cwd": "${fileDirname}",
      "preLaunchTask": "C/C++: g++ 활성 파일 빌드"

4. Build

- cpp 클릭 후 build
