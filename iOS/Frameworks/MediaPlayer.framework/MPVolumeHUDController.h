//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableSet;

@interface MPVolumeHUDController : NSObject
{
    NSHashTable *_scenes;
    NSMutableSet *_displays;
    NSMutableSet *_categories;
    _Bool _needsUpdate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateVisibilityForVolumeDisplays:(id)arg1 inWindowScene:(id)arg2;
- (void)_updateVisibility;
- (void)_addCategory:(id)arg1;
- (void)unregisterView:(id)arg1 inContext:(id)arg2;
- (void)registerView:(id)arg1 inContext:(id)arg2;
@property(readonly, nonatomic) id mainContext;
- (void)setNeedsUpdate;
- (void)removeVolumeDisplay:(id)arg1;
- (void)addVolumeDisplay:(id)arg1;
- (id)init;

@end
