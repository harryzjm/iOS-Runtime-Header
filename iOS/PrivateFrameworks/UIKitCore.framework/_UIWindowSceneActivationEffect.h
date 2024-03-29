//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITargetedPreview, UIView, _UIHighlightPlatterView;
@protocol _UIContentEffectDescriptor;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneActivationEffect : NSObject
{
    id <_UIContentEffectDescriptor> _descriptor;
    UIView *_platterContainer;
    NSMutableArray *_completions;
    _UIHighlightPlatterView *_platterView;
    long long _state;
    double _currentScale;
}

- (void).cxx_destruct;
@property(nonatomic) double currentScale; // @synthesize currentScale=_currentScale;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) _UIHighlightPlatterView *platterView; // @synthesize platterView=_platterView;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(readonly, nonatomic) UIView *platterContainer; // @synthesize platterContainer=_platterContainer;
@property(readonly, nonatomic) id <_UIContentEffectDescriptor> descriptor; // @synthesize descriptor=_descriptor;
- (void)_performAllCompletionBlocks;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)previewForContinuingToEffectWithPreview:(id)arg1;
- (void)setDescriptor:(id)arg1 andKey:(id)arg2;
- (id)_shadowBehavior;
- (id)_settlingBehavior;
- (id)_interactiveScaleBehavior;
- (void)endExpanded:(_Bool)arg1 withVelocity:(double)arg2;
- (void)advanceToScale:(double)arg1;
- (void)begin;
@property(readonly, nonatomic) UITargetedPreview *handOffPreview;
- (id)initWithDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

