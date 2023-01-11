//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKJSManagedArray, JSManagedValue, NSTimer;

@interface IKJSTimerContext : NSObject
{
    _Bool _isRepeating;
    NSTimer *_timer;
    id _ownerObject;
    JSManagedValue *_managedCallback;
    IKJSManagedArray *_managedArgs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isRepeating; // @synthesize isRepeating=_isRepeating;
@property(readonly, retain, nonatomic) IKJSManagedArray *managedArgs; // @synthesize managedArgs=_managedArgs;
@property(readonly, retain, nonatomic) JSManagedValue *managedCallback; // @synthesize managedCallback=_managedCallback;
@property(readonly, retain, nonatomic) id ownerObject; // @synthesize ownerObject=_ownerObject;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)dealloc;
- (void)removeManagedReferences;
- (id)description;
- (id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(_Bool)arg3 ownerObject:(id)arg4 timer:(id)arg5;

@end
