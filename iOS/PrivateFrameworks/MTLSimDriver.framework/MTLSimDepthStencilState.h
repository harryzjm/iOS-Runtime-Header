//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/_MTLDepthStencilState.h>

@class NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimDepthStencilState : _MTLDepthStencilState
{
    unsigned int _reference;
}

- (unsigned int)depthStencilRef;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 reference:(unsigned int)arg2 device:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *label;
@property(readonly) _Bool readsDepth;
@property(readonly) _Bool readsStencil;
@property(readonly) Class superclass;
@property(readonly) _Bool writesDepth;
@property(readonly) _Bool writesStencil;

@end

