//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLKComplicationTemplateActivity
{
    long long _family;
    _Bool _hideDots;
    double _energyPercentComplete;
    double _briskMinutesPercentComplete;
    double _standHoursPercentComplete;
}

+ (id)activityTemplateWithFamily:(long long)arg1;
@property(nonatomic, getter=dotsAreHidden) _Bool hideDots; // @synthesize hideDots=_hideDots;
@property(nonatomic) double standHoursPercentComplete; // @synthesize standHoursPercentComplete=_standHoursPercentComplete;
@property(nonatomic) double briskMinutesPercentComplete; // @synthesize briskMinutesPercentComplete=_briskMinutesPercentComplete;
@property(nonatomic) double energyPercentComplete; // @synthesize energyPercentComplete=_energyPercentComplete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

