//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSDarwinNotificationObserver : NSObject
{
    CDUnknownBlockType _observerBlock;
    struct __CFString *_notificationName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CFString *notificationName; // @synthesize notificationName=_notificationName;
@property(copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
- (void)dealloc;
- (id)initWithNotificationName:(struct __CFString *)arg1 additionalBehavior:(long long)arg2;

@end

