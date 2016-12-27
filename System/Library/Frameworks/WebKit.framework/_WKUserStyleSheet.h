/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface _WKUserStyleSheet : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserStyleSheet> _userStyleSheet;

}

@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) BOOL forMainFrameOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)source;
-(NSURL *)baseURL;
-(Object*)_apiObject;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 userContentWorld:(id)arg5 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 baseURL:(id)arg5 userContentWorld:(id)arg6 ;
-(BOOL)isForMainFrameOnly;
@end
