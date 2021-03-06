/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Support/fileproviderd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPDaemon.h>

@class FPServer, NSXPCConnection;

@interface FPXPCServicer : NSObject <FPDaemon> {

	FPServer* _server;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) FPServer * server;                         //@synthesize server=_server - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(BOOL)clientHasSandboxAccessToFile:(id)arg1 ;
-(BOOL)clientHasOneOfAllowedEntitlements:(id)arg1 ;
-(FPServer *)server;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)wakeUpCompletion:(/*^block*/id)arg1 ;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)providePlaceholderForItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)documentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setServer:(FPServer *)arg1 ;
-(void)providersCompletionHandler:(/*^block*/id)arg1 ;
@end

