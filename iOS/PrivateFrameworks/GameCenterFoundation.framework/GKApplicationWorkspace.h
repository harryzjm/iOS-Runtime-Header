//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject
{
    LSApplicationWorkspace *_lsWorkspace;
}

+ (id)defaultWorkspace;
@property(retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // @synthesize lsWorkspace=_lsWorkspace;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;
- (_Bool)applicationIsInstalled:(id)arg1;
- (void)openGameCenterSettings;
- (void)openURL:(id)arg1;
- (void)openICloudSettings;
- (void)openSettings;
- (id)applicationProxyForBundleID:(id)arg1;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1;

@end

