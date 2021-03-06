/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDRestaurantReservationLink, NSMapTable, NSArray;

@interface GEORestaurantFeaturesLink : NSObject {

	GEOPDRestaurantReservationLink* _restaurantReservationLink;
	NSMapTable* _attributionMap;

}

@property (nonatomic,retain) GEOPDRestaurantReservationLink * restaurantReservationLink;              //@synthesize restaurantReservationLink=_restaurantReservationLink - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatures; 
@property (nonatomic,readonly) NSArray * featureProviders; 
@property (nonatomic,readonly) NSArray * featureTypes; 
-(void)dealloc;
-(id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2 ;
-(BOOL)hasFeatures;
-(NSArray *)featureProviders;
-(id)applicationsForVendorID:(id)arg1 ;
-(id)displayNameForVendorID:(id)arg1 ;
-(unsigned long long)extensionModeForVendorID:(id)arg1 ;
-(NSArray *)featureTypes;
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
@end

