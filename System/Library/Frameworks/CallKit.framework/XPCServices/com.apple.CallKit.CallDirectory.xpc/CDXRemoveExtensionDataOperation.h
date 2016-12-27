/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, CXCallDirectoryStore, CDXAWDReporter;

@interface CDXRemoveExtensionDataOperation : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _extensionIdentifier;
	CXCallDirectoryStore* _store;
	CDXAWDReporter* _awdReporter;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * extensionIdentifier;                    //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,retain) CXCallDirectoryStore * store;                    //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) CDXAWDReporter * awdReporter;                    //@synthesize awdReporter=_awdReporter - In the implementation block
-(id)initWithExtensionIdentifier:(id)arg1 queue:(id)arg2 store:(id)arg3 ;
-(CDXAWDReporter *)awdReporter;
-(id)initWithExtensionIdentifier:(id)arg1 store:(id)arg2 ;
-(void)setAwdReporter:(CDXAWDReporter *)arg1 ;
-(NSString *)extensionIdentifier;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setStore:(CXCallDirectoryStore *)arg1 ;
-(CXCallDirectoryStore *)store;
@end
