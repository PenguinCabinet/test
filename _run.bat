@echo off
docker rm -f my-clang
set WorkingDir=%~dp0
set WorkingDir=%WorkingDir:~0,-1%
docker container run -v "%WorkingDir%\src":/src -itd --privileged --hostname my-clang --name my-clang my-clang:test-tag "%arg1%"
