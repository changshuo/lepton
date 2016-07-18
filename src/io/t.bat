set _CL_=/EHsc /experimental:module /d1ParseTrees:Errors /d1NewQname
cp ..\..\dependencies\md5\md5.ifc md5.ifc
cl /c Error.ixx

cl /c /module:export DecoderPlatformStd.ixx
cl /c DecoderPlatform.ixx
cl /c MemMgrAllocator.ixx

cl /c /module:export AllocatorStd.ixx
cl /c Allocator.ixx
cl /c Reader.ixx
REM cl /c ioutil.ixx
cl /c ioutil.cc

