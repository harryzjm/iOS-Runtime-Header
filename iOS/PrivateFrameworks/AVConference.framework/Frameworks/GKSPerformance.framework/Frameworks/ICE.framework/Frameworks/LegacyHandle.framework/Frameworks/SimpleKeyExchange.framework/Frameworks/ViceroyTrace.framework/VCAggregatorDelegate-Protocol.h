//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ViceroyTrace/NSObject-Protocol.h>

@class NSDictionary;

@protocol VCAggregatorDelegate <NSObject>
- (void)reportQR:(NSDictionary *)arg1;
- (void)report:(NSDictionary *)arg1 segmentDirection:(int)arg2;
@end

