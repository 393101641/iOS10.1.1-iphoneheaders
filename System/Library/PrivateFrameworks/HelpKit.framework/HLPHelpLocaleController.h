/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPRemoteDataController.h>

@class NSArray, NSURL;

@interface HLPHelpLocaleController : HLPRemoteDataController {

	NSArray* _supportedLanguageCodes;
	NSURL* _helpBookURL;
	NSArray* _preferredLanguagesOverride;
	NSArray* _locales;

}

@property (nonatomic,retain) NSArray * preferredLanguagesOverride;              //@synthesize preferredLanguagesOverride=_preferredLanguagesOverride - In the implementation block
@property (nonatomic,retain) NSArray * locales;                                 //@synthesize locales=_locales - In the implementation block
-(id)currentLocale;
-(id)initWithURL:(id)arg1 ;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
-(NSArray *)preferredLanguagesOverride;
-(void)setPreferredLanguagesOverride:(NSArray *)arg1 ;
-(id)englishLocale;
-(id)localeWithPreferredLanguages:(id)arg1 ;
@end

