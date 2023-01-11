//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMLowLightStatusIndicator
{
    double _duration;
    long long _lowLightMode;
}

@property(nonatomic) long long lowLightMode; // @synthesize lowLightMode=_lowLightMode;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)valueText;
- (_Bool)canShowValue;
- (id)imageNameForCurrentState;
- (_Bool)shouldFillOutlineForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;

@end
