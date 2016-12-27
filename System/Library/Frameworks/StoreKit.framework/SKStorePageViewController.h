/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol SKUIServiceStorePageViewController;
@class _UIAsyncInvocation, SKStoreProductViewController, SKRemoteStorePageViewController, SKInvocationQueueProxy, NSString;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {

	_UIAsyncInvocation* _cancelRequest;
	/*^block*/id _loadBlock;
	SKStoreProductViewController* _productPageViewController;
	SKRemoteStorePageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceStorePageViewController> _serviceProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)_didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_prepareToLoadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_dismissProductPageViewController;
-(void)_didLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)loadPageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadPageWithURLBagKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_showProductPageWithItemIdentifier:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end
