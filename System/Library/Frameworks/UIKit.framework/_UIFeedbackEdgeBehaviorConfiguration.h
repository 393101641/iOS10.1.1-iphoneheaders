/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@protocol _UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable;
@class _UIFeedback;

@interface _UIFeedbackEdgeBehaviorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _userInteractingThresholdFeedback;
	/*^block*/id _userInteractingThresholdFeedbackUpdateBlock;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _userInteractingBeyondEdgeFeedback;
	/*^block*/id _userInteractingBeyondEdgeFeedbackUpdateBlock;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _userInteractingReleaseFeedback;
	/*^block*/id _userInteractingReleaseFeedbackUpdateBlock;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _animatingThresholdFeedback;
	/*^block*/id _animatingThresholdFeedbackUpdateBlock;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _animatingMaximumExtentFeedback;
	/*^block*/id _animatingMaximumExtentFeedbackUpdateBlock;
	long long _defaultAxis;
	double _minDistanceFromEdge;

}

@property (assign,setter=_setDefaultAxis:,getter=_defaultAxis,nonatomic) long long defaultAxis;                          //@synthesize defaultAxis=_defaultAxis - In the implementation block
@property (assign,nonatomic) double minDistanceFromEdge;                                                                 //@synthesize minDistanceFromEdge=_minDistanceFromEdge - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> userInteractingThresholdFeedback;                 //@synthesize userInteractingThresholdFeedback=_userInteractingThresholdFeedback - In the implementation block
@property (nonatomic,copy) id userInteractingThresholdFeedbackUpdateBlock;                                               //@synthesize userInteractingThresholdFeedbackUpdateBlock=_userInteractingThresholdFeedbackUpdateBlock - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> userInteractingBeyondEdgeFeedback;              //@synthesize userInteractingBeyondEdgeFeedback=_userInteractingBeyondEdgeFeedback - In the implementation block
@property (nonatomic,copy) id userInteractingBeyondEdgeFeedbackUpdateBlock;                                              //@synthesize userInteractingBeyondEdgeFeedbackUpdateBlock=_userInteractingBeyondEdgeFeedbackUpdateBlock - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> userInteractingReleaseFeedback;                   //@synthesize userInteractingReleaseFeedback=_userInteractingReleaseFeedback - In the implementation block
@property (nonatomic,copy) id userInteractingReleaseFeedbackUpdateBlock;                                                 //@synthesize userInteractingReleaseFeedbackUpdateBlock=_userInteractingReleaseFeedbackUpdateBlock - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> animatingThresholdFeedback;                       //@synthesize animatingThresholdFeedback=_animatingThresholdFeedback - In the implementation block
@property (nonatomic,copy) id animatingThresholdFeedbackUpdateBlock;                                                     //@synthesize animatingThresholdFeedbackUpdateBlock=_animatingThresholdFeedbackUpdateBlock - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> animatingMaximumExtentFeedback;                   //@synthesize animatingMaximumExtentFeedback=_animatingMaximumExtentFeedback - In the implementation block
@property (nonatomic,copy) id animatingMaximumExtentFeedbackUpdateBlock;                                                 //@synthesize animatingMaximumExtentFeedbackUpdateBlock=_animatingMaximumExtentFeedbackUpdateBlock - In the implementation block
+(id)_zoomConfiguration;
+(id)defaultConfiguration;
+(id)sliderConfiguration;
+(id)verticalScrollConfiguration;
+(id)horizontalScrollConfiguration;
+(id)swipePresentationConfiguration;
+(id)_scrollConfigurationWithAxis:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(long long)_defaultAxis;
-(double)minDistanceFromEdge;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)userInteractingReleaseFeedback;
-(id)userInteractingReleaseFeedbackUpdateBlock;
-(id)userInteractingBeyondEdgeFeedbackUpdateBlock;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)userInteractingBeyondEdgeFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)userInteractingThresholdFeedback;
-(id)userInteractingThresholdFeedbackUpdateBlock;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)animatingThresholdFeedback;
-(id)animatingThresholdFeedbackUpdateBlock;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)animatingMaximumExtentFeedback;
-(id)animatingMaximumExtentFeedbackUpdateBlock;
-(void)setUserInteractingThresholdFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setUserInteractingThresholdFeedbackUpdateBlock:(id)arg1 ;
-(void)_setDefaultAxis:(long long)arg1 ;
-(void)setMinDistanceFromEdge:(double)arg1 ;
-(void)setAnimatingThresholdFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setAnimatingThresholdFeedbackUpdateBlock:(id)arg1 ;
-(void)setUserInteractingReleaseFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setUserInteractingBeyondEdgeFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(void)setUserInteractingBeyondEdgeFeedbackUpdateBlock:(id)arg1 ;
-(void)setUserInteractingReleaseFeedbackUpdateBlock:(id)arg1 ;
-(void)setAnimatingMaximumExtentFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setAnimatingMaximumExtentFeedbackUpdateBlock:(id)arg1 ;
@end

