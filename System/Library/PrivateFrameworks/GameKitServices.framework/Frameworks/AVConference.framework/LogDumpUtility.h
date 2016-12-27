/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LogDumpUtility : NSObject
+(id)getCachesDirectoryPath;
+(BOOL)createDirectory:(id)arg1 ;
+(id)getDefaultLogDumpPath;
+(void)removeOldFilesInDefaultLogDumpPath;
+(void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2 ;
+(void)AddFileToMarco:(id)arg1 logCategory:(int)arg2 ;
+(id)newLogDumpStream:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 fullFilename:(id*)arg6 ;
+(id)logFilename:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 ;
@end
