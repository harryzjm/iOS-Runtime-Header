//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject
{
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)pluginManagerForBundle:(id)arg1;
- (id)mainPluginManager;
- (void)registerPluginsFromBundle:(id)arg1;
- (void)registerPlugins;
- (id)_init;

@end

