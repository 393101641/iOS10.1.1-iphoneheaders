/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKNavigationController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPaymentSetupDelegate;
@class PKPaymentProvisioningController, NSString;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate> {

	long long _context;
	BOOL _showsWelcomeViewController;
	BOOL _allowsManualEntry;
	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupDelegate> _setupDelegate;
	long long _paymentSetupMode;

}

@property (nonatomic,retain,readonly) PKPaymentProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupDelegate> setupDelegate;                                       //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsWelcomeViewController;                                                //@synthesize showsWelcomeViewController=_showsWelcomeViewController - In the implementation block
@property (assign,nonatomic) BOOL allowsManualEntry;                                                         //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (assign,nonatomic) long long paymentSetupMode;                                                     //@synthesize paymentSetupMode=_paymentSetupMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForPresentingPaymentError:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)cancel:(id)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewController:(id)arg1 didShowProvisioningError:(id)arg2 ;
-(void)viewControllerDidShowEligibilityIssue:(id)arg1 ;
-(id<PKPaymentSetupDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupDelegate>)arg1 ;
-(void)setShowsWelcomeViewController:(BOOL)arg1 ;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(void)setPaymentSetupMode:(long long)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 ;
-(BOOL)allowsManualEntry;
-(long long)paymentSetupMode;
-(void)_handleAssociatedCredentialsDidChangeNotification:(id)arg1 ;
-(void)_reconfigureRootViewController;
-(BOOL)showsWelcomeViewController;
@end

