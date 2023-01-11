//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager;

__attribute__((visibility("hidden")))
@interface FPDCacheDeleteService : NSObject
{
    FPDExtensionManager *_extensionManager;
}

+ (int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg1;
@property(retain, nonatomic) FPDExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
- (void).cxx_destruct;
- (void)dumpStateTo:(id)arg1;
- (id)evictableByProviderDomainID:(int)arg1;
- (id)queryWithAttributes:(id)arg1;
- (void)evictItems:(id)arg1;
- (void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePurgeableFilesOnVolume:(id)arg1 forUrgency:(int)arg2 sizeOnly:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (id)allStorageVolumes;
- (id)volumesByProviderDomain;
- (_Bool)getVolume:(int *)arg1 forPath:(id)arg2;
- (_Bool)shouldSearchableItem:(id)arg1 beEvictedAtUrgency:(int)arg2;
- (void)registerActivity;
- (id)nonPurgableSpacePerProviderOnVolume:(id)arg1;
- (id)purgableSpaceForAllUrgenciesOnVolume:(id)arg1;
- (void)start;

@end
