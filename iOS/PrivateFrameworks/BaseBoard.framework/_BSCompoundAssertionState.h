//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSCompoundAssertionState-Protocol.h>

@class NSOrderedSet, NSSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState>
{
    _Bool _active;
    NSOrderedSet *_context;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly) NSOrderedSet *orderedContext;
@property(readonly) NSSet *context;
@property(readonly, getter=isActive) _Bool active;

@end
