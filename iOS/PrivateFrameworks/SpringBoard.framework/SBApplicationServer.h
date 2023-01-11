//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSServiceFacility.h>

@protocol SBApplicationServerHarmonyDelegate, SBApplicationServerMiscDelegate, SBApplicationServerMultiwindowDelegate, SBApplicationServerShortcutDelegate;

@interface SBApplicationServer : FBSServiceFacility
{
    id <SBApplicationServerMiscDelegate> _miscDelegate;
    id <SBApplicationServerHarmonyDelegate> _harmonyDelegate;
    id <SBApplicationServerShortcutDelegate> _shortcutDelegate;
    id <SBApplicationServerMultiwindowDelegate> _multiwindowDelegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SBApplicationServerMultiwindowDelegate> multiwindowDelegate; // @synthesize multiwindowDelegate=_multiwindowDelegate;
@property(nonatomic) __weak id <SBApplicationServerShortcutDelegate> shortcutDelegate; // @synthesize shortcutDelegate=_shortcutDelegate;
@property(nonatomic) __weak id <SBApplicationServerHarmonyDelegate> harmonyDelegate; // @synthesize harmonyDelegate=_harmonyDelegate;
@property(nonatomic) __weak id <SBApplicationServerMiscDelegate> miscDelegate; // @synthesize miscDelegate=_miscDelegate;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)dealloc;

@end
