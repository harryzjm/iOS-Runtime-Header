//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHHapticEngine;

__attribute__((visibility("hidden")))
@interface SSCoreHapticsPlayer : NSObject
{
    CHHapticEngine *_engine;
    unsigned long long _ssid;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long ssid; // @synthesize ssid=_ssid;
@property(readonly) CHHapticEngine *engine; // @synthesize engine=_engine;
- (void)prewarm:(_Bool)arg1;
- (void)stop:(_Bool)arg1;
- (_Bool)playWithOptions:(id)arg1 completionCallbackToken:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithAudio:(id)arg1 hapticDictionary:(id)arg2 error:(id *)arg3;
- (id)initWithAudio:(id)arg1 haptic:(id)arg2 error:(id *)arg3;
- (id)init;

@end

