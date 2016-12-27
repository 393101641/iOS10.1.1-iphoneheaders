/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFCharacteristicOperationContextProviding;
@class NSMutableSet, NSMutableDictionary, NSSet;

@interface HFCharacteristicValueBatchReadResponse : NSObject <NSCopying> {

	NSMutableSet* _allCharacteristics;
	NSMutableSet* _allCharacteristicTypes;
	id<HFCharacteristicOperationContextProviding> _contextProvider;
	NSMutableDictionary* _valuesByCharacteristicType;
	NSMutableDictionary* _errorsByCharacteristicType;

}

@property (nonatomic,readonly) NSMutableDictionary * valuesByCharacteristicType;                         //@synthesize valuesByCharacteristicType=_valuesByCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * errorsByCharacteristicType;                         //@synthesize errorsByCharacteristicType=_errorsByCharacteristicType - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicOperationContextProviding> contextProvider;              //@synthesize contextProvider=_contextProvider - In the implementation block
@property (nonatomic,readonly) NSSet * allCharacteristics;                                               //@synthesize allCharacteristics=_allCharacteristics - In the implementation block
@property (nonatomic,readonly) NSSet * allCharacteristicTypes;                                           //@synthesize allCharacteristicTypes=_allCharacteristicTypes - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForCharacteristicType:(id)arg1 outCharacteristic:(out id*)arg2 ;
-(id)valueForCharacteristicType:(id)arg1 ;
-(NSSet *)allCharacteristics;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(void)setContextProvider:(id<HFCharacteristicOperationContextProviding>)arg1 ;
-(void)addCharacteristic:(id)arg1 ;
-(void)addValue:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)addError:(id)arg1 forCharacteristic:(id)arg2 ;
-(NSSet *)allCharacteristicTypes;
-(id)errorForCharacteristicType:(id)arg1 ;
-(BOOL)didReadValueForCharacteristicType:(id)arg1 ;
-(NSMutableDictionary *)valuesByCharacteristicType;
-(NSMutableDictionary *)errorsByCharacteristicType;
-(BOOL)hasAnyErrors;
-(BOOL)hasErrorForEveryCharacteristic;
@end
