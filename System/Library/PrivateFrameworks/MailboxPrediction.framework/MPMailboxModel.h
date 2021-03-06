/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MailboxPrediction.framework/MailboxPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPMessageModeling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface MPMailboxModel : NSObject <MPMessageModeling, NSSecureCoding> {

	NSDictionary* _mailboxModel;

}

@property (nonatomic,retain) NSDictionary * mailboxModel;              //@synthesize mailboxModel=_mailboxModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)removeMessage:(id)arg1 ;
-(BOOL)addMessage:(id)arg1 ;
-(void)setMailboxModel:(NSDictionary *)arg1 ;
-(NSDictionary *)mailboxModel;
-(BOOL)updateWithMessage:(id)arg1 byAdding:(BOOL)arg2 ;
-(BOOL)updateWithFeature:(id)arg1 key:(id)arg2 adding:(BOOL)arg3 ;
-(id)initWithFeatures:(id)arg1 ;
-(double)likelihoodForFeature:(id)arg1 featureKey:(id)arg2 smoothing:(unsigned long long)arg3 ;
@end

