//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/BSAction.h>

@class _UIOServerActionOriginContext;

__attribute__((visibility("hidden")))
@interface _UIOServerAction : BSAction
{
    _UIOServerActionOriginContext *_originContext;
}

- (void).cxx_destruct;
- (_Bool)isPermitted;
- (void)performActionFromConnection:(id)arg1;
@property(readonly, nonatomic) _UIOServerActionOriginContext *originContext;
- (id)initWithOriginContext:(id)arg1 info:(id)arg2 responder:(id)arg3;

@end

