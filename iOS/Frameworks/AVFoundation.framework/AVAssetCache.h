//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVAssetCache : NSObject
{
}

+ (id)assetCacheWithURL:(id)arg1;
- (id)allKeys;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (id)URL;
- (long long)currentSize;
- (long long)maxEntrySize;
- (long long)maxSize;
@property(readonly, nonatomic, getter=isPlayableOffline) _Bool playableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)_init;

@end

