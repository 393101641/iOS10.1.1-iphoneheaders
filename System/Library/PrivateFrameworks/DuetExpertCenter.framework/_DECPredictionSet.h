/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
@class NSMutableDictionary, NSArray;

@interface _DECPredictionSet : NSObject {

	NSMutableDictionary* _predictionSet;

}

@property (getter=allValues,nonatomic,readonly) NSArray * allValues; 
+(id)createFromResult:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)objectForKeyedSubscript:(NSString*)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(NSString*)arg2 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(NSString*)arg1 ;
-(NSArray *)allValues;
@end
