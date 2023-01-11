//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplayObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBezelView-Protocol.h>

@class NSString, NTKCurvedColoringLabel, NTKRichComplicationView;

@interface NTKRichComplicationBezelBaseCircularView <NTKComplicationDisplayObserver, NTKRichComplicationCircularBezelView>
{
    NTKRichComplicationView *_circularView;
    double _circularViewRotationInDegree;
    NTKCurvedColoringLabel *_bezelTextLabel;
    double _bezelTextLabelRotationInDegree;
    double _newDataAnimationCircularScale;
    double _newDataAnimationBezelLabelScale;
    _Bool _allowUpdatingBezelTextProperties;
    _Bool _allowNofityingDelegateWithBezelTextUpdate;
    long long _fromTheme;
    long long _toTheme;
    double _themeFraction;
    _Bool _inMonochromeMode;
    double _bezelLabelCircularRadius;
}

+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 bezelTextUpdateHandler:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) NTKRichComplicationView *circularView; // @synthesize circularView=_circularView;
@property(nonatomic) double bezelLabelCircularRadius; // @synthesize bezelLabelCircularRadius=_bezelLabelCircularRadius;
- (void)_updateNewDataAnimationFinalAlpha:(double)arg1 finalBezelLabelScale:(double)arg2 finalCircularViewScale:(double)arg3 animationApplierBlock:(CDUnknownBlockType)arg4 animationFraction:(float)arg5;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_createBezelLabel;
- (void)complicationDisplay:(id)arg1 renderStatsWithTime:(double)arg2 cost:(double)arg3;
- (void)complicationDisplayNeedsResize:(id)arg1;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (id)_circularTemplateFromTemplate:(id)arg1;
- (id)_bezelTextProviderFromTemplate:(id)arg1;
- (Class)_circularViewClassFromFromTemplate:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)_layoutCircularView;
- (void)_layoutBezelLabel;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
@property(readonly, copy) NSString *description;
- (struct CGPoint)circularViewCenter;
- (void)setBezelTextColor:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
