/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUNoCopyDictionary, NSMutableDictionary;

@interface TCImportFontCache : NSObject {

	OITSUNoCopyDictionary* mFontCache;
	NSMutableDictionary* mFontNameCache;

}

@property (nonatomic,readonly) NSMutableDictionary * fontNameCache; 
+(CGSize)stringSizeForText:(id)arg1 ctFontRef:(CTFontRef)arg2 ;
-(id)init;
-(void)dealloc;
-(CTFontRef)ctFontRefForKey:(id)arg1 ;
-(CTFontRef)fontRefForFontName:(id)arg1 size:(int)arg2 ;
-(CGSize)stringSizeForSpaceWithFontName:(id)arg1 fontSize:(int)arg2 ;
-(CGSize)stringSizeForText:(id)arg1 fontName:(id)arg2 fontSize:(int)arg3 ;
-(void)addReplacementFontWarning:(id)arg1 fontName:(id)arg2 ;
-(void)validateFontInfoInPropertyMap:(id)arg1 baseStyle:(id)arg2 ;
-(NSMutableDictionary *)fontNameCache;
@end
