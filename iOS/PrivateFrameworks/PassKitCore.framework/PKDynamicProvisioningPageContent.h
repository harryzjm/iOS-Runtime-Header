//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString, PKDynamicProvisioningPageLearnMoreContent;

@interface PKDynamicProvisioningPageContent : NSObject <NSCopying>
{
    unsigned char _contentAlignment;
    unsigned long long _pageNumber;
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSString *_primaryActionTitle;
    NSString *_primaryActionIdentifier;
    NSString *_secondaryActionTitle;
    NSString *_secondaryActionIdentifier;
    NSString *_disclosureTitle;
    NSString *_heroImageURL;
    PKDynamicProvisioningPageLearnMoreContent *_learnMore;
}

@property(nonatomic) unsigned char contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(retain, nonatomic) PKDynamicProvisioningPageLearnMoreContent *learnMore; // @synthesize learnMore=_learnMore;
@property(retain, nonatomic) NSString *heroImageURL; // @synthesize heroImageURL=_heroImageURL;
@property(copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(copy, nonatomic) NSString *secondaryActionIdentifier; // @synthesize secondaryActionIdentifier=_secondaryActionIdentifier;
@property(copy, nonatomic) NSString *secondaryActionTitle; // @synthesize secondaryActionTitle=_secondaryActionTitle;
@property(copy, nonatomic) NSString *primaryActionIdentifier; // @synthesize primaryActionIdentifier=_primaryActionIdentifier;
@property(copy, nonatomic) NSString *primaryActionTitle; // @synthesize primaryActionTitle=_primaryActionTitle;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictonary:(id)arg1;

@end
