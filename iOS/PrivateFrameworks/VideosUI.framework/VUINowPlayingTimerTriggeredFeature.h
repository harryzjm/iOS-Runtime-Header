//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimerTriggeredFeature : NSObject
{
    _Bool _active;
    _Bool _autoRemove;
    _Bool _repeats;
    _Bool _backgroundTimer;
    double _duration;
    id _userInfo;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic, getter=isBackgroundTimer) _Bool backgroundTimer; // @synthesize backgroundTimer=_backgroundTimer;
@property(readonly, nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(nonatomic, getter=shouldAutoRemove) _Bool autoRemove; // @synthesize autoRemove=_autoRemove;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(_Bool)arg3 backgroundTimer:(_Bool)arg4;
- (id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

