/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>

@class SKUIDeveloperInfo, SKUIDeveloperInfoView, UIScrollView;

@interface SKUIDeveloperInfoViewController : SKUIViewController {

	SKUIDeveloperInfo* _developerInfo;
	SKUIDeveloperInfoView* _infoView;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;              //@synthesize developerInfo=_developerInfo - In the implementation block
-(void)loadView;
-(SKUIDeveloperInfo *)developerInfo;
-(id)initWithDeveloperInfo:(id)arg1 ;
@end

