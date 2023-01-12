//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCallbackContextRegistry, NSString;

__attribute__((visibility("hidden")))
@interface AVClientBlockKVONotifier : NSObject
{
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    NSObject *_object;
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
}

- (void)cancelCallbacks;
- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)start;
@property(readonly, nonatomic) NSObject *observedObject;
- (void)dealloc;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

