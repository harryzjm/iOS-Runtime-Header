//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HMCameraControl.h"

@class HMCharacteristic;

__attribute__((visibility("hidden")))
@interface _HMCameraAudioControl : _HMCameraControl
{
    HMCharacteristic *_mute;
    HMCharacteristic *_volume;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMCharacteristic *volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) HMCharacteristic *mute; // @synthesize mute=_mute;
- (id)initWithCameraProfile:(id)arg1 profileUniqueIdentifier:(id)arg2 service:(id)arg3;

@end

