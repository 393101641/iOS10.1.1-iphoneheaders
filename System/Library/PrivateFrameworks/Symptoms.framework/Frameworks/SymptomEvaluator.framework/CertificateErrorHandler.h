/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface CertificateErrorHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {

	NSMutableDictionary* _banned;
	NSMutableArray* _store;
	id _resetObserver;
	unsigned _maxAge;
	unsigned _maxCount;

}

@property (assign,nonatomic) unsigned maxAge;                       //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned maxCount;                     //@synthesize maxCount=_maxCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setMaxAge:(unsigned)arg1 ;
-(unsigned)maxCount;
-(unsigned)maxAge;
-(void)_reset:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(long long)arg2 ;
-(void)setMaxCount:(unsigned)arg1 ;
@end
