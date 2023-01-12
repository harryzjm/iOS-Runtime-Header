//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PKPassSectionDetailDrillInField
{
    NSArray *_sectionIdentifiers;
    long long _authRequirement;
    NSString *_localizedTitle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) long long authRequirement; // @synthesize authRequirement=_authRequirement;
@property(retain, nonatomic) NSArray *sectionIdentifiers; // @synthesize sectionIdentifiers=_sectionIdentifiers;
- (_Bool)isDrillInField;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asDictionary;

@end
