//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, SAUIDelayedActionCommand;

@interface _AFUIAssertingDelayedActionCommand : NSObject
{
    SAUIDelayedActionCommand *_command;
    BKSProcessAssertion *_assertion;
}

@property(readonly, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(readonly, nonatomic) SAUIDelayedActionCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 assertion:(id)arg2;

@end
