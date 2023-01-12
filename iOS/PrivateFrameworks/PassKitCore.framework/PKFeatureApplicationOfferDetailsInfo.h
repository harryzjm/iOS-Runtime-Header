//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKFeatureApplicationOfferDetailsInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_title;
    NSString *_body;
    NSString *_primaryActionTitle;
    NSString *_secondaryActionTitle;
    NSString *_disclosureTitle;
    NSString *_heroImageURL;
    unsigned long long _layout;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long layout; // @synthesize layout=_layout;
@property(copy, nonatomic) NSString *heroImageURL; // @synthesize heroImageURL=_heroImageURL;
@property(copy, nonatomic) NSString *disclosureTitle; // @synthesize disclosureTitle=_disclosureTitle;
@property(copy, nonatomic) NSString *secondaryActionTitle; // @synthesize secondaryActionTitle=_secondaryActionTitle;
@property(copy, nonatomic) NSString *primaryActionTitle; // @synthesize primaryActionTitle=_primaryActionTitle;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
