/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFConversationStorable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFMutableConversationItem, NSString;

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying> {

	AFMutableConversationItem* _delegateItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)identifier;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dialogPhase;
-(id)initWithIdentifier:(id)arg1 revisionIdentifier:(id)arg2 type:(long long)arg3 aceObject:(id)arg4 dialogPhase:(id)arg5 presentationState:(long long)arg6 aceCommandIdentifier:(id)arg7 virgin:(BOOL)arg8 associatedDataStore:(id)arg9 ;
-(id)aceObject;
-(id)aceCommandIdentifier;
-(BOOL)isVirgin;
-(id)associatedDataStore;
-(id)initWithType:(long long)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(long long)arg4 aceCommandIdentifier:(id)arg5 virgin:(BOOL)arg6 associatedDataStore:(id)arg7 ;
-(id)initWithDelegateItem:(id)arg1 ;
-(id)revisionIdentifier;
-(long long)presentationState;
@end
