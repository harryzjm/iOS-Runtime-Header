//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextCursorAssertion-Protocol.h>

@class NSString, UITextCursorAssertionController;

__attribute__((visibility("hidden")))
@interface _UITextCursorAssertion : NSObject <UITextCursorAssertion>
{
    NSString *_reason;
    unsigned long long _options;
    UITextCursorAssertionController *_controller;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITextCursorAssertionController *controller; // @synthesize controller=_controller;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithReason:(id)arg1 options:(unsigned long long)arg2 controller:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
