//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CATState;

@interface CATTransition : NSObject
{
    CATState *_state;
    SEL _action;
}

+ (id)new;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak CATState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (id)initWithState:(id)arg1 action:(SEL)arg2;
- (id)init;

@end

