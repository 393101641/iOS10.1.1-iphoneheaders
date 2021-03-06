/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingRuleEntry.h>

@class NSNumber;

@interface PLAccountingDistributionRuleEntry : PLAccountingRuleEntry

@property (nonatomic,readonly) NSNumber * nodeID; 
@property (nonatomic,readonly) NSNumber * rootNodeID; 
@property (nonatomic,readonly) NSNumber * distributionID; 
+(void)load;
+(id)entryKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)nodeID;
-(NSNumber *)distributionID;
-(NSNumber *)rootNodeID;
-(id)initWithNodeID:(id)arg1 withRootNodeID:(id)arg2 withDistributionID:(id)arg3 withEntryDate:(id)arg4 ;
@end

