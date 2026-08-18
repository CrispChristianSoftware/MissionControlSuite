#Progress Log 

## July 6th 2026 
### Project Planning, creating descripive markdown documents and github projects board

## July 12th 2026 
### Getting a basic c++ json file reader program with nlohmann to read the json files that will at first contain the maps 
### Also configuring the project to run with cmake build system 

## July 15th 
### G++ version was too old to work with nlohmann so I have updated version with MSYS2 
### MSYS2 - Needed for developing c++ software on windows 

## July 28th 
### removed nlohmann and json.hpp references in order to use normal .txt files for the maps instead. After going back and fourth intermittinly for a while
### it seems that the my version os vscode and cmake just isn't recognizing json.hpp as valid and digging deeper. There seems to be some mismatch in the version of 
### cmake and g++ that my terminal sees and vscode is actually using. 

## July 29th 
### Finally completed a sucessful cmake build. Outputs correctly to the command terminal. Achieved by deleting the build folder, buiilding and then running again 
### which didn't work before but worked this time 

## August 17th 
### Fixed file path for the starting file. Fleshed out the classes for the bases, mapobjects and no fly zones
### Encountered an error with assigning a string to a string (function "std::__1::basic_string<_CharT, _Traits, _Allocator>::operator=(const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> &) [with _CharT=char, _Traits=std::__1::char_traits<char>, _Allocator=std::__1::allocator<char>]" (declared implicitly) cannot be referenced -- it is a deleted functionC/C++(1776)) is seems it thinks I'm trying to assigna const variable a new value
### This seems to be from some mismatch and probably because I have way too many versions of c++ compilers on my machine, so I think I might delete them and restart with only one