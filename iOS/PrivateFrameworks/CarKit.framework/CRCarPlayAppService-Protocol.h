//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@protocol CRCarPlayAppService
- (void)requestCarCapabilitiesStatus:(NSDictionary *)arg1 withReply:(void (^)(CRCarPlayCapabilities *))arg2;
- (void)requestCarCapabilitiesUpdate;
- (void)requestDenylistUpdate;
@end

