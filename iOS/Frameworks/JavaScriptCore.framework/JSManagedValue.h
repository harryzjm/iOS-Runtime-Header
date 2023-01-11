//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSValue, NSMapTable;

@interface JSManagedValue : NSObject
{
    struct Weak<JSC::JSGlobalObject> m_globalObject;
    struct RefPtr<JSC::JSLock, WTF::DumbPtrTraits<JSC::JSLock>> m_lock;
    struct JSWeakValue m_weakValue;
    NSMapTable *m_owners;
}

+ (id)managedValueWithValue:(id)arg1 andOwner:(id)arg2;
+ (id)managedValueWithValue:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disconnectValue;
@property(readonly) JSValue *value;
- (void)didRemoveOwner:(id)arg1;
- (void)didAddOwner:(id)arg1;
- (void)dealloc;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

