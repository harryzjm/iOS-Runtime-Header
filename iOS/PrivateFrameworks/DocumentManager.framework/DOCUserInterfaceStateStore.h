//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DOCUserInterfaceStateStore : NSObject
{
    NSMutableDictionary *_uiStateMap;
}

+ (id)sharedStore;
@property(retain) NSMutableDictionary *uiStateMap; // @synthesize uiStateMap=_uiStateMap;
- (void).cxx_destruct;
- (id)docUserDefaults;
- (id)_sortedInterfaceStateKeys;
- (void)_pruneOldState;
- (void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:(id)arg1;
- (void)_writeUserInterfaceStateToDefaultsForConfiguration:(id)arg1;
- (id)_loadUserInterfaceStateFromDefaultsForConfiguration:(id)arg1;
- (void)purgeStateForConfiguration:(id)arg1;
- (void)updateInterfaceState:(id)arg1 forConfiguration:(id)arg2;
- (id)mostRecentInterfaceStateForConfiguration:(id)arg1;
- (id)interfaceStateForConfiguration:(id)arg1;
- (id)init;

@end
