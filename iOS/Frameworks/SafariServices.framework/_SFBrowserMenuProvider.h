//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface _SFBrowserMenuProvider : NSObject
{
    NSDictionary *_personaToMenusMap[4];
    NSSet *_personaToCommandSetMap[4];
    unsigned long long _persona;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)_enabledExtensionsDidChange;
- (id)_extensionsMenu;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(_Bool)arg5 property:(unsigned long long)arg6 alternates:(id)arg7;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(_Bool)arg5 alternates:(id)arg6;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(_Bool)arg5;
- (id)_commandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 webInterceptable:(_Bool)arg4 property:(unsigned long long)arg5;
- (id)_placeholderCommandWithAction:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4;
- (_Bool)commandConflictsWithTextEditing:(id)arg1;
- (id)_commandWithPriorityOverTextEditingForCommand:(id)arg1;
- (id)_switchToTabCommands;
- (void)_setMenusForPersona:(unsigned long long)arg1 withBuilder:(id)arg2;
- (void)_setMenusIfNecessaryForPersona:(unsigned long long)arg1;
- (void)rebuildMenuIfNeededForPersona:(unsigned long long)arg1;
- (void)setMenusIfNecessaryForSafariViewServiceWithBuilder:(id)arg1;
- (void)setMenusForSafariWithBuilder:(id)arg1;
- (id)init;

@end
