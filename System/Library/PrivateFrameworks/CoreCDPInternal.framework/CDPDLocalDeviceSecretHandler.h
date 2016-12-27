/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPLocalDeviceSecretHandlerProtocol.h>

@class CDPContext;

@interface CDPDLocalDeviceSecretHandler : NSObject <CDPLocalDeviceSecretHandlerProtocol> {

	/*^block*/id _validationHandler;
	CDPContext* _context;

}

@property (nonatomic,readonly) CDPContext * context;              //@synthesize context=_context - In the implementation block
-(CDPContext *)context;
-(id)initWithContext:(id)arg1 validSecretHandler:(/*^block*/id)arg2 ;
-(void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2 ;
-(void)userDidCancelWithError:(id)arg1 ;
@end
