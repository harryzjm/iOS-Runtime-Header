//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEFilterExtensionProviderHostProtocol-Protocol.h>

@class NEAppInfo, NEFilterFlow, NEFilterReport;

@protocol NEFilterDataExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>
- (void)report:(NEFilterReport *)arg1;
- (void)getSourceAppInfo:(NEAppInfo *)arg1 completionHandler:(void (^)(NEAppInfo *))arg2;
- (void)fetchCurrentRulesForFlow:(NEFilterFlow *)arg1 completionHandler:(void (^)(NEFilterControlVerdict *))arg2;
- (void)sendSocketContentFilterRequest;
- (void)sendBrowserContentFilterServerRequest;
@end

