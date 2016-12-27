/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSAppDocumentControllerDelegate.h>
#import <libobjc.A.dylib/VSApplicationDelegate.h>

@protocol VSApplicationControllerDelegate;
@class VSIdentityProvider, NSOperationQueue, VSApplication, VSApplicationControllerRequest, VSJSSAMLRequest, VSApplicationControllerResponseHandler, VSAppDocumentController, JSValue, VSPreferences, NSString;

@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate> {

	BOOL _allowUI;
	id<VSApplicationControllerDelegate> _delegate;
	VSIdentityProvider* _identityProvider;
	NSOperationQueue* _privateQueue;
	VSApplication* _application;
	VSApplicationControllerRequest* _request;
	VSJSSAMLRequest* _javascriptRequest;
	VSApplicationControllerResponseHandler* _responseHandler;
	VSAppDocumentController* _appDocumentController;
	JSValue* _applicationReadyCallback;
	VSPreferences* _preferences;

}

@property (nonatomic,retain) VSIdentityProvider * identityProvider;                                 //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                       //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSApplication * application;                                           //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) VSApplicationControllerRequest * request;                              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) VSJSSAMLRequest * javascriptRequest;                                   //@synthesize javascriptRequest=_javascriptRequest - In the implementation block
@property (nonatomic,retain) VSApplicationControllerResponseHandler * responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) VSAppDocumentController * appDocumentController;                       //@synthesize appDocumentController=_appDocumentController - In the implementation block
@property (nonatomic,retain) JSValue * applicationReadyCallback;                                    //@synthesize applicationReadyCallback=_applicationReadyCallback - In the implementation block
@property (assign,nonatomic) BOOL allowUI;                                                          //@synthesize allowUI=_allowUI - In the implementation block
@property (nonatomic,retain) VSPreferences * preferences;                                           //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic,__weak) id<VSApplicationControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)setDelegate:(id<VSApplicationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<VSApplicationControllerDelegate>)delegate;
-(VSApplicationControllerRequest *)request;
-(void)stop;
-(void)start;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(VSPreferences *)preferences;
-(VSApplication *)application;
-(void)setApplication:(VSApplication *)arg1 ;
-(void)setRequest:(VSApplicationControllerRequest *)arg1 ;
-(VSApplicationControllerResponseHandler *)responseHandler;
-(void)setResponseHandler:(VSApplicationControllerResponseHandler *)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(id)initWithIdentityProvider:(id)arg1 ;
-(void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2 ;
-(void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2 ;
-(void)_stopApp;
-(void)_startApp;
-(id)_javascriptShowUserInterfacePurposeForAuthenticationUserInterfacePurpose:(long long)arg1 ;
-(void)setAllowUI:(BOOL)arg1 ;
-(void)_submitJavascriptRequest:(id)arg1 ;
-(void)_completeRequestWithResult:(id)arg1 ;
-(void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_presentDocument:(id)arg1 ;
-(JSValue *)applicationReadyCallback;
-(void)_applicationReadyWithSuccess:(BOOL)arg1 javascriptError:(id)arg2 ;
-(void)setApplicationReadyCallback:(JSValue *)arg1 ;
-(void)_notifyStartDidFailWithError:(id)arg1 ;
-(void)_notifyDidStop;
-(id)_applicationLaunchParams;
-(VSAppDocumentController *)appDocumentController;
-(BOOL)allowUI;
-(void)setAppDocumentController:(VSAppDocumentController *)arg1 ;
-(void)_notifyDidReceiveViewModel:(id)arg1 ;
-(void)_notifyDidReceiveViewModelError:(id)arg1 ;
-(void)setJavascriptRequest:(VSJSSAMLRequest *)arg1 ;
-(VSJSSAMLRequest *)javascriptRequest;
-(void)_completeRequestWithJavascriptResponse:(id)arg1 javascriptError:(id)arg2 ;
-(id)_errorForJavascriptError:(id)arg1 ;
-(void)_notifyDidStart;
-(void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)_bootURL;
-(id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2 ;
-(id)_makeJavaScriptRequest;
-(void)applicationDidStart:(id)arg1 ;
-(void)application:(id)arg1 startDidFailWithError:(id)arg2 ;
-(void)applicationDidStop:(id)arg1 ;
-(void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2 ;
-(id)launchParamsForApplication:(id)arg1 ;
-(id)activeAppDocumentForApplication:(id)arg1 ;
-(void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1 purpose:(long long)arg2 ;
-(void)submitRequest:(id)arg1 ;
-(void)_cleanUpStoppedApp;
@end
