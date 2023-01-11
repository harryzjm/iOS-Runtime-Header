//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject
{
    SBPressSequenceSettings *_settings;
}

@property(readonly, nonatomic) SBPressSequenceSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (long long)_modeForDesiredIndex:(unsigned long long)arg1 isDownEvent:(_Bool)arg2;
- (struct _SBPressSequenceValidatorBounds)_pressUpBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (struct _SBPressSequenceValidatorBounds)_pressDownBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(_Bool)arg2;
- (_Bool)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(_Bool)arg2 duration:(double)arg3;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end
