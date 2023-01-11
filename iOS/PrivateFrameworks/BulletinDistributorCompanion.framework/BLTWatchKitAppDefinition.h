//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BLTWatchKitAppDefinition : NSObject
{
    _Bool _isInstalled;
    _Bool _runsIndependently;
    NSString *_containerBundleID;
    NSString *_watchKitAppBundleID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool runsIndependently; // @synthesize runsIndependently=_runsIndependently;
@property(readonly, nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(readonly, nonatomic) NSString *watchKitAppBundleID; // @synthesize watchKitAppBundleID=_watchKitAppBundleID;
@property(readonly, nonatomic) NSString *containerBundleID; // @synthesize containerBundleID=_containerBundleID;
- (id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(_Bool)arg3 runsIndependently:(_Bool)arg4;

@end
