/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface _CSStoreXPCRepresentation : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _XPCRepresentation;

}
+(id)classesForXPCInterface;
+(BOOL)supportsSecureCoding;
-(const CSStoreRef)createCSStoreWithError:(id*)arg1 ;
-(id)initWithCSStore:(CSStoreRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

