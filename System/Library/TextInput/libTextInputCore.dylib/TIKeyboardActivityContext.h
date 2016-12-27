/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIKeyboardActivityContext : NSObject {

	unsigned long long _fromState;
	unsigned long long _toState;
	unsigned long long _excessMemoryInBytes;

}

@property (assign,nonatomic) unsigned long long fromState;                        //@synthesize fromState=_fromState - In the implementation block
@property (assign,nonatomic) unsigned long long toState;                          //@synthesize toState=_toState - In the implementation block
@property (assign,nonatomic) unsigned long long excessMemoryInBytes;              //@synthesize excessMemoryInBytes=_excessMemoryInBytes - In the implementation block
+(id)contextFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)setToState:(unsigned long long)arg1 ;
-(void)setFromState:(unsigned long long)arg1 ;
-(unsigned long long)fromState;
-(unsigned long long)toState;
-(unsigned long long)excessMemoryInBytes;
-(void)setExcessMemoryInBytes:(unsigned long long)arg1 ;
@end
