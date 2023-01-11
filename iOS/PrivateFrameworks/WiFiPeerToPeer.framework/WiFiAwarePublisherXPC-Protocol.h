//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WiFiPeerToPeer/NSObject-Protocol.h>

@class NSData, WiFiAwareDataSessionIssueReport, WiFiAwarePublishDatapathServiceSpecificInfo, WiFiAwarePublishServiceSpecificInfo, WiFiAwarePublisherDataSessionHandle, WiFiMACAddress;

@protocol WiFiAwarePublisherXPC <NSObject>
- (void)reportIssue:(WiFiAwareDataSessionIssueReport *)arg1 forDataSession:(WiFiAwarePublisherDataSessionHandle *)arg2;
- (void)updateServiceSpecificInfo:(WiFiAwarePublishServiceSpecificInfo *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)updateDatapathServiceSpecificInfo:(WiFiAwarePublishDatapathServiceSpecificInfo *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)terminateDataSession:(WiFiAwarePublisherDataSessionHandle *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)sendMessage:(NSData *)arg1 toPeerAddress:(WiFiMACAddress *)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(void (^)(long long))arg4;
- (void)cancel;
@end
