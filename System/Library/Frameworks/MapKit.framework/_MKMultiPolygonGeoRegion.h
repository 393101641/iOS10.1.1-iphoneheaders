/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKGeoJSONCoverageRegion.h>

@class NSArray, NSString;

@interface _MKMultiPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {

	NSArray* _polygons;

}

@property (nonatomic,retain) NSArray * polygons;                    //@synthesize polygons=_polygons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)polygons;
-(void)setPolygons:(NSArray *)arg1 ;
-(id)initWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)coordinateLiesInRegion:(CLLocationCoordinate2D)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadWithRootJSONObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadWithJSONObject:(id)arg1 error:(id*)arg2 ;
@end

