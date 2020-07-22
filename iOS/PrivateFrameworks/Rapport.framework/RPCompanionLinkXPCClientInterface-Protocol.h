//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, RPCompanionLinkDevice;

@protocol RPCompanionLinkXPCClientInterface
- (void)companionLinkReceivedRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg3;
- (void)companionLinkReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2;
- (void)companionLinkLocalDeviceUpdated:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkLostDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkFoundDevice:(RPCompanionLinkDevice *)arg1;
@end
