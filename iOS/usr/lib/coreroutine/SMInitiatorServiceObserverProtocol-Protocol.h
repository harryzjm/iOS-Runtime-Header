//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSUUID, SMCache;

@protocol SMInitiatorServiceObserverProtocol <NSObject>
- (void)onInitiatorSafetyCacheChangeForSessionID:(NSUUID *)arg1 phoneCache:(SMCache *)arg2 watchCache:(SMCache *)arg3;
@end

