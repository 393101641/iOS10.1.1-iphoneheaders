/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@interface PersistentJobManagerEntity : SSSQLiteEntity
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(void)initialize;
+(id)databaseTable;
-(id)finishPersistentJobsWithIDs:(id)arg1 ;
@end
