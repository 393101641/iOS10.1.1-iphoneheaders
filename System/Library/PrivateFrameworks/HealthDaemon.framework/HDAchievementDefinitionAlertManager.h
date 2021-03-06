/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDAchievementDefinitionAlertSuppressorDelegate.h>
#import <libobjc.A.dylib/HDAchievementAssetObserver.h>

@protocol HDAchievementDefinitionAlertSuppressor, OS_dispatch_queue, HDAchievementDefinitionAlertNotifier;
@class HDProfile, HDBackgroundTaskScheduler, NSObject, NSNumber, NSDate, NSString;

@interface HDAchievementDefinitionAlertManager : NSObject <HDHealthDaemonReadyObserver, HDAchievementDefinitionAlertSuppressorDelegate, HDAchievementAssetObserver> {

	HDProfile* _profile;
	HDBackgroundTaskScheduler* _backgroundTaskScheduler;
	id<HDAchievementDefinitionAlertSuppressor> _alertSuppressor;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _waitingToRun;
	id<HDAchievementDefinitionAlertNotifier> _alertNotifier;
	NSDate* _dateOverride;

}

@property (nonatomic,retain) NSDate * dateOverride;                                                 //@synthesize dateOverride=_dateOverride - In the implementation block
@property (nonatomic,readonly) id<HDAchievementDefinitionAlertNotifier> alertNotifier;              //@synthesize alertNotifier=_alertNotifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_findDefinitionsToAlertWithProfile:(id)arg1 currentDate:(id)arg2 amongDefinitions:(id)arg3 getExpiredDefinitions:(id*)arg4 ;
+(id)_definitionIdentifiersInAlertedState:(unsigned long long)arg1 amongDefinitions:(id)arg2 withProfile:(id)arg3 error:(id*)arg4 ;
+(id)_availableDefinitionIdentifiersWithProfile:(id)arg1 error:(id*)arg2 ;
+(void)_clearBookkeepingKeyValuesWithProfile:(id)arg1 ;
+(id)_findNextDefinitionToScheduleAmongDefinitions:(id)arg1 withCurrentDate:(id)arg2 ;
-(void)dealloc;
-(void)daemonReady:(id)arg1 ;
-(id)unviewedDefinitionsWithError:(id*)arg1 ;
-(id<HDAchievementDefinitionAlertNotifier>)alertNotifier;
-(BOOL)markDefinitionIdentifiers:(id)arg1 asAvailable:(BOOL)arg2 withProfile:(id)arg3 error:(id*)arg4 ;
-(BOOL)markDefinitionIdentifiers:(id)arg1 asAlertedState:(unsigned long long)arg2 withProfile:(id)arg3 error:(id*)arg4 ;
-(id)currentDate;
-(id)initWithProfile:(id)arg1 backgroundTaskScheduler:(id)arg2 alertSuppressor:(id)arg3 alertNotifier:(id)arg4 ;
-(void)setDateOverride:(NSDate *)arg1 ;
-(NSDate *)dateOverride;
-(void)updateDefinitionsToAlert;
-(void)_queue_findAndNotifyAlerts;
-(BOOL)_queue_markDefinitions:(id)arg1 asAlertedState:(unsigned long long)arg2 ;
-(void)_queue_rescheduleNewAchievementAlertsWithDefinitions:(id)arg1 ;
-(id)definitionIdentifiersInAlertedState:(unsigned long long)arg1 withError:(id*)arg2 ;
-(void)_queue_markDefinitionsAvailable:(id)arg1 ;
-(void)_queue_cleanUpIdentifierAvailabilityWithAvailableIdentifiers:(id)arg1 ;
-(void)alertSuppressionStatusDidChange:(id)arg1 ;
-(BOOL)wantsToAlert;
-(void)achievementDefinitionsDidChangeToDefinitions:(id)arg1 ;
-(void)clearBookkeepingKeyValues;
-(id)nextScheduledTaskDate;
-(void)_synthesizeAlert;
@end

