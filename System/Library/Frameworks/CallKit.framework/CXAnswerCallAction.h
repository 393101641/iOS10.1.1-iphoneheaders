/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXAnswerCallAction : CXCallAction {

	NSDate* _dateConnected;
	CGSize _localLandscapeAspectRatio;
	CGSize _localPortraitAspectRatio;

}

@property (nonatomic,copy) NSDate * dateConnected;                          //@synthesize dateConnected=_dateConnected - In the implementation block
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;              //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;               //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
+(BOOL)supportsSecureCoding;
+(double)timeout;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)customDescription;
-(CGSize)localLandscapeAspectRatio;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(NSDate *)dateConnected;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(CGSize)localPortraitAspectRatio;
-(void)fulfillWithDateConnected:(id)arg1 ;
-(void)updateAsFulfilledWithDateConnected:(id)arg1 ;
-(void)setDateConnected:(NSDate *)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)fulfill;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
@end
