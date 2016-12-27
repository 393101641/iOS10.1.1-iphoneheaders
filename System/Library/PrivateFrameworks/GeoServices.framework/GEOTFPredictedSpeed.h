/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {

	unsigned _deltaMinutesInFuture;
	unsigned _speed;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasDeltaMinutesInFuture; 
@property (assign,nonatomic) unsigned deltaMinutesInFuture;              //@synthesize deltaMinutesInFuture=_deltaMinutesInFuture - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) unsigned speed;                             //@synthesize speed=_speed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setSpeed:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)speed;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)setDeltaMinutesInFuture:(unsigned)arg1 ;
-(void)setHasDeltaMinutesInFuture:(BOOL)arg1 ;
-(BOOL)hasDeltaMinutesInFuture;
-(unsigned)deltaMinutesInFuture;
@end
