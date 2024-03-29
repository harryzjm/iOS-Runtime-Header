//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSBacklightSceneVisualState, NSDate;

__attribute__((visibility("hidden")))
@interface BLSHEnvironmentTransitionStateTarget : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _lock_performedBacklightRamp;
    _Bool _didUpdateInitialState;
    _Bool _didCompleteAnimation;
    unsigned long long _sequenceID;
    BLSBacklightSceneVisualState *_visualState;
    NSDate *_presentationDate;
    long long _backlightState;
}

- (void).cxx_destruct;
@property _Bool didCompleteAnimation; // @synthesize didCompleteAnimation=_didCompleteAnimation;
@property _Bool didUpdateInitialState; // @synthesize didUpdateInitialState=_didUpdateInitialState;
@property long long backlightState; // @synthesize backlightState=_backlightState;
@property(readonly, nonatomic) NSDate *presentationDate; // @synthesize presentationDate=_presentationDate;
@property(readonly, nonatomic) BLSBacklightSceneVisualState *visualState; // @synthesize visualState=_visualState;
@property(readonly, nonatomic) unsigned long long sequenceID; // @synthesize sequenceID=_sequenceID;
- (_Bool)isEqualToVisualState:(id)arg1 presentationDate:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (_Bool)setAndTestDidPerformBacklightRamp;
- (id)initWithSequenceID:(unsigned long long)arg1 backlightState:(long long)arg2 visualState:(id)arg3 presentationDate:(id)arg4;
- (id)initWithTarget:(id)arg1 visualState:(id)arg2 presentationDate:(id)arg3;
- (id)initWithSequenceID:(unsigned long long)arg1 backlightState:(long long)arg2;

@end

