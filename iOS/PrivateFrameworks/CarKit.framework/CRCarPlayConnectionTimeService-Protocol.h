//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARConnectionEvent;

@protocol CRCarPlayConnectionTimeService
- (void)fetchConnectionSessions:(void (^)(NSArray *, NSError *))arg1;
- (void)clearHistoricalConnectionDataWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)recordConnectionEvent:(CARConnectionEvent *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

