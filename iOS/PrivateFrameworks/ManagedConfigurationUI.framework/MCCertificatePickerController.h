//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

@interface MCCertificatePickerController : PSListItemsController
{
}

- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setRowToSelect;
- (id)specifiers;
- (void)_setCellPropertiesOnSpecifier:(id)arg1 forCertificate:(struct __SecCertificate *)arg2;
- (id)navigationTitle;

@end
