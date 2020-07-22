//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKMonogramComplicationDisplay-Protocol.h>

@class NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKMonogramCircularSmallComplicationView <NTKMonogramComplicationDisplay>
{
    NTKColoringLabel *_label;
}

- (void).cxx_destruct;
- (_Bool)_wantsPlatter;
- (void)setMonogramText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
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
