/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MechanismManager;

@interface Module : NSObject {

	MechanismManager* _mechanismManager;

}

@property (nonatomic,readonly) MechanismManager * mechanismManager;              //@synthesize mechanismManager=_mechanismManager - In the implementation block
+(id)missingSubclassErrorWithIdentifier:(id)arg1 ;
-(id)initWithMechanismManager:(id)arg1 ;
-(void)contextPluginWithExternalizedContext:(id)arg1 processId:(int)arg2 invalidationBlock:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
-(MechanismManager *)mechanismManager;
@end
