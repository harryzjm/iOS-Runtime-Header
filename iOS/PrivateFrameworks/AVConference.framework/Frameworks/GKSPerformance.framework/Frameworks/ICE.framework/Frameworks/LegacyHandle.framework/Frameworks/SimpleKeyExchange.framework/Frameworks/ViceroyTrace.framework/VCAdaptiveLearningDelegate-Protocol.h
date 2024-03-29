//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ViceroyTrace/NSObject-Protocol.h>

@class NSString;

@protocol VCAdaptiveLearningDelegate <NSObject>
- (int)previousISBRForSegment:(NSString *)arg1;
- (int)shortTermAverageBWEForSegment:(NSString *)arg1;
- (int)longTermAverageBWEForSegment:(NSString *)arg1;
- (int)shortTermAverageSARBRForSegment:(NSString *)arg1;
- (int)longTermAverageSARBRForSegment:(NSString *)arg1;
- (int)shortTermAverageSATXBRForSegment:(NSString *)arg1;
- (int)longTermAverageSATXBRForSegment:(NSString *)arg1;
- (int)shortTermAverageISBRForSegment:(NSString *)arg1;
- (int)longTermAverageISBRForSegment:(NSString *)arg1;
- (int)initialSettledBitrate;
- (int)shortTermAverageTBRForSegment:(NSString *)arg1;
- (int)longTermAverageTBRForSegment:(NSString *)arg1;
- (int)learntBitrateForSegment:(NSString *)arg1 defaultValue:(int)arg2;
- (void)updateSegment:(NSString *)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;
- (int)adaptiveLearningState;
@end

