/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LPiTunesMediaURLComponents : NSObject {

	NSString* _identifier;
	NSString* _storefrontCountryCode;
	long long _itemType;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontCountryCode;              //@synthesize storefrontCountryCode=_storefrontCountryCode - In the implementation block
@property (nonatomic,readonly) long long itemType;                                 //@synthesize itemType=_itemType - In the implementation block
+(id)identifierFromQueryItems:(id)arg1 pathComponent:(id)arg2 ;
+(id)storefrontCountryCodeFromPathComponent:(id)arg1 ;
+(long long)itemTypeFromPathComponent:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithURL:(id)arg1 ;
-(long long)itemType;
-(NSString *)storefrontCountryCode;
@end
