//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface OKMediaFeederURLs
{
    NSArray *_mediaURLs;
}

+ (_Bool)supportLiveUpdates;
+ (_Bool)isRemote;
+ (id)supportedSettings;
+ (id)mediaFeederWithMediaURLs:(id)arg1;
+ (id)mediaFeederWithMediaObjects:(id)arg1;
- (id)indexesForMediaObjects:(id)arg1;
- (id)mediaObjectURLsAtIndexes:(id)arg1;
- (id)mediaObjectsAtIndexes:(id)arg1;
- (unsigned long long)numberOfMediaObjects;
- (id)reloadMediaObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)feederSettings;
- (_Bool)canBePersisted;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)initWithMediaURLs:(id)arg1;
- (id)initWithMediaObjects:(id)arg1;
- (id)init;

@end
