/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying> {

	MPPMediaPredicate* _conditionalPredicate;
	MPPMediaPredicate* _elsePredicate;
	MPPMediaPredicate* _thenPredicate;

}

@property (nonatomic,readonly) BOOL hasConditionalPredicate; 
@property (nonatomic,retain) MPPMediaPredicate * conditionalPredicate;              //@synthesize conditionalPredicate=_conditionalPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasThenPredicate; 
@property (nonatomic,retain) MPPMediaPredicate * thenPredicate;                     //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,readonly) BOOL hasElsePredicate; 
@property (nonatomic,retain) MPPMediaPredicate * elsePredicate;                     //@synthesize elsePredicate=_elsePredicate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(MPPMediaPredicate *)conditionalPredicate;
-(BOOL)hasConditionalPredicate;
-(BOOL)hasThenPredicate;
-(MPPMediaPredicate *)thenPredicate;
-(BOOL)hasElsePredicate;
-(MPPMediaPredicate *)elsePredicate;
-(void)setConditionalPredicate:(MPPMediaPredicate *)arg1 ;
-(void)setThenPredicate:(MPPMediaPredicate *)arg1 ;
-(void)setElsePredicate:(MPPMediaPredicate *)arg1 ;
@end

