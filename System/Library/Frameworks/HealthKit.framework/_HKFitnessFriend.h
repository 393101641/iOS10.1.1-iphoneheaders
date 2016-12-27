/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDictionary, _HKFitnessFriendContact, NSUUID, NSDate;

@interface _HKFitnessFriend : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _currentCacheIndex;
	NSDictionary* _snapshots;
	NSDictionary* _friendAchievements;
	NSDictionary* _friendWorkouts;
	_HKFitnessFriendContact* _contact;

}

@property (nonatomic,retain) NSDictionary * snapshots;                                   //@synthesize snapshots=_snapshots - In the implementation block
@property (nonatomic,retain) NSDictionary * friendAchievements;                          //@synthesize friendAchievements=_friendAchievements - In the implementation block
@property (nonatomic,retain) NSDictionary * friendWorkouts;                              //@synthesize friendWorkouts=_friendWorkouts - In the implementation block
@property (nonatomic,retain) _HKFitnessFriendContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (readonly) NSUUID * friendUUID; 
@property (nonatomic,readonly) BOOL isFriendshipCurrentlyActive; 
@property (nonatomic,readonly) BOOL canSeeMyActivityData; 
@property (nonatomic,readonly) BOOL isActivityDataCurrentlyVisibleToMe; 
@property (nonatomic,readonly) BOOL hasInviteRequestFromMe; 
@property (nonatomic,readonly) BOOL sentInviteRequestToMe; 
@property (nonatomic,readonly) BOOL isAwaitingInviteResponseFromMe; 
@property (nonatomic,readonly) BOOL inviteRequestToMeWasAccepted; 
@property (nonatomic,readonly) NSDate * dateForLatestOutgoingInviteRequest; 
@property (nonatomic,readonly) NSDate * dateForLatestDataHiddenFromMe; 
@property (nonatomic,readonly) NSDate * dateForLatestDataHidden; 
@property (nonatomic,readonly) NSDate * dateForLatestDataShownToMe; 
@property (nonatomic,readonly) NSDate * dateForLatestDataShown; 
@property (nonatomic,readonly) NSDate * dateForLatestRelationshipStart; 
@property (nonatomic,readonly) BOOL isMuted; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)timeZone;
-(NSDictionary *)snapshots;
-(id)currentSnapshot;
-(_HKFitnessFriendContact *)contact;
-(BOOL)isMuted;
-(NSDate *)dateForLatestDataHidden;
-(NSDate *)dateForLatestDataShown;
-(NSDate *)dateForLatestOutgoingInviteRequest;
-(id)_mostRecentSnapshot;
-(BOOL)isActivityDataVisibleToMeForDate:(id)arg1 ;
-(BOOL)sentInviteRequestToMe;
-(NSDate *)dateForLatestDataHiddenFromMe;
-(NSDate *)dateForLatestDataShownToMe;
-(NSUUID *)friendUUID;
-(id)currentDateComponents;
-(BOOL)isFriendshipCurrentlyActive;
-(NSDate *)dateForLatestRelationshipStart;
-(BOOL)hasInviteRequestFromMe;
-(BOOL)canSeeMyActivityData;
-(BOOL)isActivityDataCurrentlyVisibleToMe;
-(BOOL)isAwaitingInviteResponseFromMe;
-(void)setContact:(_HKFitnessFriendContact *)arg1 ;
-(id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4 ;
-(void)setSnapshots:(NSDictionary *)arg1 ;
-(NSDictionary *)friendAchievements;
-(void)setFriendAchievements:(NSDictionary *)arg1 ;
-(NSDictionary *)friendWorkouts;
-(void)setFriendWorkouts:(NSDictionary *)arg1 ;
-(BOOL)inviteRequestToMeWasAccepted;
@end
