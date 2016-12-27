/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSMapTable, PKPaymentPass, PKRemoteDevice, PKPaymentRequest, NSString, CNContact, PKShippingMethod, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPassLibrary, PKPaymentTransaction, PKPaymentApplication, PKRemotePaymentInstrument, NSSet, NSDecimalNumber;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating> {

	NSMutableArray* _items;
	NSMutableDictionary* _typeToItemMap;
	unsigned long long _holdPendingUpdatesCount;
	BOOL _ignoreProximity;
	NSArray* _acceptedPasses;
	NSArray* _unavailablePasses;
	NSMapTable* _instrumentToDeviceMap;
	NSMutableDictionary* _remoteDeviceToAcceptedInstruments;
	NSArray* _allRemoteDevices;
	NSMutableDictionary* _statusForPass;
	BOOL _shippingEditable;
	PKPaymentPass* _pass;
	PKRemoteDevice* _remoteDevice;
	long long _mode;
	PKPaymentRequest* _paymentRequest;
	NSString* _hostAppLocalizedName;
	NSString* _hostApplicationIdentifier;
	CNContact* _shippingEmail;
	CNContact* _shippingPhone;
	CNContact* _shippingName;
	CNContact* _shippingAddress;
	PKShippingMethod* _shippingMethod;
	NSString* _shippingType;
	NSString* _shippingEditableMessage;
	CNContact* _billingAddress;
	PKPaymentOptionsDefaults* _defaults;
	PKPaymentOptionsRecents* _recents;
	PKPassLibrary* _library;
	PKPaymentTransaction* _pendingTransaction;
	/*^block*/id _updateHandler;
	PKPaymentApplication* _paymentApplication;
	PKRemotePaymentInstrument* _remotePaymentInstrument;
	PKRemotePaymentInstrument* _initialRemotePaymentInstrument;
	NSSet* _allAcceptedRemotePaymentInstruments;
	NSSet* _allUnavailableRemotePaymentInstruments;
	CNContact* _cachedRecentAddress;

}

