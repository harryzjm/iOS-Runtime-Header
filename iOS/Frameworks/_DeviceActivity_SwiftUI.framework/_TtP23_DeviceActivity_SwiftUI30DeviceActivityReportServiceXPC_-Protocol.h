//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol _TtP23_DeviceActivity_SwiftUI30DeviceActivityReportServiceXPC_
- (void)fetchActivitySegmentWithUserAltDSID:(NSString *)arg1 deviceIdentifier:(NSString *)arg2 segmentInterval:(long long)arg3 recordName:(NSString *)arg4:(void (^)(NSData *, NSError *))arg5;
- (void)updateClientConfiguration:(NSData *)arg1:(void (^)(NSError *))arg2;
- (void)discoverClientExtensionWithConfiguration:(NSData *)arg1:(void (^)(NSError *))arg2;
@end

