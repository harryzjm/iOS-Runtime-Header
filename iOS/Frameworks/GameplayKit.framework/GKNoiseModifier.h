//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GKNoiseModifier : NSObject
{
    NSMutableArray *_inputModules;
}

- (void).cxx_destruct;
- (id)cloneModule;
- (void)setInputModule:(id)arg1 atIndex:(int)arg2;
- (id)inputModuleAtIndex:(int)arg1;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

