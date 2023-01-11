//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, UIFocusUpdateContext;

__attribute__((visibility("hidden")))
@interface _UIFocusUpdateReport : NSObject
{
    UIFocusSystem *_focusSystem;
    UIFocusUpdateContext *_context;
}

@property(retain, nonatomic) UIFocusUpdateContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldLog;
- (id)initWithFocusSystem:(id)arg1;
- (id)init;

@end
