//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol _TtP10SessionKit24SessionListenerXPCServer_
- (void)cancelSubscriptionToSessionDescriptors;
- (void)subscribeToSessionDescriptors;
- (NSData *)subscribeToSessionPayloadsWithSessionIdentifiers:(NSData *)arg1 error:(id *)arg2;
- (NSData *)sessionDescriptorFor:(NSString *)arg1;
- (NSData *)sessionDescriptors;
@end

