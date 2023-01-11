//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLCaptureScope-Protocol.h>

@class NSString;
@protocol MTLCommandQueue, MTLDevice;

@interface MTLCaptureScope <MTLCaptureScope>
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
}

@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (void)endScope;
- (void)beginScope;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label; // @dynamic label;
@property(readonly) Class superclass;

@end
