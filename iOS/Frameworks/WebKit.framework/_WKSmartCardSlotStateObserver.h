//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _WKSmartCardSlotStateObserver : NSObject
{
    struct WeakPtr<WebKit::CcidService, WTF::DefaultWeakPtrImpl> m_service;
    struct RetainPtr<TKSmartCardSlot> m_slot;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithService:(void *)arg1 slot:(void *)arg2;

@end

