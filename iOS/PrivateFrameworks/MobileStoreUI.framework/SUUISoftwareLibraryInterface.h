//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SUUISoftwareLibraryInterface : NSObject
{
}

- (id)stateForLibraryItem:(id)arg1;
- (_Bool)performActionForLibraryItem:(id)arg1;
- (id)exposedPlatformItemKinds;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

