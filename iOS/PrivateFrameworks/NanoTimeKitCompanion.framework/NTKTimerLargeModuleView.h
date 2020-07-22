//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKTimerComplicationDisplay-Protocol.h>

@class NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKTimerLargeModuleView <NTKTimerComplicationDisplay>
{
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_countdownLabel;
}

- (void).cxx_destruct;
- (void)_setLayoutWithTitleText:(id)arg1 countdownText:(id)arg2;
- (void)_setLayoutForNormalTime:(double)arg1;
- (void)setStoppedWithTime:(double)arg1;
- (void)setTime:(double)arg1;
- (void)_layoutContentView;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end
