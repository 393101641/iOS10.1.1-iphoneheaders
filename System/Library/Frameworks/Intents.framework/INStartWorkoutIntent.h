/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartWorkoutIntentExport.h>

@class INSpeakableString, NSNumber, NSString;

@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * workoutName; 
@property (nonatomic,copy,readonly) NSNumber * goalValue; 
@property (nonatomic,readonly) long long workoutGoalUnitType; 
@property (nonatomic,readonly) long long workoutLocationType; 
@property (nonatomic,copy,readonly) NSNumber * isOpenEnded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)goalValue;
-(void)setGoalValue:(NSNumber *)arg1 ;
-(long long)workoutGoalUnitType;
-(void)setWorkoutGoalUnitType:(long long)arg1 ;
-(long long)workoutLocationType;
-(void)setWorkoutLocationType:(long long)arg1 ;
-(id)_metadata;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(void)setWorkoutName:(INSpeakableString *)arg1 ;
-(INSpeakableString *)workoutName;
-(void)setIsOpenEnded:(NSNumber *)arg1 ;
-(NSNumber *)isOpenEnded;
-(id)initWithWorkoutName:(id)arg1 goalValue:(id)arg2 workoutGoalUnitType:(long long)arg3 workoutLocationType:(long long)arg4 isOpenEnded:(id)arg5 ;
@end
