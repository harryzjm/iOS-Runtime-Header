//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class HMHomeManager, NSString;

__attribute__((visibility("hidden")))
@interface __HMHomeDataSyncOperation : HMFOperation
{
    _Bool _refresh;
    HMHomeManager *_manager;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(getter=isRefresh) _Bool refresh; // @synthesize refresh=_refresh;
@property(readonly) __weak HMHomeManager *manager; // @synthesize manager=_manager;
- (void)main;
- (id)initWithHomeManager:(id)arg1 timeout:(double)arg2;
- (id)initWithHomeManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

