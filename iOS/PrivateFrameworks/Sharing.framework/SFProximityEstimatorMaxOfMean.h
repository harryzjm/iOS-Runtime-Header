//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SFProximityEstimatorMaxOfMean
{
    char *_channelNumberArray;
    char *_rssiArray;
    unsigned int _rssiCount;
    unsigned int _rssiIndex;
    unsigned int _rssiMinCount;
}

- (_Bool)updateWithSFBLEDevice:(id)arg1;
- (void)dealloc;
- (id)initWithProximityInfo:(id)arg1;

@end

