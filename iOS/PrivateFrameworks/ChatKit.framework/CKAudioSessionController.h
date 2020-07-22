//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CKAudioSessionController : NSObject
{
    _Bool _active;
    _Bool _dirty;
    unsigned long long _options;
}

+ (id)queue;
+ (id)shareInstance;
@property unsigned long long options; // @synthesize options=_options;
@property(getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
- (void)audioSessionMediaServicesWereLost:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (void)audioSessionRouteChange:(id)arg1;
- (void)configureAudioSessionWithOptions:(unsigned long long)arg1;
- (void)setActive:(_Bool)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly) _Bool shouldDuckOthers;
@property(readonly) _Bool shouldStopPlayingWhenSilent;
@property(readonly) _Bool shouldUseSpeaker;
- (void)deactivate;
- (void)activateWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

@end

