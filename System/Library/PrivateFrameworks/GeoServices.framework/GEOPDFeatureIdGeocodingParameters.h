/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _featureId;
	GEOLatLng* _location;
	SCD_Struct_GE15 _has;

}

@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId;                   //@synthesize featureId=_featureId - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                           //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(BOOL)hasLocation;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)featureId;
@end

