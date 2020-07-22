//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNContactTargetActionWrapper : NSObject
{
    id _target;
    SEL _action;
}

@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)description;
- (void)performActionWithSender:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
