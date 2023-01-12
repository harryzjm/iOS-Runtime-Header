//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBMKPointOfInterestFilter;

@interface IBMKStandardMapConfiguration
{
    _Bool _showsBuildings;
    _Bool _showsTraffic;
    IBMKPointOfInterestFilter *_pointOfInterestFilter;
    long long _emphasisStyle;
    long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsTraffic; // @synthesize showsTraffic=_showsTraffic;
@property(nonatomic) _Bool showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long emphasisStyle; // @synthesize emphasisStyle=_emphasisStyle;
@property(retain, nonatomic) IBMKPointOfInterestFilter *pointOfInterestFilter; // @synthesize pointOfInterestFilter=_pointOfInterestFilter;
- (id)initWithBinaryUnarchiver:(id)arg1;

@end

