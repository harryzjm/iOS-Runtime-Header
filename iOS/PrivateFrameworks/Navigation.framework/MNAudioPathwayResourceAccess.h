//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNObserverHashTable, NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNAudioPathwayResourceAccess : NSObject
{
    MNObserverHashTable *_observers;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    _Bool _enableHFPUse;
    _Bool _wantsVolumeControl;
    NSDictionary *_hfpRoute;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *hfpRoute; // @synthesize hfpRoute=_hfpRoute;
@property(nonatomic) _Bool wantsVolumeControl; // @synthesize wantsVolumeControl=_wantsVolumeControl;
@property(nonatomic) _Bool enableHFPUse; // @synthesize enableHFPUse=_enableHFPUse;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithHFPEnabled:(_Bool)arg1;

@end
