/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INGetAvailableRestaurantReservationBookingsIntentResponseExport.h>

@class NSString, INTermsAndConditions, NSArray;

@interface INGetAvailableRestaurantReservationBookingsIntentResponse : INIntentResponse <INGetAvailableRestaurantReservationBookingsIntentResponseExport> {

	NSString* _localizedRestaurantDescriptionText;
	NSString* _localizedBookingAdvisementText;
	INTermsAndConditions* _termsAndConditions;
	NSArray* _availableBookings;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * localizedRestaurantDescriptionText;              //@synthesize localizedRestaurantDescriptionText=_localizedRestaurantDescriptionText - In the implementation block
@property (nonatomic,copy) NSString * localizedBookingAdvisementText;                  //@synthesize localizedBookingAdvisementText=_localizedBookingAdvisementText - In the implementation block
@property (nonatomic,copy) INTermsAndConditions * termsAndConditions;                  //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (nonatomic,readonly) NSArray * availableBookings;                            //@synthesize availableBookings=_availableBookings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)code;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)initWithAvailableBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3 ;
-(NSString *)localizedBookingAdvisementText;
-(NSString *)localizedRestaurantDescriptionText;
-(NSArray *)availableBookings;
-(void)setLocalizedRestaurantDescriptionText:(NSString *)arg1 ;
-(void)setLocalizedBookingAdvisementText:(NSString *)arg1 ;
-(INTermsAndConditions *)termsAndConditions;
-(void)setTermsAndConditions:(INTermsAndConditions *)arg1 ;
@end
