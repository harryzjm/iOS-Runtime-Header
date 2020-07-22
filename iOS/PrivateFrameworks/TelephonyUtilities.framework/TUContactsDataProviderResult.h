//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TUContactsDataProviderResult : NSObject
{
    int _legacyAddressBookIdentifier;
    NSString *_localizedName;
    NSString *_companyName;
    NSString *_contactLabel;
    NSArray *_contacts;
}

@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) int legacyAddressBookIdentifier; // @synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier;
@property(copy, nonatomic) NSString *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (id)description;

@end

