//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIVisualEffectViewParticipating-Protocol.h>

@class NSArray, NSString, UIView, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;

@interface _UIVisualEffectSubview <_UIVisualEffectViewParticipating>
{
    NSArray *_filters;
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    UIView<_UIVisualEffectViewParticipating> *_containedView;
    NSArray *_viewEffects;
    id <_UIVisualEffectViewSubviewMonitoring> _subviewMonitor;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_UIVisualEffectViewSubviewMonitoring> subviewMonitor; // @synthesize subviewMonitor=_subviewMonitor;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView; // @synthesize containedView=_containedView;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedViewEffects;
@property(nonatomic) _Bool disableGroupFiltering;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
