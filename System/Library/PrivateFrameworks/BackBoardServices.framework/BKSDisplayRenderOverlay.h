/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDescribing.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDismissAction.h>

@class BKSDisplayRenderOverlayDescriptor, NSString, CADisplay, BKSDisplayProgressIndicatorProperties;

@interface BKSDisplayRenderOverlay : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDescribing, BKSDisplayRenderOverlayDismissAction> {

	BKSDisplayRenderOverlayDescriptor* _descriptor;

}

@property (getter=_descriptor,nonatomic,retain,readonly) BKSDisplayRenderOverlayDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) CADisplay * display; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) BOOL lockBacklight; 
@property (nonatomic,readonly) BKSDisplayProgressIndicatorProperties * progressIndicatorProperties; 
@property (getter=isInterstitial,nonatomic,readonly) BOOL interstitial; 
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
+(id)existingOverlayForDisplay:(id)arg1 ;
+(id)dismissActions;
-(void)dismissWithAnimation:(id)arg1 ;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;
-(id)_descriptor;
-(BOOL)isInterstitial;
-(BOOL)lockBacklight;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(void)dealloc;
-(NSString *)description;
-(long long)interfaceOrientation;
-(NSString *)name;
-(CADisplay *)display;
-(void)dismiss;
-(void)present;
-(id)initWithDescriptor:(id)arg1 ;
-(void)freeze;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

