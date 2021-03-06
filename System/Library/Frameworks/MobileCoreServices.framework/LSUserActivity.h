/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCompanionAdvertiserDelegate.h>

@protocol LSUserActivityDelegate;
@class LSUserActivityManager, NSMutableDictionary, NSString, NSURL, SFCompanionAdvertiser, NSError, NSMutableSet, NSUUID, NSDate, NSDictionary, NSData, NSSet, NSUserActivity;

@interface LSUserActivity : NSObject <SFCompanionAdvertiserDelegate> {

	LSUserActivityManager* _manager;
	NSMutableDictionary* _userInfo;
	NSMutableDictionary* _frameworkPayload;
	NSString* _title;
	NSURL* _webpageURL;
	id<LSUserActivityDelegate> _delegate;
	SFCompanionAdvertiser* _advertiser;
	SFCompanionAdvertiser* _resumerAdvertiser;
	double _lastSaveTime;
	BOOL _saveScheduled;
	BOOL _createsNewUUIDIfSaved;
	NSError* _decodeUserInfoError;
	BOOL _needsSave;
	BOOL _dirty;
	BOOL _sendToServerPending;
	BOOL _inWillSaveCallback;
	BOOL _supportsContinuationStreams;
	BOOL _forceImmediateSendToServer;
	BOOL _encodedContainsUnsynchronizedCloudDocument;
	BOOL _encodedFileProviderURL;
	double _encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
	NSString* _subtitle;
	NSMutableSet* _keywords;
	NSString* _contentIdentifier;
	NSString* _contentType;
	NSMutableDictionary* _contentAttributes;
	LSUserActivity* _parentUserActivity;
	NSMutableSet* _requiredUserActivityKeys;
	NSString* _teamIdentifier;
	BOOL _eligibleForHandoff;
	BOOL _eligibleForSearch;
	BOOL _eligibleForReminders;
	BOOL _eligibleForPublicIndexing;
	BOOL _canCreateStreams;
	NSString* _typeIdentifier;
	NSString* _dynamicIdentifier;
	NSUUID* _uniqueIdentifier;
	unsigned long long _suggestedActionType;
	NSDate* _lastActivityDate;
	NSDictionary* _options;
	NSData* _streamsData;

}

