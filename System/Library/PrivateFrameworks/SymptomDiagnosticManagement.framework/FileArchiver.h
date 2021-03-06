/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SymptomDiagnosticManagement.framework/SymptomDiagnosticManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomDiagnosticManagement/SymptomDiagnosticManagement-Structs.h>
@interface FileArchiver : NSObject {

	archiveRef _archive;

}
+(id)archiveWithPaths:(id)arg1 destinationDir:(id)arg2 deleteSource:(BOOL)arg3 ;
+(id)matchFilesInDirectory:(id)arg1 filenamePredicate:(id)arg2 newerThan:(id)arg3 ;
+(id)archiveWithPath:(id)arg1 ;
+(id)archiveWithPath:(id)arg1 destinationDir:(id)arg2 nameContains:(id)arg3 maxAge:(double)arg4 ;
-(int)closeArchive;
-(id)initWithPath:(id)arg1 shouldCompress:(BOOL)arg2 ;
-(void)moveDirectoryToArchive:(id)arg1 withDirName:(id)arg2 ;
-(int)addDirectoryToArchive:(id)arg1 withDirName:(id)arg2 ;
-(int)addFileToArchive:(id)arg1 withFileName:(id)arg2 ;
@end

