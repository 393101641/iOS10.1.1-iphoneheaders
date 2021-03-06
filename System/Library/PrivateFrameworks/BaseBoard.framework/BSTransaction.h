/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSWatchdogProviding.h>

@protocol OS_os_log;
@class NSMutableArray, NSMutableSet, NSError, NSDate, NSMutableDictionary, NSHashTable, BSAuditHistory, NSObject, NSString, NSSet, NSArray;

@interface BSTransaction : NSObject <BSWatchdogProviding> {

	NSMutableArray* _parentTransactionRelationships;
	NSMutableSet* _lifeAssertions;
	BOOL _failed;
	BOOL _aborted;
	BOOL _interrupted;
	BOOL _inSubclassBegin;
	NSError* _error;
	NSDate* _startTime;
	NSMutableDictionary* _milestonesToHandlers;
	NSMutableArray* _childTransactionRelationships;
	NSMutableSet* _milestones;
	NSHashTable* _observers;
	unsigned long long _state;
	BSAuditHistory* _auditHistory;
	NSObject*<OS_os_log> _auditHistoryLog;
	BOOL _debugLoggingEnabled;
	NSMutableSet* _debugLogCategories;
	NSString* _cachedDescriptionProem;
	NSMutableArray* _blockObservers;
	/*^block*/id _completionBlock;
	BOOL _cachedDefaultBasedAuditHistoryEnabled;
	BOOL _auditHistoryEnabled;

}

