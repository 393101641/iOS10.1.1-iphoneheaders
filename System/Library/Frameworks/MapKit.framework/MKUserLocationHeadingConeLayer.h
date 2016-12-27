/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/MKUserLocationHeadingIndicator.h>

@class MKUserLocationView, CALayer, NSString;

@interface MKUserLocationHeadingConeLayer : CALayer <MKUserLocationHeadingIndicator> {

	MKUserLocationView* _userLocationView;
	CALayer* _maskLayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(id)_headingImage:(CGPoint*)arg1 ;
-(void)_updateHeadingImage;
-(void)updateHeading:(double)arg1 ;
-(void)updateTintColor:(id)arg1 ;
-(id)initWithUserLocationView:(id)arg1 ;
@end
