//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class _UISettings, _UISettingsGroup;

@protocol _UISettingsGroupObserver <NSObject>
- (void)settingsGroup:(_UISettingsGroup *)arg1 didMoveSettings:(_UISettings *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)settingsGroup:(_UISettingsGroup *)arg1 didRemoveSettings:(_UISettings *)arg2 atIndex:(unsigned long long)arg3;
- (void)settingsGroup:(_UISettingsGroup *)arg1 didInsertSettings:(_UISettings *)arg2 atIndex:(unsigned long long)arg3;
@end

