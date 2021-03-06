/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSNumber* _nameRecordID;
	NSString* _nameContactIdentifier;
	NSString* _phoneNumber;
	NSNumber* _phoneNumberPropertyID;
	NSString* _phoneNumberContactIdentifier;
	NSString* _relationship;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * nameRecordID;                              //@synthesize nameRecordID=_nameRecordID - In the implementation block
@property (nonatomic,copy) NSString * nameContactIdentifier;                     //@synthesize nameContactIdentifier=_nameContactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSNumber * phoneNumberPropertyID;                     //@synthesize phoneNumberPropertyID=_phoneNumberPropertyID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberContactIdentifier;              //@synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * relationship;                              //@synthesize relationship=_relationship - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setNameRecordID:(NSNumber *)arg1 ;
-(void)setPhoneNumberPropertyID:(NSNumber *)arg1 ;
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
-(NSNumber *)nameRecordID;
-(NSNumber *)phoneNumberPropertyID;
-(NSString *)nameContactIdentifier;
-(NSString *)phoneNumberContactIdentifier;
-(void)_migrateToAddressBook:(void*)arg1 ;
-(void)_migrateToContactsWithAddressBook:(void*)arg1 ;
-(void)_migrateToSchemaVersion:(long long)arg1 withAddressBook:(void*)arg2 ;
-(NSString *)relationship;
-(void)setRelationship:(NSString *)arg1 ;
@end

