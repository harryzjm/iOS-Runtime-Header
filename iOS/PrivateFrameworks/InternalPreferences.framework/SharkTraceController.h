//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface SharkTraceController : PSListController
{
    long long _tailspinMode;
    _Bool _tailspinDefaultEnabled;
    PSSpecifier *_tailspinGroupSpecifier;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)setTailspinMode:(long long)arg1;
- (void)readTailspinSettings;
- (void)setTracingEnabled:(id)arg1 specifier:(id)arg2;
- (id)tracingEnabled:(id)arg1;

@end

