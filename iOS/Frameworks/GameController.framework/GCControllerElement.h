//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GCControllerElement : NSObject
{
}

- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1 queue:(id)arg2;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;
- (_Bool)_setValue:(float)arg1;
@property(readonly, nonatomic, getter=isAnalog) _Bool analog;
@property(readonly, nonatomic) __weak GCControllerElement *collection;
- (float)value;
- (id)controller;

@end

