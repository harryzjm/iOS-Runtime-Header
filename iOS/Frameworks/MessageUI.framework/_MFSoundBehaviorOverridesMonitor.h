//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MFFuture;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MFSoundBehaviorOverridesMonitor : NSObject
{
    int _condition;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) MFFuture *behaviorOverrideTypes;
- (void)_activeOverrideTypesChanged:(id)arg1;
- (void)_beginGeneratingActiveOverrideTypeChanges;
- (id)init;

@end

