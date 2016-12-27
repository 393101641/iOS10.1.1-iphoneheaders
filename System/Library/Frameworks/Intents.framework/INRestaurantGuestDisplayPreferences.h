/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRestaurantGuestDisplayPreferencesExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying> {

	BOOL _nameFieldFirstNameOptional;
	BOOL _nameFieldLastNameOptional;
	BOOL _nameFieldShouldBeDisplayed;
	BOOL _emailAddressFieldShouldBeDisplayed;
	BOOL _phoneNumberFieldShouldBeDisplayed;
	BOOL _nameEditable;
	BOOL _emailAddressEditable;
	BOOL _phoneNumberEditable;

}

@property (assign,nonatomic) BOOL nameFieldFirstNameOptional;                      //@synthesize nameFieldFirstNameOptional=_nameFieldFirstNameOptional - In the implementation block
@property (assign,nonatomic) BOOL nameFieldLastNameOptional;                       //@synthesize nameFieldLastNameOptional=_nameFieldLastNameOptional - In the implementation block
@property (assign,nonatomic) BOOL nameFieldShouldBeDisplayed;                      //@synthesize nameFieldShouldBeDisplayed=_nameFieldShouldBeDisplayed - In the implementation block
@property (assign,nonatomic) BOOL emailAddressFieldShouldBeDisplayed;              //@synthesize emailAddressFieldShouldBeDisplayed=_emailAddressFieldShouldBeDisplayed - In the implementation block
@property (assign,nonatomic) BOOL phoneNumberFieldShouldBeDisplayed;               //@synthesize phoneNumberFieldShouldBeDisplayed=_phoneNumberFieldShouldBeDisplayed - In the implementation block
@property (assign,nonatomic) BOOL nameEditable;                                    //@synthesize nameEditable=_nameEditable - In the implementation block
@property (assign,nonatomic) BOOL emailAddressEditable;                            //@synthesize emailAddressEditable=_emailAddressEditable - In the implementation block
@property (assign,nonatomic) BOOL phoneNumberEditable;                             //@synthesize phoneNumberEditable=_phoneNumberEditable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)nameFieldFirstNameOptional;
-(BOOL)nameFieldLastNameOptional;
-(BOOL)nameFieldShouldBeDisplayed;
-(BOOL)emailAddressFieldShouldBeDisplayed;
-(BOOL)phoneNumberFieldShouldBeDisplayed;
-(BOOL)nameEditable;
-(BOOL)emailAddressEditable;
-(BOOL)phoneNumberEditable;
-(void)setNameFieldFirstNameOptional:(BOOL)arg1 ;
-(void)setNameFieldLastNameOptional:(BOOL)arg1 ;
-(void)setNameFieldShouldBeDisplayed:(BOOL)arg1 ;
-(void)setEmailAddressFieldShouldBeDisplayed:(BOOL)arg1 ;
-(void)setPhoneNumberFieldShouldBeDisplayed:(BOOL)arg1 ;
-(void)setNameEditable:(BOOL)arg1 ;
-(void)setEmailAddressEditable:(BOOL)arg1 ;
-(void)setPhoneNumberEditable:(BOOL)arg1 ;
@end
