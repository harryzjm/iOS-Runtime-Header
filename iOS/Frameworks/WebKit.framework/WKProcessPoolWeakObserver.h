//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKProcessPoolWeakObserver : NSObject
{
    struct WeakPtr<WebKit::WebProcessPool, WTF::EmptyCounter> m_weakPtr;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWeakPtr:(void *)arg1;

@end

