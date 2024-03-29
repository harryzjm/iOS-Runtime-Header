//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _LTPlaybackService;
@protocol OS_dispatch_queue, _LTTranslationEngine;

__attribute__((visibility("hidden")))
@interface _LTServerSpeakSession : NSObject
{
    id <_LTTranslationEngine> _engine;
    _LTPlaybackService *_player;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)speak:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3 audioStartHandler:(CDUnknownBlockType)arg4;
- (void)_playback:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3 audioStartHandler:(CDUnknownBlockType)arg4;
- (id)_createTemporaryOutputFileWithURL:(id)arg1;
- (id)initWithEngine:(id)arg1;

@end

