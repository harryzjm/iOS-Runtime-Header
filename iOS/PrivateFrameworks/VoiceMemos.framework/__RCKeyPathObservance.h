//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface __RCKeyPathObservance : NSObject
{
    id <NSObject> _object;
    NSArray *_keyPaths;
    CDUnknownBlockType _observer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
@property(nonatomic) __weak id <NSObject> object; // @synthesize object=_object;
- (void)dealloc;
- (void)remove;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

