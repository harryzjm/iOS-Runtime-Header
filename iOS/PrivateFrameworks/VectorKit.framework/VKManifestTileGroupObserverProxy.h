//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKManifestTileGroupObserverProxy : NSObject
{
    function_3b023522 _willChangeActiveTileGroup;
    function_feb27e2a _didChangeActiveTileGroup;
    function_276fc590 _experimentConfigurationDidChange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property function_276fc590 experimentConfigurationDidChange; // @synthesize experimentConfigurationDidChange=_experimentConfigurationDidChange;
@property function_feb27e2a didChangeActiveTileGroup; // @synthesize didChangeActiveTileGroup=_didChangeActiveTileGroup;
@property function_3b023522 willChangeActiveTileGroup; // @synthesize willChangeActiveTileGroup=_willChangeActiveTileGroup;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

