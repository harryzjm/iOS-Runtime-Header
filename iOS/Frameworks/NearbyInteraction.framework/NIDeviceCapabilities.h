//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NIDeviceCapabilities : NSObject
{
    _Bool _supportsPreciseDistanceMeasurement;
    _Bool _supportsDirectionMeasurement;
    _Bool _supportsCameraAssistance;
    _Bool _supportsCoarseDistanceMeasurement;
}

+ (id)new;
@property(readonly, nonatomic) _Bool supportsCoarseDistanceMeasurement; // @synthesize supportsCoarseDistanceMeasurement=_supportsCoarseDistanceMeasurement;
@property(readonly, nonatomic) _Bool supportsCameraAssistance; // @synthesize supportsCameraAssistance=_supportsCameraAssistance;
@property(readonly, nonatomic) _Bool supportsDirectionMeasurement; // @synthesize supportsDirectionMeasurement=_supportsDirectionMeasurement;
@property(readonly, nonatomic) _Bool supportsPreciseDistanceMeasurement; // @synthesize supportsPreciseDistanceMeasurement=_supportsPreciseDistanceMeasurement;
- (id)init;
- (unsigned char)toBitmap;
- (id)initWithBitmap:(unsigned char)arg1;
- (id)initWithFineRangingSupport:(_Bool)arg1 coarseRangingSupport:(_Bool)arg2 aoaSupport:(_Bool)arg3 syntheticApertureSupport:(_Bool)arg4;
- (id)initWithFineRangingSupport:(_Bool)arg1 aoaSupport:(_Bool)arg2 syntheticApertureSupport:(_Bool)arg3;

@end

