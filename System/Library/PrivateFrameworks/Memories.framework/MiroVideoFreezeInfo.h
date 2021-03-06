/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@class NSArray;

@interface MiroVideoFreezeInfo : MiroFreezeInfo {

	NSArray* _ranges;

}

@property (nonatomic,retain) NSArray * ranges;              //@synthesize ranges=_ranges - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)token;
-(void)setRanges:(NSArray *)arg1 ;
-(NSArray *)ranges;
-(id)dataRepresentation;
-(BOOL)isFreeze;
-(BOOL)isAdded;
-(BOOL)isRemoved;
@end

