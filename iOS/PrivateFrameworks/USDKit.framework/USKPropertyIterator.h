//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface USKPropertyIterator : NSObject
{
    struct vector<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty>> _properties;
    struct __wrap_iter<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty *> {
        struct UsdProperty *__i;
    } _it;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithProperties:(const void *)arg1;

@end

