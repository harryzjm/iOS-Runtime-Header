//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GCDeviceOnDiskDB : NSObject
{
    NSArray *_configurationBundles;
    NSArray *_bundles;
}

- (void).cxx_destruct;
@property(readonly, copy) NSArray *configurationBundles; // @synthesize configurationBundles=_configurationBundles;
- (id)bestModelMatchingDevice:(id)arg1;
- (id)init;
- (id)initWithBundles:(id)arg1;

@end

