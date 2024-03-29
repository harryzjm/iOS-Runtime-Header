//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMBiomeScheduler, NSString;

__attribute__((visibility("hidden")))
@interface _HDSPBiomeBridge : NSObject
{
    BMBiomeScheduler *_scheduler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BMBiomeScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void)sendEvent:(id)arg1 toStream:(id)arg2;
- (id)subscribe:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

