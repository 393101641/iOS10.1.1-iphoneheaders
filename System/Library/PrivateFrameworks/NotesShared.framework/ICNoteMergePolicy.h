/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMergePolicy.h>

@interface ICNoteMergePolicy : NSMergePolicy
+(id)sharedPolicy;
-(BOOL)resolveConstraintConflicts:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithMergeType:(unsigned long long)arg1 ;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
-(void)mergeEncryptedData:(id)arg1 forNote:(id)arg2 mergeConflict:(id)arg3 ;
@end

