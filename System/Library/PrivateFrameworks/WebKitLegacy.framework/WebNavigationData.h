/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {

	WebNavigationDataPrivate* _private;

}
-(id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(BOOL)arg5 clientRedirectSource:(id)arg6 ;
-(BOOL)hasSubstituteData;
-(id)clientRedirectSource;
-(void)dealloc;
-(id)url;
-(id)response;
-(id)title;
-(id)originalRequest;
@end

