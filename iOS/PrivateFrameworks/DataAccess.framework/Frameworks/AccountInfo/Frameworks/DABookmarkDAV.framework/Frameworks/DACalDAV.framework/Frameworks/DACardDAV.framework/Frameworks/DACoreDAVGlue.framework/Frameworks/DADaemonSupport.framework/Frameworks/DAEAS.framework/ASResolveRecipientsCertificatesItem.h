//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsCertificatesItem
{
    NSNumber *_certCount;
    NSNumber *_recipientCount;
    NSNumber *_easStatus;
    NSMutableArray *_mCertificates;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mCertificates; // @synthesize mCertificates=_mCertificates;
@property(retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus; // @synthesize easStatus=_easStatus;
@property(retain, nonatomic) NSNumber *recipientCount; // @synthesize recipientCount=_recipientCount;
@property(retain, nonatomic) NSNumber *certCount; // @synthesize certCount=_certCount;
- (void).cxx_destruct;
- (id)description;
- (void)addCertificateString:(id)arg1;
@property(readonly, nonatomic) NSArray *certificates;

@end
