//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface AirQualityIndexModel : NSObject
{
    double _fraction;
    NSString *_localizedIndex;
    UIColor *_tintColor;
    NSArray *_spectrum;
    NSArray *_spectrumTicks;
}

+ (id)airQualityIndexModelForConditions:(id)arg1 location:(id)arg2 indexNumberFormatter:(id)arg3 useRoundedVariant:(_Bool)arg4;
@property(readonly, nonatomic) NSArray *spectrumTicks; // @synthesize spectrumTicks=_spectrumTicks;
@property(readonly, nonatomic) NSArray *spectrum; // @synthesize spectrum=_spectrum;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) NSString *localizedIndex; // @synthesize localizedIndex=_localizedIndex;
@property(readonly, nonatomic) double fraction; // @synthesize fraction=_fraction;
- (void).cxx_destruct;

@end
