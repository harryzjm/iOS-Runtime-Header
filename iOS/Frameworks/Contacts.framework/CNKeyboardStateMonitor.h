//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface CNKeyboardStateMonitor : NSObject
{
    long long _keyboardState;
    id <NSObject> _didShowObserver;
    id <NSObject> _didHideObserver;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> didHideObserver; // @synthesize didHideObserver=_didHideObserver;
@property(retain, nonatomic) id <NSObject> didShowObserver; // @synthesize didShowObserver=_didShowObserver;
@property long long keyboardState; // @synthesize keyboardState=_keyboardState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

