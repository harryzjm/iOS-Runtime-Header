//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject
{
    _Bool _active;
    UIAutonomousSingleAppModeConfiguration *_effectiveConfiguration;
}

+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)__gaxTrampoline_currentlyActiveSession;
+ (id)currentlyActiveSession;
- (void).cxx_destruct;
@property(copy, nonatomic) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration; // @synthesize effectiveConfiguration=_effectiveConfiguration;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)__gaxTrampoline_endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)_guidedAccessStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithEffectiveConfiguration:(id)arg1;

@end
