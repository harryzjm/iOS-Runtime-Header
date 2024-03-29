//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBSKeyboardFocusService;

__attribute__((visibility("hidden")))
@interface _UIONavigationBarTitleRenamerConnectionAction
{
    SBSKeyboardFocusService *_kfService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBSKeyboardFocusService *kfService; // @synthesize kfService=_kfService;
- (void)performActionFromConnection:(id)arg1;
- (void)_removeViewFromHierarchyForConnection:(id)arg1 session:(id)arg2;
- (_Bool)_addViewToHierarchyForConnection:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (void)_teardownKeyboardEventDeferralForConnection:(id)arg1;
- (void)_setupKeyboardEventDeferralForConnection:(id)arg1;
- (_Bool)isPermitted;
- (id)initWithSession:(id)arg1 action:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end

