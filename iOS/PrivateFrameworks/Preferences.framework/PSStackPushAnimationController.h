//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Preferences/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSArray, NSMutableArray, NSString, UINavigationController;

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    NSArray *_snapshots;
    NSMutableArray *_animationsToRunAlongsideToVC;
    _Bool _hasStartedAnimation;
    NSArray *_viewControllers;
    UINavigationController *_navigationController;
    CDUnknownBlockType _completionBlock;
    long long _animationPreset;
    double _startStagger;
    double _completionStagger;
    double _pushDuration;
    double _springDamping;
}

+ (void)resetDefaultAnimationParameters;
+ (void)setDefaultAnimationPreset:(long long)arg1;
+ (id)_animationParametersForPreset:(long long)arg1;
+ (id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3;
+ (id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2;
@property(nonatomic) double springDamping; // @synthesize springDamping=_springDamping;
@property(nonatomic) double pushDuration; // @synthesize pushDuration=_pushDuration;
@property(nonatomic) double completionStagger; // @synthesize completionStagger=_completionStagger;
@property(nonatomic) double startStagger; // @synthesize startStagger=_startStagger;
@property(nonatomic) long long animationPreset; // @synthesize animationPreset=_animationPreset;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)_loadDefaultValues;
- (id)_valueForAnimationParameter:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateAlongsideToViewController:(CDUnknownBlockType)arg1;
- (void)_addAnimation:(CDUnknownBlockType)arg1 forViewAtIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (double)_actualDuration;
- (double)_desiredDuration;
- (_Bool)_shouldSkipFirstPush;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

