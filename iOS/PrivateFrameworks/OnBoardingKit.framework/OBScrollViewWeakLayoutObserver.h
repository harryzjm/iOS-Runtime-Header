//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UIScrollViewLayoutObserver;

__attribute__((visibility("hidden")))
@interface OBScrollViewWeakLayoutObserver : NSObject
{
    OBScrollViewWeakLayoutObserver *_selfReference;
    id <_UIScrollViewLayoutObserver> _weakLayoutObserver;
}

- (void).cxx_destruct;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (id)initWithLayoutObserver:(id)arg1;

@end

