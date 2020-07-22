//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RTParkingQualityProvider : NSObject
{
    NSMutableArray *_movingHistorgram;
    unsigned long long _parkingQualityIndicator;
}

@property(nonatomic) unsigned long long parkingQualityIndicator; // @synthesize parkingQualityIndicator=_parkingQualityIndicator;
@property(retain, nonatomic) NSMutableArray *movingHistorgram; // @synthesize movingHistorgram=_movingHistorgram;
- (void).cxx_destruct;
- (unsigned long long)parkingQualityToLocationQuality:(unsigned long long)arg1;
- (unsigned long long)classifySamples:(id)arg1;
- (unsigned long long)calculateParkingQualityWithLocations:(id)arg1 parkingTimestamp:(double)arg2;
- (id)getCdfFromHistogram:(id)arg1 numSamples:(double)arg2;
- (id)getHistogramFromSamples:(id)arg1;
- (void)reset;
- (id)init;
- (int)indexOfSmallestElement:(double *)arg1 size:(int)arg2;

@end

