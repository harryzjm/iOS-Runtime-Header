//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIGravityWellAdaptorInteraction;
@protocol _UIClickHighlightEffect;

__attribute__((visibility("hidden")))
@interface _UIGravityWellAdaptorEffect
{
    double _maxProgress;
    id <_UIClickHighlightEffect> _adaptedEffect;
    _UIGravityWellAdaptorInteraction *_adaptorInteraction;
}

+ (id)effectWithAdaptedClickEffect:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) _UIGravityWellAdaptorInteraction *adaptorInteraction; // @synthesize adaptorInteraction=_adaptorInteraction;
@property(retain, nonatomic) id <_UIClickHighlightEffect> adaptedEffect; // @synthesize adaptedEffect=_adaptedEffect;
@property(nonatomic) double maxProgress; // @synthesize maxProgress=_maxProgress;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)previewForContinuingToEffectWithPreview:(id)arg1;
- (void)endForHandOff;
- (void)end;
- (void)updateWithProgress:(double)arg1;
- (void)begin;
- (id)secondaryBodyPreviews;

@end