@property (nonatomic,retain) PKPaymentApplication * paymentApplication;                               //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) CNContact * cachedRecentAddress;                                         //@synthesize cachedRecentAddress=_cachedRecentAddress - In the implementation block
@property (nonatomic,readonly) NSString * defaultPaymentPassUniqueIdentifier; 
@property (nonatomic,readonly) long long mode;                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                                       //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,retain) NSString * hostAppLocalizedName;                                         //@synthesize hostAppLocalizedName=_hostAppLocalizedName - In the implementation block
@property (nonatomic,retain) NSString * hostApplicationIdentifier;                                    //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,retain) CNContact * shippingEmail;                                               //@synthesize shippingEmail=_shippingEmail - In the implementation block
@property (nonatomic,retain) CNContact * shippingPhone;                                               //@synthesize shippingPhone=_shippingPhone - In the implementation block
@property (nonatomic,retain) CNContact * shippingName;                                                //@synthesize shippingName=_shippingName - In the implementation block
@property (nonatomic,retain) CNContact * shippingAddress;                                             //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;                                       //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,retain) NSString * shippingType;                                                 //@synthesize shippingType=_shippingType - In the implementation block
@property (assign,getter=isShippingEditable,nonatomic) BOOL shippingEditable;                         //@synthesize shippingEditable=_shippingEditable - In the implementation block
@property (nonatomic,retain) NSString * shippingEditableMessage;                                      //@synthesize shippingEditableMessage=_shippingEditableMessage - In the implementation block
@property (nonatomic,retain) CNContact * billingAddress;                                              //@synthesize billingAddress=_billingAddress - In the implementation block
@property (nonatomic,retain) NSArray * paymentSummaryItems; 
@property (nonatomic,retain) PKPaymentOptionsDefaults * defaults;                                     //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) PKPaymentOptionsRecents * recents;                                       //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) PKPassLibrary * library;                                                 //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * pendingTransaction;                               //@synthesize pendingTransaction=_pendingTransaction - In the implementation block
@property (nonatomic,copy) id updateHandler;                                                          //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,readonly) NSString * merchantName; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) NSDecimalNumber * transactionAmount; 
@property (nonatomic,readonly) NSArray * items;                                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL pinRequired; 
@property (nonatomic,retain) PKRemoteDevice * remoteDevice;                                           //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                                    //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) NSArray * acceptedPasses; 
@property (nonatomic,readonly) NSArray * unavailablePasses; 
@property (nonatomic,readonly) NSArray * remoteDevices; 
@property (nonatomic,readonly) NSArray * allRemoteDevices;                                            //@synthesize allRemoteDevices=_allRemoteDevices - In the implementation block
@property (nonatomic,readonly) NSArray * allNearbyRemoteDevices; 
@property (nonatomic,retain) PKRemotePaymentInstrument * remotePaymentInstrument;                     //@synthesize remotePaymentInstrument=_remotePaymentInstrument - In the implementation block
@property (nonatomic,retain) PKRemotePaymentInstrument * initialRemotePaymentInstrument;              //@synthesize initialRemotePaymentInstrument=_initialRemotePaymentInstrument - In the implementation block
@property (nonatomic,readonly) NSSet * allAcceptedRemotePaymentInstruments;                           //@synthesize allAcceptedRemotePaymentInstruments=_allAcceptedRemotePaymentInstruments - In the implementation block
@property (nonatomic,readonly) NSSet * allUnavailableRemotePaymentInstruments;                        //@synthesize allUnavailableRemotePaymentInstruments=_allUnavailableRemotePaymentInstruments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)npkSetPassAndPaymentApplicationForAID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(PKPaymentOptionsRecents *)recents;
-(NSArray *)items;
-(void)beginUpdates;
-(void)endUpdates;
-(void)setRecents:(PKPaymentOptionsRecents *)arg1 ;
-(long long)mode;
-(id)initWithMode:(long long)arg1 ;
-(NSString *)currencyCode;
-(PKPassLibrary *)library;
-(void)setLibrary:(PKPassLibrary *)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)_ensureItems;
-(void)_ensureItemForClass:(Class)arg1 ;
-(void)_notifyModelChanged;
-(void)_ensurePlaceholderItems;
-(id)automaticallyPresentedPass;
-(void)setShippingType:(NSString *)arg1 ;
-(void)setShippingEditable:(BOOL)arg1 ;
-(void)setShippingEditableMessage:(NSString *)arg1 ;
-(void)_setDataItem:(id)arg1 ;
-(void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 notify:(BOOL)arg3 ;
-(id)_filterPaymentPassesUsingConfiguration:(id)arg1 ;
-(void)updateRemoteDevices:(id)arg1 ignoreProximity:(BOOL)arg2 ;
-(id)_inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(id)_inAppPrivateLabelPaymentPasses;
-(long long)_statusForPass:(id)arg1 ;
-(void)_setStatus:(long long)arg1 forPass:(id)arg2 ;
-(NSArray *)remoteDevices;
-(NSArray *)allNearbyRemoteDevices;
-(void)setRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(void)updateRemoteDevices:(id)arg1 ;
-(id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)arg1 ;
-(void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 ;
-(void)setDefaults:(PKPaymentOptionsDefaults *)arg1 ;
-(void)setPendingTransaction:(PKPaymentTransaction *)arg1 ;
-(NSArray *)allRemoteDevices;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(PKRemotePaymentInstrument *)initialRemotePaymentInstrument;
-(void)setInitialRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(NSSet *)allAcceptedRemotePaymentInstruments;
-(NSSet *)allUnavailableRemotePaymentInstruments;
-(CNContact *)cachedRecentAddress;
-(void)setCachedRecentAddress:(CNContact *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKRemoteDevice *)remoteDevice;
-(PKPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(void)setRemoteDevice:(PKRemoteDevice *)arg1 ;
-(NSArray *)acceptedPasses;
-(NSArray *)paymentSummaryItems;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(BOOL)pinRequired;
-(PKPaymentTransaction *)pendingTransaction;
-(PKPaymentOptionsDefaults *)defaults;
-(NSString *)defaultPaymentPassUniqueIdentifier;
-(BOOL)isValidWithError:(id*)arg1 ;
-(CNContact *)billingAddress;
-(NSString *)shippingType;
-(CNContact *)shippingAddress;
-(PKShippingMethod *)shippingMethod;
-(NSString *)hostAppLocalizedName;
-(id)itemForType:(long long)arg1 ;
-(NSString *)merchantName;
-(NSDecimalNumber *)transactionAmount;
-(void)setHostAppLocalizedName:(NSString *)arg1 ;
-(NSString *)shippingEditableMessage;
-(BOOL)isShippingEditable;
-(void)setShippingAddress:(CNContact *)arg1 ;
-(CNContact *)shippingName;
-(void)setShippingName:(CNContact *)arg1 ;
-(CNContact *)shippingPhone;
-(void)setShippingPhone:(CNContact *)arg1 ;
-(CNContact *)shippingEmail;
-(void)setShippingEmail:(CNContact *)arg1 ;
-(NSArray *)unavailablePasses;
-(void)setBillingAddress:(CNContact *)arg1 ;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
@end
