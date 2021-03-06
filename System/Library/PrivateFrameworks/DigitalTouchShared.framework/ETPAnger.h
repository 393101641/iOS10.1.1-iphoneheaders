/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ETPAnger : PBCodable <NSCopying> {

	float _duration;
	float _normalizedCenterX;
	float _normalizedCenterY;
	SCD_Struct_ET17 _has;

}

@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) float duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizedCenterX; 
@property (assign,nonatomic) float normalizedCenterX;                //@synthesize normalizedCenterX=_normalizedCenterX - In the implementation block
@property (assign,nonatomic) BOOL hasNormalizedCenterY; 
@property (assign,nonatomic) float normalizedCenterY;                //@synthesize normalizedCenterY=_normalizedCenterY - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setNormalizedCenterX:(float)arg1 ;
-(void)setHasNormalizedCenterX:(BOOL)arg1 ;
-(BOOL)hasNormalizedCenterX;
-(void)setNormalizedCenterY:(float)arg1 ;
-(void)setHasNormalizedCenterY:(BOOL)arg1 ;
-(BOOL)hasNormalizedCenterY;
-(float)normalizedCenterX;
-(float)normalizedCenterY;
@end

