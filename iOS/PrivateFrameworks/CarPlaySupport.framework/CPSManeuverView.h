//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPManeuver, CPTravelEstimates;

@interface CPSManeuverView
{
    _Bool _minimalMode;
    CPManeuver *_representedManeuver;
    long long _style;
    CPTravelEstimates *_currentTravelEstimates;
}

@property(retain, nonatomic) CPTravelEstimates *currentTravelEstimates; // @synthesize currentTravelEstimates=_currentTravelEstimates;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) CPManeuver *representedManeuver; // @synthesize representedManeuver=_representedManeuver;
@property(readonly, nonatomic, getter=isMinimalMode) _Bool minimalMode; // @synthesize minimalMode=_minimalMode;
- (void).cxx_destruct;
- (id)initWithManeuver:(id)arg1 minimalMode:(_Bool)arg2 style:(long long)arg3;

@end

