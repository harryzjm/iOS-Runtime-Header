//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

@interface STDisableScreenTimeGroupSpecifierProvider
{
    PSSpecifier *_disableScreenTimeSpecifier;
}

@property(retain, nonatomic) PSSpecifier *disableScreenTimeSpecifier; // @synthesize disableScreenTimeSpecifier=_disableScreenTimeSpecifier;
- (void).cxx_destruct;
- (void)disableScreenTime:(id)arg1;
- (void)confirmDisableScreenTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2;

@end
