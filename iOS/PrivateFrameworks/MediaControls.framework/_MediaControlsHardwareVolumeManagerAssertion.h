//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaControls/MediaControlsInvalidatable-Protocol.h>

@class MediaControlsHardwareVolumeManager, NSString;

__attribute__((visibility("hidden")))
@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable>
{
    MediaControlsHardwareVolumeManager *_volumeManager;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) __weak MediaControlsHardwareVolumeManager *volumeManager; // @synthesize volumeManager=_volumeManager;
- (void)dealloc;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
