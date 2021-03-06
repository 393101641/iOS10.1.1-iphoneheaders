/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFUserAuthenticationModel.h>

@protocol OS_dispatch_queue, SBFUserAuthenticationModelDelegate;
@class SBSecurityDefaults, NSString, NSObject, NSDictionary;

@interface SBFUserAuthenticationModelJournaledDefaults : NSObject <SBFUserAuthenticationModel> {

	SBSecurityDefaults* _securityDefaults;
	NSString* _journalPath;
	NSObject*<OS_dispatch_queue> _persistentStateQueue;
	BOOL _speculativePasscodeFailureChargeOutstanding;
	NSDictionary* _originalDefaultsForRollback;
	BOOL _pendingWipe;
	BOOL _permanentlyBlocked;
	double _unblockTime;
	id<SBFUserAuthenticationModelDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
+(id)_journaledDefaultsAndTypes;
-(id)init;
-(void)setDelegate:(id<SBFUserAuthenticationModelDelegate>)arg1 ;
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(void)synchronize;
-(void)notePasscodeUnlockSucceeded;
-(void)notePasscodeUnlockFailedWithError:(id)arg1 ;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(BOOL)isTemporarilyBlocked;
-(double)timeUntilUnblockedSinceReferenceDate;
-(BOOL)isPermanentlyBlocked;
-(void)performPasswordTest:(/*^block*/id)arg1 ;
-(void)clearBlockedState;
-(BOOL)_isDeviceWipePreferenceEnabled;
-(id)initWithJournalPath:(id)arg1 ;
-(void)_loadLockControllerDefaultsJournalIfNecessary;
-(void)_persistentStateQueue_loadLockState;
-(void)_persistentStateQueue_beginSpeculativeFailureCharge;
-(void)_persistentStateQueue_cancelSpeculativeFailureCharge;
-(void)_persistentStateQueue_unlockSucceeded;
-(void)_persistentStateQueue_unlockFailedWithError:(id)arg1 ;
-(void)_persistentStateQueue_clearBlockedState;
-(void)_evaluatePendingWipe;
-(void)_persistentStateQueue_evaluatePendingWipe;
-(id)updateLockControllerDefaultsWithBlock:(/*^block*/id)arg1 journaled:(BOOL)arg2 ;
-(void)_loadLockControllerDefaults:(id)arg1 ;
-(id)_copyLockControllerDefaults;
-(void)_updateLockControllerDefaultsJournal;
@end

