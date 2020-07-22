//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSystemPolicyForApp;

@interface PSAppListController
{
    PSSystemPolicyForApp *_systemPolicy;
}

+ (id)specifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)childPaneSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)multiValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)titleValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)sliderSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)toggleSwitchSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)textFieldSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)radioGroupSpecifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)groupSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)_localizedTitlesFromUnlocalizedTitles:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3;
@property(retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // @synthesize systemPolicy=_systemPolicy;
- (void).cxx_destruct;
- (id)bundle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1;
- (void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)_readToggleSwitchSpecifierValue:(id)arg1;
- (id)_valueFromUIValue:(id)arg1 specifier:(id)arg2;
- (id)_uiValueFromValue:(id)arg1 specifier:(id)arg2;

@end

