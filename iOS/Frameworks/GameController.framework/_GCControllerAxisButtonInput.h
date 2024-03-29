//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCControllerButtonInput.h"

@class GCControllerAxisInput;

__attribute__((visibility("hidden")))
@interface _GCControllerAxisButtonInput : GCControllerButtonInput
{
    _Bool _positive;
    GCControllerAxisInput *_axis;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPositive) _Bool positive; // @synthesize positive=_positive;
@property(nonatomic) __weak GCControllerAxisInput *axis; // @synthesize axis=_axis;
- (id)unmappedLocalizedName;
- (id)localizedName;
- (float)value;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (_Bool)_setValue:(float)arg1;
- (_Bool)_commitPendingValueOnQueue:(id)arg1;
- (void)_setPendingValue:(float)arg1;
- (_Bool)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;
- (_Bool)_setValueFromAxisButton:(float)arg1;
- (_Bool)isAnalog;
- (id)collection;
- (id)initWithAxis:(id)arg1 positive:(_Bool)arg2;

@end

