/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <ASMessagesProvider/ASChildPurchasedViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIViewControllerTesting.h>
#import <UIKit/UIViewControllerRestoration.h>

@class UIImageView, SSFamilyMember, ASBaseIPadPurchasedViewController, ASBaseIPhonePurchasedViewController, ASPurchasedPage, NSString;

@interface ASBasePurchasedViewController : SKUIViewController <ASChildPurchasedViewControllerDelegate, SKUIViewControllerTesting, UIViewControllerRestoration> {

	UIImageView* _animationImageView;
	long long _deviceType;
	SSFamilyMember* _familyMember;
	BOOL _hidesInstalledApps;
	ASBaseIPadPurchasedViewController* _iPadViewController;
	ASBaseIPhonePurchasedViewController* _iPhoneViewController;
	ASPurchasedPage* _page;
	NSString* _searchTerm;

}

@property (nonatomic,retain) SSFamilyMember * familyMember;              //@synthesize familyMember=_familyMember - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(long long)_sizeClassForSize:(CGSize)arg1 ;
-(id)_newIPhoneViewController;
-(BOOL)_isSignInRequired;
-(void)_reloadDataAndCheckForUpdates;
-(id)_newIPadViewController;
-(id)_createPurchasedPage;
-(void)_familyCircleDidChange:(id)arg1 ;
-(void)setFamilyMember:(SSFamilyMember *)arg1 ;
-(SSFamilyMember *)familyMember;
-(void)childPurchasedViewController:(id)arg1 didChangeSearchTerm:(id)arg2 ;
-(void)childPurchasedViewControllerWantsAuthenticate:(id)arg1 ;
-(void)childPurchasedViewController:(id)arg1 didChangeHidesInstalledApps:(BOOL)arg2 ;
-(void)_databaseStateChangedNotification:(id)arg1 ;
-(id)_additionalPredicatesForPurchaseDB;
-(void)childPurchasedViewController:(id)arg1 didChangeDeviceType:(long long)arg2 ;
-(void)childPurchasedViewController:(id)arg1 didChangeFamilyMember:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_reloadData;
-(void)_reloadView;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_reloadViewControllerWithSize:(CGSize)arg1 ;
@end
