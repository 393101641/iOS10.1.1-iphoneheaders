/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCDocumentItem, NSData, NSString;

@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	BRCDocumentItem* _document;
	BOOL _allowAccess;
	NSData* _accessToken;
	NSString* _referenceIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithItem:(id)arg1 allowAccess:(BOOL)arg2 ;
@end

