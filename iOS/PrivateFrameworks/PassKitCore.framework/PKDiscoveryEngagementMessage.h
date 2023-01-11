//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, PKDiscoveryEngagementMessageAction;

@interface PKDiscoveryEngagementMessage <NSSecureCoding, NSCopying>
{
    _Bool _reportIdentifier;
    long long _type;
    long long _passQualifier;
    NSString *_titleKey;
    NSString *_messageKey;
    NSDictionary *_iconURLs;
    PKDiscoveryEngagementMessageAction *_action;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic, getter=canReportIdentifier) _Bool reportIdentifier; // @synthesize reportIdentifier=_reportIdentifier;
@property(retain, nonatomic) PKDiscoveryEngagementMessageAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSDictionary *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(retain, nonatomic) NSString *messageKey; // @synthesize messageKey=_messageKey;
@property(retain, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(nonatomic) long long passQualifier; // @synthesize passQualifier=_passQualifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateForRuleResult:(_Bool)arg1;
- (void)updateWithDiscoveryEngagementMessage:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
