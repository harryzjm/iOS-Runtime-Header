//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKBatteryComplicationDisplay-Protocol.h>

@class NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKBatteryCircularSmallComplicationView <NTKBatteryComplicationDisplay>
{
    double _level;
    long long _state;
}

- (void)setState:(long long)arg1;
- (void)setLevel:(float)arg1;
- (_Bool)_wantsPlatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

