/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface NSFormatter : NSObject <NSCopying, NSCoding>
+(id)hf_valueFormatterForCharacteristic:(id)arg1 options:(id)arg2 ;
+(id)_hf_customValueFormatterForCharacteristicType:(id)arg1 metadata:(id)arg2 options:(id)arg3 ;
+(id)_hf_valueFormatterForCharacteristicMetadata:(id)arg1 options:(id)arg2 ;
+(id)_hf_valueSetFormatterForCharacteristicType:(id)arg1 ;
+(id)_hf_microgramsPerMeterSquaredFormatter;
+(id)_hf_positionFormatterWithOptions:(id)arg1 ;
+(id)_hf_partsPerMillionFormatter;
+(id)_hf_powerStateFormatter;
+(id)_hf_doorStateFormatter;
+(id)_hf_heatingCoolingFormatter;
+(id)_hf_lockMechanismStateFormatter;
+(id)_hf_rotationDirectionFormatter;
+(id)_hf_temperatureUnitFormatter;
+(id)_hf_lockMechanismLastKnownActionFormatter;
+(id)_hf_airParticulateSizeFormatter;
+(id)_hf_airQualityFormatter;
+(id)_hf_positionStateFormatter;
+(id)_hf_currentSecuritySystemStateFormatter;
+(id)_hf_targetSecuritySystemStateFormatter;
+(id)_hf_contactStateStateFormatter;
+(id)hf_controlDescriptionFormatterForCharacteristicType:(id)arg1 withMetadata:(id)arg2 options:(id)arg3 ;
+(id)_hf_controlDescriptionForDetectionCharacteristicOfType:(id)arg1 withValue:(id)arg2 ;
+(id)_hf_controlTitleForCharacteristicType:(id)arg1 ;
+(id)hf_controlDescriptionFormatterForCharacteristic:(id)arg1 options:(id)arg2 ;
+(id)hf_valueFormatterForCharacteristicType:(id)arg1 withMetadata:(id)arg2 options:(id)arg3 ;
-(void)_gkUpdateLocale;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)editingStringForObjectValue:(id)arg1 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1 ;
-(long long)_cacheGenerationCount;
-(BOOL)_tracksCacheGenerationCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_invalidateCache;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
@end
