//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactsUserDefaults.h"

@class CNFoundationUserDefaults;

__attribute__((visibility("hidden")))
@interface CNContactsUserDefaultsX : CNContactsUserDefaults
{
    CNFoundationUserDefaults *_foundationUserDefaults;
}

- (void).cxx_destruct;
@property(retain) CNFoundationUserDefaults *foundationUserDefaults; // @synthesize foundationUserDefaults=_foundationUserDefaults;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (id)filteredGroupAndContainerIDs;
- (void)setShortNameFormatPrefersNicknames:(_Bool)arg1;
- (_Bool)shortNameFormatPrefersNicknames;
- (void)setShortNameFormatEnabled:(_Bool)arg1;
- (_Bool)isShortNameFormatEnabled;
- (void)setShortNameFormat:(long long)arg1;
- (long long)shortNameFormat;
- (id)countryCode;
- (long long)sortOrder;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)arg1;
- (long long)displayNameOrder;
- (id)initWithFoundationUserDefaults:(id)arg1;
- (id)init;

@end

