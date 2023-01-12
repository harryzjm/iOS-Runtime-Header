//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _GCGamepadEventKeyboardEventAdapterConfig;

__attribute__((visibility("hidden")))
@interface _GCGamepadEventKeyboardEventAdapter : NSObject
{
    id _observation;
    _GCGamepadEventKeyboardEventAdapterConfig *_config;
    NSArray *_observers;
}

- (void).cxx_destruct;
@property(copy) NSArray *observers; // @synthesize observers=_observers;
- (id)observeGamepadEvents:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1 source:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

