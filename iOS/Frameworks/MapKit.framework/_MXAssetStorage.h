//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXAssetStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableDictionary *_storage;
    NSMutableSet *_loadingKeys;
    NSMutableDictionary *_fetchBlocks;
}

- (void).cxx_destruct;
- (void)fetchAssetForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAsset:(id)arg1 forKey:(id)arg2;
- (void)loadAssetForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

