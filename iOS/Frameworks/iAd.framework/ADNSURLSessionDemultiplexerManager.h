//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface ADNSURLSessionDemultiplexerManager : NSObject
{
    NSArray *_protocolClasses;
    NSMutableDictionary *_sessionDemultiplexerForIdentifier;
    NSObject<OS_dispatch_queue> *_demuxManagerQueue;
    NSURLSessionConfiguration *_proxySessionConfigurationLegacy;
    NSURLSessionConfiguration *_proxySessionConfigurationConnect;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSURLSessionConfiguration *proxySessionConfigurationConnect; // @synthesize proxySessionConfigurationConnect=_proxySessionConfigurationConnect;
@property(retain, nonatomic) NSURLSessionConfiguration *proxySessionConfigurationLegacy; // @synthesize proxySessionConfigurationLegacy=_proxySessionConfigurationLegacy;
@property(nonatomic) NSObject<OS_dispatch_queue> *demuxManagerQueue; // @synthesize demuxManagerQueue=_demuxManagerQueue;
@property(retain) NSMutableDictionary *sessionDemultiplexerForIdentifier; // @synthesize sessionDemultiplexerForIdentifier=_sessionDemultiplexerForIdentifier;
@property(copy) NSArray *protocolClasses; // @synthesize protocolClasses=_protocolClasses;
- (long long)pretapRequestCountForIdentifier:(id)arg1;
- (void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1;
- (id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2 proxyType:(long long)arg3;
- (id)sessionConfigurationForProxyType:(long long)arg1;
- (void)configVersionDidChange;
- (void)proxyTypeDidChange;
- (void)contentProxyURLConnectDidChange;
- (void)contentProxyURLDidChange;
- (id)init;
- (void)dealloc;

@end

