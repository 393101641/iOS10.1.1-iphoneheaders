/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogHelperdOperators/PowerlogHelperdOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLSemaphore, PLXPCListenerOperatorComposition;

@interface PLSleepWakeAgent : PLAgent {

	unsigned _rootDomainConnect;
	unsigned _pmNotifier;
	IONotificationPortRef _systemPowerPortRef;
	PLSemaphore* _canSleepSemaphore;
	double _apSOCBasePower;
	PLXPCListenerOperatorComposition* _wakeGestureXPCListener;

}

@property (assign) unsigned rootDomainConnect;                                             //@synthesize rootDomainConnect=_rootDomainConnect - In the implementation block
@property (assign) unsigned pmNotifier;                                                    //@synthesize pmNotifier=_pmNotifier - In the implementation block
@property (assign) IONotificationPortRef systemPowerPortRef;                               //@synthesize systemPowerPortRef=_systemPowerPortRef - In the implementation block
@property (retain) PLSemaphore * canSleepSemaphore;                                        //@synthesize canSleepSemaphore=_canSleepSemaphore - In the implementation block
@property (assign) double apSOCBasePower;                                                  //@synthesize apSOCBasePower=_apSOCBasePower - In the implementation block
@property (retain) PLXPCListenerOperatorComposition * wakeGestureXPCListener;              //@synthesize wakeGestureXPCListener=_wakeGestureXPCListener - In the implementation block
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)railDefinitions;
+(id)entryEventPointDefinitionWakeGesture;
+(id)entryEventPointDefinitionCurrentMachWakeTime;
+(id)entryEventForwardDefinitionPowerState;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)setApSOCBasePower:(double)arg1 ;
-(double)apSOCBasePower;
-(void)systemPoweredOn;
-(void)logEventPointWakeGesture:(id)arg1 ;
-(void)setWakeGestureXPCListener:(PLXPCListenerOperatorComposition *)arg1 ;
-(id)wakeReasons;
-(id)wakeReasonsAsNSString;
-(unsigned)rootDomainConnect;
-(void)setRootDomainConnect:(unsigned)arg1 ;
-(unsigned)pmNotifier;
-(void)setPmNotifier:(unsigned)arg1 ;
-(IONotificationPortRef)systemPowerPortRef;
-(void)setSystemPowerPortRef:(IONotificationPortRef)arg1 ;
-(PLSemaphore *)canSleepSemaphore;
-(void)setCanSleepSemaphore:(PLSemaphore *)arg1 ;
-(PLXPCListenerOperatorComposition *)wakeGestureXPCListener;
@end

