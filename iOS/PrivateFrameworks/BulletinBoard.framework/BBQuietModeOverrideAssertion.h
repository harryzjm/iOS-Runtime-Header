//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAction;

@interface BBQuietModeOverrideAssertion : NSObject
{
    BSAction *_assertionAction;
    CDUnknownBlockType _invalidationHandler;
}

- (void).cxx_destruct;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isValid;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAction:(id)arg1;

@end

