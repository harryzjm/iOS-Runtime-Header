//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIUpdateTarget : NSObject
{
    struct _UIInstrumentedCADisplay _display;
    struct _UIInstrumentedCADynamicFrameRateSource _frameSource;
    unsigned int _displayId;
    _Bool _frameSourceActive;
    unsigned long long _epsilonDuration;
    unsigned long long _minFrameDuration;
    long long _presentationLagDuration[2];
    long long _commitTimeLeadDuration;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

