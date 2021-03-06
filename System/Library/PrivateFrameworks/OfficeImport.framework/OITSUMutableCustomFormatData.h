/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUCustomFormatData.h>

@class NSString, NSArray, NSIndexSet;

@interface OITSUMutableCustomFormatData : OITSUCustomFormatData

@property (nonatomic,copy) NSString * formatString; 
@property (nonatomic,copy) NSArray * interstitialStrings; 
@property (nonatomic,copy) NSIndexSet * interstitialStringInsertionIndexes; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) int fractionAccuracy; 
@property (assign,nonatomic) unsigned char minimumIntegerWidth; 
@property (assign,nonatomic) unsigned char decimalWidth; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; 
@property (assign,nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; 
@property (assign,nonatomic) unsigned char numberOfHashDecimalPlaceholders; 
@property (assign,nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; 
@property (assign,nonatomic) unsigned short currencyCodeIndex; 
@property (assign,nonatomic) BOOL showThousandsSeparator; 
@property (assign,nonatomic) BOOL useAccountingStyle; 
@property (assign,nonatomic) BOOL requiresFractionReplacement; 
@property (assign,nonatomic) BOOL isConditional; 
@property (assign,nonatomic) BOOL formatContainsIntegerToken; 
@property (assign,nonatomic) BOOL isComplexFormat; 
+(id)customFormatData;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

