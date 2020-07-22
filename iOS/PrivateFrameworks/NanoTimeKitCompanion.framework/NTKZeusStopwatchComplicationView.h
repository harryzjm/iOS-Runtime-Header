//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKStopwatchComplicationDisplay-Protocol.h>

@class NSString, UILabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusStopwatchComplicationView <NTKStopwatchComplicationDisplay>
{
    UILabel *_label;
}

- (void).cxx_destruct;
- (struct CGRect)contentFrame;
- (void)layoutSubviews;
- (void)setTime:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end
