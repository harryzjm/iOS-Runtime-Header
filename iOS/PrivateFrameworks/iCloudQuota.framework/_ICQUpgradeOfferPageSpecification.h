//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICQLink, NSArray, NSDictionary, NSString;

@interface _ICQUpgradeOfferPageSpecification
{
    NSDictionary *_serverDict;
    NSString *_iconBundleIdentifier;
    NSString *_title;
    NSString *_message;
    NSString *_altMessage;
    NSArray *_services;
    ICQLink *_purchaseLink;
    ICQLink *_bottomLink;
    NSString *_finePrintFormat;
    NSArray *_finePrintLinks;
    NSString *_bottomLinkVisibleKey;
}

+ (id)upgradeOfferPageSpecificationSampleForLevel:(long long)arg1;
@property(retain, nonatomic) NSString *bottomLinkVisibleKey; // @synthesize bottomLinkVisibleKey=_bottomLinkVisibleKey;
@property(retain, nonatomic) NSArray *finePrintLinks; // @synthesize finePrintLinks=_finePrintLinks;
@property(retain, nonatomic) NSString *finePrintFormat; // @synthesize finePrintFormat=_finePrintFormat;
@property(retain, nonatomic) ICQLink *bottomLink; // @synthesize bottomLink=_bottomLink;
@property(retain, nonatomic) ICQLink *purchaseLink; // @synthesize purchaseLink=_purchaseLink;
@property(retain, nonatomic) NSArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSString *altMessage; // @synthesize altMessage=_altMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconBundleIdentifier; // @synthesize iconBundleIdentifier=_iconBundleIdentifier;
@property(readonly, nonatomic) NSDictionary *serverDict; // @synthesize serverDict=_serverDict;
- (void).cxx_destruct;
- (id)copyWithBindings:(id)arg1;
- (id)copy;
- (id)debugDescription;
- (id)initWithServerDictionary:(id)arg1 pageIdentifier:(id)arg2;
- (id)initWithServerDictionary:(id)arg1;

@end

