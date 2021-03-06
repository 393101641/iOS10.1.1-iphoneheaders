/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AUAudioUnitXPCProtocol <_AURemoteParameterSynchronization>
@required
-(void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2;
-(void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2;
-(void)setBusFormat:(unsigned)arg1 scope:(unsigned)arg2 format:(id)arg3 reply:(/*^block*/id)arg4;
-(void)setBusCount:(unsigned long long)arg1 scope:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)initialize:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned long long)arg3 buffer:(id)arg4 bufferSize:(unsigned)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(/*^block*/id)arg8;
-(void)uninitialize:(/*^block*/id)arg1;
-(void)valueForProperty:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setValue:(id)arg1 forProperty:(id)arg2 reply:(/*^block*/id)arg3;
-(void)valueForKey:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setValue:(id)arg1 forKey:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getBusses:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)getParameterTree:(/*^block*/id)arg1;
-(void)getParameter:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)parameterStringFromValue:(float)arg1 currentValue:(BOOL)arg2 address:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)parametersForOverviewWithCount:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)reset;
-(void)open:(/*^block*/id)arg1;
-(void)close:(/*^block*/id)arg1;

@end

