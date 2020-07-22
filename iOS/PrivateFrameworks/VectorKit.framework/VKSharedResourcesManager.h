//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VKSharedResourcesManager : NSObject
{
    struct mutex _lock;
    NSMapTable *_tilegroupIdentifierToResources;
}

+ (void)removeResourceUser:(id)arg1;
+ (void)addResourceUser:(id)arg1;
+ (id)sharedResourcesForConfiguration:(id)arg1;
+ (id)defaultManifestConfiguration;
+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resourcesForConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;

@end