@property (copy) NSString * owningBundleIdentifier; 
@property (getter=isActive) BOOL active; 
@property (copy) NSDictionary * activityPayload; 
@property (setter=setActivityPayload:,getter=activityPayload,copy) NSDictionary * activityPayloadDictionary; 
@property (setter=setFrameworkPayload:,getter=frameworkPayload,copy) NSDictionary * frameworkPayloadDictionary; 
@property (copy) NSDictionary * frameworkPayload; 
@property (copy) NSURL * webPageURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * subtitle; 
@property (copy) NSString * contentType; 
@property (copy) NSDictionary * contentAttributes; 
@property (copy) NSSet * requiredUserActivityKeys; 
@property (copy) NSSet * keywords; 
@property (copy) NSString * contentIdentifier; 
@property (retain) NSUserActivity * parentUserActivity; 
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff; 
@property (getter=isEligibleForSearch) BOOL eligibleForSearch; 
@property (getter=isEligibleForReminders) BOOL eligibleForReminders; 
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing; 
@property (readonly) LSUserActivityManager * manager;                                                                        //@synthesize manager=_manager - In the implementation block
@property (copy) NSUUID * uniqueIdentifier;                                                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign) BOOL dirty;                                                                                               //@synthesize dirty=_dirty - In the implementation block
@property (assign) BOOL sendToServerPending;                                                                                 //@synthesize sendToServerPending=_sendToServerPending - In the implementation block
@property (assign) BOOL createsNewUUIDIfSaved;                                                                               //@synthesize createsNewUUIDIfSaved=_createsNewUUIDIfSaved - In the implementation block
@property (retain) NSError * decodeUserInfoError;                                                                            //@synthesize decodeUserInfoError=_decodeUserInfoError - In the implementation block
@property (assign) BOOL encodedContainsUnsynchronizedCloudDocument;                                                          //@synthesize encodedContainsUnsynchronizedCloudDocument=_encodedContainsUnsynchronizedCloudDocument - In the implementation block
@property (assign) double encodedContainsUnsynchronizedCloudDocumentBackoffInterval;                                         //@synthesize encodedContainsUnsynchronizedCloudDocumentBackoffInterval=_encodedContainsUnsynchronizedCloudDocumentBackoffInterval - In the implementation block
@property (assign) BOOL encodedFileProviderURL;                                                                              //@synthesize encodedFileProviderURL=_encodedFileProviderURL - In the implementation block
@property (copy) NSString * typeIdentifier;                                                                                  //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (copy) NSString * dynamicIdentifier;                                                                               //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSString * title;                                                                                           //@synthesize title=_title - In the implementation block
@property (copy) NSDictionary * userInfo;                                                                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSURL * webpageURL;                                                                                         //@synthesize webpageURL=_webpageURL - In the implementation block
@property (assign) BOOL needsSave;                                                                                           //@synthesize needsSave=_needsSave - In the implementation block
@property (assign) BOOL supportsContinuationStreams;                                                                         //@synthesize supportsContinuationStreams=_supportsContinuationStreams - In the implementation block
@property (assign) BOOL forceImmediateSendToServer;                                                                          //@synthesize forceImmediateSendToServer=_forceImmediateSendToServer - In the implementation block
@property (assign) id<LSUserActivityDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long suggestedActionType;                                                                 //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
@property (copy) NSDate * lastActivityDate;                                                                                  //@synthesize lastActivityDate=_lastActivityDate - In the implementation block
@property (copy) NSDictionary * options;                                                                                     //@synthesize options=_options - In the implementation block
@property (copy) NSData * streamsData;                                                                                       //@synthesize streamsData=_streamsData - In the implementation block
@property (assign) BOOL canCreateStreams;                                                                                    //@synthesize canCreateStreams=_canCreateStreams - In the implementation block
@property (copy) NSString * teamIdentifier;                                                                                  //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
+(BOOL)currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)addDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(void)removeDynamicUserActivity:(id)arg1 matching:(id)arg2 ;
+(id)currentUserActivityUUID;
+(BOOL)supportsUserActivityAppLinks;
+(BOOL)userActivityContinuationSupported;
+(id)userActivityFromUUID:(id)arg1 withError:(id*)arg2 ;
+(id)suggestedActionOfType:(unsigned long long)arg1 ;
+(id)allowedWebpageURLSchemes;
+(BOOL)checkWebpageURL:(id)arg1 actionType:(unsigned long long)arg2 throwIfFailed:(BOOL)arg3 ;
+(id)registerForSuggestedActionNudgeOfType:(unsigned long long)arg1 withOptions:(id)arg2 block:(/*^block*/id)arg3 ;
+(void)unregisterForSuggestedActionNudgeOfType:(id)arg1 ;
+(id)_encodeToString:(id)arg1 ;
+(id)_encodeKeyAndValueIntoString:(id)arg1 value:(id)arg2 ;
+(id)_decodeFromScanner:(id)arg1 ;
+(id)_decodeFromString:(id)arg1 ;
+(id)userActivity;
-(id)initWithTypeIdentifier:(id)arg1 options:(id)arg2 ;
-(BOOL)needsSave;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(BOOL)supportsContinuationStreams;
-(void)setSupportsContinuationStreams:(BOOL)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(NSURL *)webPageURL;
-(void)setWebPageURL:(NSURL *)arg1 ;
-(id)initWithUserActivityData:(id)arg1 options:(id)arg2 ;
-(id)initWithUserActivityStrings:(id)arg1 optionalString:(id)arg2 tertiaryData:(id)arg3 options:(id)arg4 ;
-(id)initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned long long)arg2 options:(id)arg3 ;
-(id)initWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 options:(id)arg3 ;
-(unsigned long long)suggestedActionType;
-(id)initDynamicActivityWithTypeIdentifier:(id)arg1 dynamicIdentifier:(id)arg2 suggestedActionType:(unsigned long long)arg3 options:(id)arg4 ;
-(BOOL)sendToServerPending;
-(void)setSendToServerPending:(BOOL)arg1 ;
-(BOOL)forceImmediateSendToServer;
-(void)setForceImmediateSendToServer:(BOOL)arg1 ;
-(BOOL)createsNewUUIDIfSaved;
-(void)setCreatesNewUUIDIfSaved:(BOOL)arg1 ;
-(NSError *)decodeUserInfoError;
-(void)setDecodeUserInfoError:(NSError *)arg1 ;
-(BOOL)encodedContainsUnsynchronizedCloudDocument;
-(void)setEncodedContainsUnsynchronizedCloudDocument:(BOOL)arg1 ;
-(double)encodedContainsUnsynchronizedCloudDocumentBackoffInterval;
-(void)setEncodedContainsUnsynchronizedCloudDocumentBackoffInterval:(double)arg1 ;
-(BOOL)encodedFileProviderURL;
-(void)setEncodedFileProviderURL:(BOOL)arg1 ;
-(NSString *)dynamicIdentifier;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(NSDate *)lastActivityDate;
-(void)setLastActivityDate:(NSDate *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(BOOL)canCreateStreams;
-(void)setCanCreateStreams:(BOOL)arg1 ;
-(id)initWithSuggestedActionType:(unsigned long long)arg1 options:(id)arg2 ;
-(id)initWithManager:(id)arg1 userActivityInfo:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<LSUserActivityDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<LSUserActivityDelegate>)delegate;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(id)initWithUUID:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)typeIdentifier;
-(NSUUID *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(void)setNeedsSave:(BOOL)arg1 ;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(LSUserActivityManager *)manager;
@end

