//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocs/BRCancellable-Protocol.h>

@class NSArray, NSDictionary;

@protocol BRItemNotificationReceiving <BRCancellable>
- (void)receiveProgressUpdates:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)receiveUpdates:(NSArray *)arg1 logicalExtensions:(NSDictionary *)arg2 physicalExtensions:(NSDictionary *)arg3 reply:(void (^)(void))arg4;
@end

