//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFColorProfile-Protocol.h>

@class NSString;

@interface HFTemperatureColorProfile : NSObject <HFColorProfile>
{
    float _minimumTemperature;
    float _maximumTemperature;
}

@property(readonly, nonatomic) float maximumTemperature; // @synthesize maximumTemperature=_maximumTemperature;
@property(readonly, nonatomic) float minimumTemperature; // @synthesize minimumTemperature=_minimumTemperature;
- (float)adjustedTemperatureForTemperature:(float)arg1;
- (id)adjustedColorPrimitiveForPrimitive:(id)arg1;
- (id)initWithMinimumTemperature:(float)arg1 maximumTemperature:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

