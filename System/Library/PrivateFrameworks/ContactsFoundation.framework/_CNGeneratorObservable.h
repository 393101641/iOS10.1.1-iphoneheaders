/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNScheduler;
@class CNCancelationToken;

@interface _CNGeneratorObservable : CNObservable {

	id _state;
	/*^block*/id _condition;
	/*^block*/id _nextState;
	/*^block*/id _resultSelector;
	/*^block*/id _delay;
	id<CNScheduler> _scheduler;
	CNCancelationToken* _cancelable;

}
-(BOOL)isFinished;
-(void)updateState;
-(void)scheduleNextResultForObserver:(id)arg1 ;
-(void)sendCurrentStateToObserver:(id)arg1 ;
-(id)initWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
-(id)subscribe:(id)arg1 ;
@end

