//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKRule.h"

__attribute__((visibility("hidden")))
@interface _GKBlockRule : GKRule
{
    CDUnknownBlockType _predicate;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
- (void)performActionWithSystem:(id)arg1;
- (_Bool)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;

@end

