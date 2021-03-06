/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/NanoPeopleDataMigrator.bundle/NanoPeopleDataMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface NPLDataMigrator : DataClassMigrator {

	BOOL _done;

}
+(id)_normalizedFriendListForFriendList:(id)arg1 ;
-(BOOL)_migratePerGizmoDefaultsToCompanionDefaults;
-(BOOL)_updatePhotoCache;
-(void)_updateSettingsVersion:(long long)arg1 ;
-(BOOL)_isSettingsVersionIsGreaterThanOrEqualTo:(long long)arg1 ;
-(BOOL)normalizeFriendListIfNeeded;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

