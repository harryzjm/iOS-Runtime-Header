//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAFamilyCircle, FAProfilePictureStore, NSArray, NSDictionary, PSSpecifier;
@protocol FAFamilySettingsMemberSpecifierProviderDelegeate;

@interface FAFamilySettingsMemberSpecifierProvider : NSObject
{
    FAFamilyCircle *_familyCircle;
    FAProfilePictureStore *_familyPictureStore;
    PSSpecifier *_addFamilyMemberCell;
    NSDictionary *_cachedResourceDictionary;
    unsigned long long _specifierState;
    id <FAFamilySettingsMemberSpecifierProviderDelegeate> _delegate;
    NSArray *_specifiers;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property(nonatomic) __weak id <FAFamilySettingsMemberSpecifierProviderDelegeate> delegate; // @synthesize delegate=_delegate;
- (void)reloadSpecifiers;
- (id)_specifierWithID:(id)arg1;
- (void)_pendingFamilyMemberCellWasTapped:(id)arg1;
- (void)_familyMemberCellWasTapped:(id)arg1;
- (void)_addFamilyMemberButtonWasTapped:(id)arg1;
- (id)_createSpecifierForPendingMember:(id)arg1;
- (id)_createSpecifierForFamilyMemberCell:(id)arg1;
- (void)_delayedLoadIfNeeded;
- (_Bool)_launchWithResourceDictionary:(id)arg1;
- (_Bool)handleURL:(id)arg1;
- (void)setFamilyCircle:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 familyCircle:(id)arg2 familyPictureStore:(id)arg3;

@end
