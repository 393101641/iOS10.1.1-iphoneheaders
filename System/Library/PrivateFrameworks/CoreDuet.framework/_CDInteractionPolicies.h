/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDInteractionPolicy, NSDictionary, NSDate;

@interface _CDInteractionPolicies : NSObject {

	unsigned long long _maxNumberOfInteractions;
	unsigned long long _maxNumberOfInteractionsDeletedInBatch;
	double _maxLifespanInSeconds;
	_CDInteractionPolicy* _defaultPolicy;
	NSDictionary* _specialPolicies;

}

@property (readonly) unsigned long long maxNumberOfInteractionsStored; 
@property (readonly) unsigned long long maxNumberOfInteractionsDeleted; 
@property (readonly) NSDate * dateOfOldestAllowedInteraction; 
+(id)interactionPolicies;
+(id)modifyDate:(id)arg1 usingPolicy:(id)arg2 ;
+(id)limitArray:(id)arg1 toMaxCount:(unsigned long long)arg2 ;
-(id)init;
-(id)description;
-(id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1 ;
-(void)setupDefaultHardcodedPolicies;
-(void)readConfigurationPlist;
-(id)policyForMechanism:(long long)arg1 ;
-(unsigned long long)maxNumberOfInteractionsStored;
-(unsigned long long)maxNumberOfInteractionsDeleted;
-(NSDate *)dateOfOldestAllowedInteraction;
-(id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(BOOL)arg2 enforcePrivacy:(BOOL)arg3 ;
@end
