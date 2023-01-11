//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSString;
@protocol AMSBagProtocol;

@interface AMSRatingsProviderTask <AMSBagConsumer>
{
    unsigned long long _mediaType;
    NSString *_storeFront;
    id <AMSBagProtocol> _bag;
    NSString *_clientIdentifier;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) NSString *storeFront; // @synthesize storeFront=_storeFront;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (id)_cachedRatingsData;
- (id)cacheTitle;
- (id)_cachePath;
- (id)_cacheDirectory;
- (void)_clearCacheIfNeeded;
- (_Bool)_hasCachedData;
- (id)_urlForMediaType:(unsigned long long)arg1;
- (id)performTask;
- (id)initWithMediaType:(unsigned long long)arg1 storeFront:(id)arg2 clientIdentifier:(id)arg3 bag:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
