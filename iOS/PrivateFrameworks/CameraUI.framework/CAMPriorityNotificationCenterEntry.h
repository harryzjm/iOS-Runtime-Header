//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMPriorityNotificationCenterEntry : NSObject
{
    id _observer;
    SEL _selector;
    id _object;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (id)description;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

@end
