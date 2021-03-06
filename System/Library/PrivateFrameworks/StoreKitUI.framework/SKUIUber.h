/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIArtworkProviding;
@class SKUIColorScheme, NSString;

@interface SKUIUber : NSObject {

	SKUIColorScheme* _colorScheme;
	NSString* _text;
	id<SKUIArtworkProviding> _artworkProvider;

}

@property (nonatomic,readonly) id<SKUIArtworkProviding> artworkProvider;              //@synthesize artworkProvider=_artworkProvider - In the implementation block
@property (nonatomic,readonly) SKUIColorScheme * colorScheme;                         //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) NSString * text;                                       //@synthesize text=_text - In the implementation block
-(NSString *)text;
-(SKUIColorScheme *)colorScheme;
-(id<SKUIArtworkProviding>)artworkProvider;
-(id)initWithUberDictionary:(id)arg1 ;
@end

