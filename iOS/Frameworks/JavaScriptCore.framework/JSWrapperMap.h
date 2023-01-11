//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface JSWrapperMap : NSObject
{
    NSMutableDictionary *m_classMap;
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id>>, std::__1::default_delete<JSC::WeakGCMap<id, JSC::JSObject, WTF::DefaultHash<id>, WTF::HashTraits<id>>>> m_cachedJSWrappers;
    NSMapTable *m_cachedObjCWrappers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;
- (id)jsWrapperForObject:(id)arg1 inContext:(id)arg2;
- (id)classInfoForClass:(Class)arg1;
- (void)dealloc;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg1;

@end
