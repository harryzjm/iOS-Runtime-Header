//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCWebURLResolutionEndpointConnection-Protocol.h>

@class NBHashBucketer, NBURLCanonicalizer, NBURLHasher, NFLazy, NSURL;
@protocol FCCoreConfigurationManager;

@interface FCWebURLResolutionEndpointConnection : NSObject <FCWebURLResolutionEndpointConnection>
{
    id <FCCoreConfigurationManager> _configurationManager;
    NFLazy *_lazyStoreFrontIDPromise;
    NSURL *_cachesDirectoryURL;
    NBURLCanonicalizer *_canonicalizer;
    NBURLHasher *_hasher;
    NBHashBucketer *_bucketer;
}

+ (id)_bloomFilterScheduler;
+ (id)_sharedProxyingScheduler;
- (void).cxx_destruct;
@property(readonly, nonatomic) NBHashBucketer *bucketer; // @synthesize bucketer=_bucketer;
@property(readonly, nonatomic) NBURLHasher *hasher; // @synthesize hasher=_hasher;
@property(readonly, nonatomic) NBURLCanonicalizer *canonicalizer; // @synthesize canonicalizer=_canonicalizer;
@property(readonly, copy, nonatomic) NSURL *cachesDirectoryURL; // @synthesize cachesDirectoryURL=_cachesDirectoryURL;
@property(readonly, nonatomic) NFLazy *lazyStoreFrontIDPromise; // @synthesize lazyStoreFrontIDPromise=_lazyStoreFrontIDPromise;
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
- (id)_assetHost;
- (id)_articleIDWithHash:(id)arg1 lists:(id)arg2 storeFrontID:(id)arg3;
- (void)_fetchListsPromiseThroughProxy:(_Bool)arg1 withResourceURL:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_fetchListsPromiseWithConfig:(id)arg1 coreConfiguration:(id)arg2 hash:(id)arg3 qualityOfService:(long long)arg4;
- (id)_hashOfURLWithWebURL:(id)arg1 config:(id)arg2;
- (id)_fetchBloomFilterInfoPromiseWithQualityOfService:(long long)arg1;
- (id)_fetchConfigPromiseWithQualityOfService:(long long)arg1;
- (id)_fetchConfigIfNeededPromiseWithCoreConfiguration:(id)arg1 qualityOfService:(long long)arg2;
- (id)_fetchCoreConfigurationIfNeededPromiseWithQualityOfService:(long long)arg1;
- (void)fetchWebURLBloomFilterInfoWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveWebURL:(id)arg1 withQualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConfigurationManager:(id)arg1 cachesDirectoryURL:(id)arg2;
- (id)init;

@end
