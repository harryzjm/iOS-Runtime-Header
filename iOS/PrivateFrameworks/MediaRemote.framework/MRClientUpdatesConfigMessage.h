//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MRClientUpdatesConfigMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _Bool outputDeviceUpdates;
@property(readonly, nonatomic) _Bool keyboardUpdates;
@property(readonly, nonatomic) _Bool volumeUpdates;
@property(readonly, nonatomic) _Bool artworkUpdates;
@property(readonly, nonatomic) _Bool nowPlayingUpdates;
- (id)initWithNowPlayingUpdates:(_Bool)arg1 artworkUpdates:(_Bool)arg2 volumeUpdates:(_Bool)arg3 keyboardUpdates:(_Bool)arg4 outputDeviceUpdates:(_Bool)arg5;

@end

