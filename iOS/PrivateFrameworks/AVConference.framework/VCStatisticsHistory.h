//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatisticsHistory : NSObject
{
    struct VCStatisticsPacketHistory _packetHistory[500];
    int _packetHistorySize;
    int _currentPacketHistoryIndex;
}

- (_Bool)getTimestampWithPacketId:(unsigned int)arg1 timestamp:(double *)arg2;
- (_Bool)getTotalPacketCountWithPacketId:(unsigned int)arg1 totalPacketCount:(unsigned int *)arg2;
- (void)addPacketId:(unsigned int)arg1 totalPacketCount:(unsigned int)arg2 time:(double)arg3;

@end
