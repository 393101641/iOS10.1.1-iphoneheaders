/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISBiometricPurchaseDelegate.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSNumber, NSString, SSAuthenticationContext, NSData, SSVFairPlaySubscriptionController, NSDictionary, ISURLRequestPerformance, SSURLRequestProperties, PurchaseResponseInfo, ISBiometricAuthenticationContext, SSURLConnectionResponse;

@interface PurchaseOperation : ISOperation <ISBiometricPurchaseDelegate, ISStoreURLOperationDelegate> {

	NSNumber* _accountID;
	NSString* _affiliateIdentifier;
	BOOL _allowsBootstrapCellularData;
	SSAuthenticationContext* _authenticationContext;
	long long _bagType;
	NSString* _buyParameters;
	NSData* _clientAuditTokenData;
	NSString* _clientIdentifierHeader;
	BOOL _didAuthenticate;
	BOOL _displayedErrorDialog;
	BOOL _displaysOnLockScreen;
	NSString* _downloadKind;
	SSVFairPlaySubscriptionController* _fairPlaySubscriptionController;
	BOOL _ignoresForcedPasswordRestriction;
	BOOL _isBackgroundPurchase;
	BOOL _isPlaybackRequest;
	NSString* _mToken;
	NSNumber* _originalProductOwnerAccountDSID;
	BOOL _preauthenticated;
	NSDictionary* _rawOutput;
	ISURLRequestPerformance* _requestPerformanceMetrics;
	SSURLRequestProperties* _requestProperties;
	BOOL _requiresAuthentication;
	BOOL _requiresSerialNumber;
	PurchaseResponseInfo* _responseInfo;
	BOOL _shouldSendKeyBagSyncData;
	BOOL _skipsConfirmationDialogs;
	BOOL _suppressDialogs;
	ISBiometricAuthenticationContext* _biometricAuthenticationContext;
	NSString* _urlBagKey;
	SSURLConnectionResponse* _urlResponse;
	BOOL _moveToiOS;
	NSString* _storeCorrelationID;

}

@property (assign) BOOL displayedErrorDialog;                                          //@synthesize displayedErrorDialog=_displayedErrorDialog - In the implementation block
@property (retain) NSDictionary * rawOutput;                                           //@synthesize rawOutput=_rawOutput - In the implementation block
@property (copy) NSString * affiliateIdentifier; 
@property (assign) BOOL allowsBootstrapCellularData;                                   //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) long long bagType;                                                  //@synthesize bagType=_bagType - In the implementation block
@property (retain) NSString * buyParameters;                                           //@synthesize buyParameters=_buyParameters - In the implementation block
@property (retain) NSData * clientAuditTokenData;                                      //@synthesize clientAuditTokenData=_clientAuditTokenData - In the implementation block
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSNumber * originalProductOwnerAccountDSID; 
@property (getter=isBackgroundPurchase) BOOL backgroundPurchase; 
@property (getter=isPlaybackRequest) BOOL playbackRequest; 
@property (getter=isMoveToiOS,readonly) BOOL moveToiOS;                                //@synthesize moveToiOS=_moveToiOS - In the implementation block
@property (getter=isPreauthenticated) BOOL preauthenticated;                           //@synthesize preauthenticated=_preauthenticated - In the implementation block
@property (assign) BOOL requiresAuthentication;                                        //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (assign) BOOL requiresSerialNumber;                                          //@synthesize requiresSerialNumber=_requiresSerialNumber - In the implementation block
@property (assign) BOOL shouldSendKeyBagSyncData;                                      //@synthesize shouldSendKeyBagSyncData=_shouldSendKeyBagSyncData - In the implementation block
@property (assign) BOOL skipsConfirmationDialogs;                                      //@synthesize skipsConfirmationDialogs=_skipsConfirmationDialogs - In the implementation block
@property (nonatomic,copy) NSString * storeCorrelationID;                              //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
@property (copy) NSString * urlBagKey; 
@property (readonly) ISURLRequestPerformance * requestPerformanceMetrics; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reportAnonymousPings:(id)arg1 ;
-(void)_setMoveToiOS;
-(void)_runPurchaseRequest;
-(void)_runDialogOperationForDialog:(id)arg1 ;
-(void)_addFairPlayToRequestProperties:(id)arg1 withAccountIdentifier:(unsigned long long)arg2 ;
-(id)_tokenTypeForTokenString:(id)arg1 ;
-(BOOL)_shouldSendKeyBagSyncData;
-(BOOL)_shouldSendSBSyncData;
-(void)_setChangedBuyParameters:(id)arg1 fromDataProvider:(id)arg2 ;
-(void)_continueTouchIDSessionWithDialog:(id)arg1 ;
-(void)setDisplayedErrorDialog:(BOOL)arg1 ;
-(void)_performMachineDataActionForURLResponse:(id)arg1 ;
-(BOOL)_shouldUseClientAuthentication;
-(id)_newRequestParameters;
-(BOOL)isMoveToiOS;
-(BOOL)requiresSerialNumber;
-(BOOL)skipsConfirmationDialogs;
-(id)_newPurchaseRequestOperation;
-(void)_handleFailureForOperation:(id)arg1 ;
-(void)_performDelayedGotoForOperation:(id)arg1 ;
-(void)_setAuthTokenWithDictionary:(id)arg1 shouldSave:(BOOL)arg2 ;
-(void)setRawOutput:(NSDictionary *)arg1 ;
-(BOOL)shouldSendKeyBagSyncData;
-(NSNumber *)originalProductOwnerAccountDSID;
-(ISURLRequestPerformance *)requestPerformanceMetrics;
-(void)setOriginalProductOwnerAccountDSID:(NSNumber *)arg1 ;
-(BOOL)displayedErrorDialog;
-(NSDictionary *)rawOutput;
-(void)setRequiresSerialNumber:(BOOL)arg1 ;
-(void)setShouldSendKeyBagSyncData:(BOOL)arg1 ;
-(void)setSkipsConfirmationDialogs:(BOOL)arg1 ;
-(void)setPlaybackRequest:(BOOL)arg1 ;
-(BOOL)isPlaybackRequest;
-(BOOL)isBackgroundPurchase;
-(BOOL)isPreauthenticated;
-(void)setPreauthenticated:(BOOL)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(NSData *)clientAuditTokenData;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(NSString *)storeCorrelationID;
-(long long)bagType;
-(id)_account;
-(id)_accountWithUniqueIdentifier:(id)arg1 ;
-(id)_URLBagContext;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(id)init;
-(void)run;
-(void)operation:(id)arg1 willSendChallenge:(id)arg2 andSignature:(id)arg3 ;
-(void)operation:(id)arg1 shouldContinueTouchIDSession:(BOOL)arg2 ;
-(BOOL)requiresAuthentication;
-(id)_fairPlaySubscriptionController;
-(void)setBackgroundPurchase:(BOOL)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(NSString *)urlBagKey;
-(id)authenticatedAccountDSID;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(void)setUrlBagKey:(NSString *)arg1 ;
-(void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2 ;
-(id)initWithPurchase:(id)arg1 ;
-(void)setBagType:(long long)arg1 ;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(NSString *)affiliateIdentifier;
-(SSURLConnectionResponse *)URLResponse;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(id)uniqueKey;
@end

