//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistantUI/NSObject-Protocol.h>

@class BFFPasscodeCreationManager;

@protocol BFFPasscodeCreationDelegate <NSObject>

@optional
- (void)passcodeManagerDidSetPasscode:(BFFPasscodeCreationManager *)arg1;
- (void)passcodeManagerWillSetPasscode:(BFFPasscodeCreationManager *)arg1;
- (void)passcodeManager:(BFFPasscodeCreationManager *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end

