//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HDHeartbeatDatum : NSObject
{
    _Bool _precededByGap;
    double _timeSinceSequenceStart;
}

+ (id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(_Bool)arg2;
@property(readonly, nonatomic) _Bool precededByGap; // @synthesize precededByGap=_precededByGap;
@property(readonly, nonatomic) double timeSinceSequenceStart; // @synthesize timeSinceSequenceStart=_timeSinceSequenceStart;

@end
