//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLObjectWithLabel.h>

@class IOSurfaceSharedEvent, MTLSimDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimSharedEvent : _MTLObjectWithLabel
{
    MTLSimDevice *_device;
    unsigned int _reference;
    unsigned long long _signaledValue;
}

@property(readonly) _Bool supportsRollback;
@property(readonly, nonatomic) IOSurfaceSharedEvent *IOSurfaceSharedEvent;
- (_Bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;
@property unsigned long long signaledValue; // @dynamic signaledValue;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)newSharedEventHandle;
- (unsigned int)eventRef;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 reference:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

