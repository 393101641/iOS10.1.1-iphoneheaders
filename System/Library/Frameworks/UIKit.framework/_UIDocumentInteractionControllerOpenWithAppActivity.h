/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class LSApplicationProxy, NSString, UIDocumentInteractionController;

@interface _UIDocumentInteractionControllerOpenWithAppActivity : UIActivity {

	LSApplicationProxy* _appProxy;
	BOOL _appIsOwner;
	NSString* _activityType;
	UIDocumentInteractionController* _documentInteractionController;

}

@property (assign,nonatomic,__weak) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (nonatomic,readonly) LSApplicationProxy * appProxy;                                                     //@synthesize appProxy=_appProxy - In the implementation block
+(long long)activityCategory;
-(id)activityType;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(BOOL)_shouldOpenInPlace;
-(id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2 appIsOwner:(BOOL)arg3 ;
-(LSApplicationProxy *)appProxy;
@end

