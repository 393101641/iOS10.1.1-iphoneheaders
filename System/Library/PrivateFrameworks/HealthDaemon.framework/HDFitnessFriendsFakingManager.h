/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDFitnessFriendsManagerReadyObserver.h>

@class HDDaemon, HDFitnessFriendsActivityDataManager, NSString;

@interface HDFitnessFriendsFakingManager : NSObject <HDFitnessFriendsManagerReadyObserver> {

	HDDaemon* _healthDaemon;
	HDFitnessFriendsActivityDataManager* _activityDataManager;

}

@property (assign,nonatomic,__weak) HDDaemon * healthDaemon;                                                //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (assign,nonatomic,__weak) HDFitnessFriendsActivityDataManager * activityDataManager;              //@synthesize activityDataManager=_activityDataManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDDaemon *)healthDaemon;
-(void)setHealthDaemon:(HDDaemon *)arg1 ;
-(HDFitnessFriendsActivityDataManager *)activityDataManager;
-(void)fitnessFriendsManagerReady:(id)arg1 ;
-(void)pushFakeActivityDataToAllFriendsWithCompletion:(/*^block*/id)arg1 ;
-(void)setActivityDataManager:(HDFitnessFriendsActivityDataManager *)arg1 ;
-(id)_fakeActivitySnapshotForDate:(id)arg1 sourceUUID:(id)arg2 ;
-(id)_fakeAchievementsForDate:(id)arg1 ;
-(id)_fakeWorkoutForDate:(id)arg1 ;
@end