@property (nonatomic,readonly) unsigned long long state;                                         //@synthesize state=_state - In the implementation block
@property (getter=isAborted,nonatomic,readonly) BOOL aborted;                                    //@synthesize aborted=_aborted - In the implementation block
@property (assign,getter=isAuditHistoryEnabled,nonatomic) BOOL auditHistoryEnabled;              //@synthesize auditHistoryEnabled=_auditHistoryEnabled - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,retain,readonly) NSSet * milestones; 
@property (nonatomic,retain,readonly) NSArray * childTransactions; 
@property (getter=hasStarted,nonatomic,readonly) BOOL started; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isFinishedWorking,nonatomic,readonly) BOOL finishedWorking; 
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (getter=isInterruptible,nonatomic,readonly) BOOL interruptible; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed;                                      //@synthesize failed=_failed - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSArray * allErrors; 
@property (nonatomic,copy) id completionBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultTransactionLog;
-(void)interrupt;
-(BOOL)_debugLoggingEnabled;
-(id)_descriptionProem;
-(id)_debugLogCategories;
-(void)_removeParentTransaction:(id)arg1 ;
-(void)_enumerateChildTransactionsWithBlock:(/*^block*/id)arg1 ;
-(void)addChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2 ;
-(BOOL)_inFinishedWorkingState;
-(BOOL)_hasChildTransaction:(id)arg1 ;
-(void)_addChildTransactionRelationship:(id)arg1 ;
-(void)_removeChildTransactionRelationship:(id)arg1 ;
-(id)_childRelationshipForTransaction:(id)arg1 ;
-(NSArray *)childTransactions;
-(NSArray *)allErrors;
-(BOOL)_areSerialParentTransactionsFinishedWorking;
-(void)_willBegin;
-(void)_beginIfPossible;
-(void)_enumerateChildTransactionsWithSchedulingPolicy:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_didBegin;
-(void)_preventTransactionCompletionForReason:(id)arg1 ignoringAuditHistory:(BOOL)arg2 andExecuteBlock:(/*^block*/id)arg3 ;
-(BOOL)_isRootTransaction;
-(BOOL)_isDoingWork;
-(void)interruptWithReason:(id)arg1 ;
-(void)_interruptWithReason:(id)arg1 force:(BOOL)arg2 ;
-(id)_createErrorWithCode:(long long)arg1 reason:(id)arg2 description:(id)arg3 precipitatingError:(id)arg4 ;
-(void)addMilestones:(id)arg1 ;
-(BOOL)isFinishedWorking;
-(id)_stringForMilestones:(id)arg1 ;
-(BOOL)removeMilestones:(id)arg1 ;
-(BOOL)_removeMilestones:(id)arg1 ignoringAuditHistory:(BOOL)arg2 ;
-(void)_didSatisfyMilestone:(id)arg1 ;
-(id)_descriptionForDebugging:(BOOL)arg1 indentLevel:(unsigned long long)arg2 ;
-(void)_checkAndReportIfCompleted;
-(void)_failWithReason:(id)arg1 description:(id)arg2 precipitatingError:(id)arg3 ;
-(void)_childTransactionDidFinishWork:(id)arg1 ;
-(id)_descriptionForDebugging:(BOOL)arg1 indentLevel:(unsigned long long)arg2 visited:(id)arg3 ;
-(BOOL)_hasParentTransaction:(id)arg1 ;
-(id)_parentRelationshipForTransaction:(id)arg1 ;
-(void)_enumerateParentTransactionRelationshipsWithBlock:(/*^block*/id)arg1 ;
-(void)setAuditHistoryEnabled:(BOOL)arg1 ;
-(void)_addParentTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2 ;
-(void)_didAddChildTransaction:(id)arg1 ;
-(void)_willRemoveChildTransaction:(id)arg1 ;
-(void)_enumerateChildTransactionRelationshipsWithBlock:(/*^block*/id)arg1 ;
-(void)_terminateNow;
-(void)_abortForError:(id)arg1 ;
-(void)_noteCompleted;
-(void)_didFinishWork;
-(void)_notifyObserversOfFinishedWork;
-(void)_noteChildTransactionFinishedWork:(id)arg1 ;
-(void)_enumerateParentTransactionsWithSchedulingPolicy:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_notifyObserversOfCompletion;
-(void)_noteChildTransactionCompleted:(id)arg1 ;
-(void)_enumerateParentTransactionsWithBlock:(/*^block*/id)arg1 ;
-(void)removeAllMilestones;
-(BOOL)_areConcurrentChildTransactionsFinishedWorking;
-(BOOL)_areChildTransactionsComplete;
-(void)_noteFinishedWork;
-(BOOL)_shouldComplete;
-(BOOL)_areConcurrentParentTransactionsDoingWork;
-(BOOL)_evaluateParentTransactionsWithSchedulingPolicy:(unsigned long long)arg1 evaluator:(/*^block*/id)arg2 ;
-(void)_addLifeAssertion:(id)arg1 ignoringAuditHistory:(BOOL)arg2 ;
-(void)_removeLifeAssertion:(id)arg1 ignoringAuditHistory:(BOOL)arg2 ;
-(void)_initializeAuditHistoryIfNecessary;
-(NSSet *)milestones;
-(BOOL)hasChildTransactionsOfClass:(Class)arg1 ;
-(id)childTransactionsOfClass:(Class)arg1 ;
-(void)removeAllChildTransactionsOfClass:(Class)arg1 ;
-(void)removeChildTransaction:(id)arg1 ;
-(void)removeAllChildTransactions;
-(void)registerBlockObserver:(/*^block*/id)arg1 ;
-(BOOL)isInterruptable;
-(void)failWithReason:(id)arg1 ;
-(void)listenForSatisfiedMilestone:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_revertWithReason:(id)arg1 ;
-(id)auditHistory;
-(void)_evaluateCompletion;
-(void)_forceInterrupt;
-(id)_stringForInterruptReason:(id)arg1 ;
-(void)_removeDebugLogCategory:(id)arg1 ;
-(id)_loggingProem;
-(BOOL)isAborted;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned long long)state;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isInterruptible;
-(BOOL)isRunning;
-(unsigned long long)_state;
-(void)begin;
-(void)_setState:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_failWithError:(id)arg1 ;
-(NSError *)error;
-(BOOL)isComplete;
-(BOOL)hasStarted;
-(void)_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)addChildTransaction:(id)arg1 ;
-(void)_willAddChildTransaction:(id)arg1 ;
-(void)_didRemoveChildTransaction:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(BOOL)isAuditHistoryEnabled;
-(void)_addAuditHistoryItem:(id)arg1 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_addDebugLogCategory:(id)arg1 ;
-(void)addMilestone:(id)arg1 ;
-(void)_begin;
-(void)satisfyMilestone:(id)arg1 ;
-(BOOL)isWaitingForMilestone:(id)arg1 ;
-(BOOL)removeMilestone:(id)arg1 ;
-(void)_failWithReason:(id)arg1 description:(id)arg2 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)evaluateMilestone:(id)arg1 withEvaluator:(/*^block*/id)arg2 ;
-(void)_failForTimeoutWithDescription:(id)arg1 ;
-(void)_willComplete;
-(double)watchdogTimeout;
-(BOOL)shouldWatchdog:(id*)arg1 ;
-(BOOL)isInterrupted;
-(BOOL)isFailed;
@end

