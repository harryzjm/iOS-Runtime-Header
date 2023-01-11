//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>
#import <PersonalizationPortraitInternals/NSSecureCoding-Protocol.h>

@class NSDate, NSSet, NSString;

@interface PPSourceQuery : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _limit;
    NSDate *_fromDate;
    NSDate *_toDate;
    NSSet *_matchingBundleIds;
    NSSet *_matchingDocumentIds;
    NSString *_matchingContactHandle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *matchingContactHandle; // @synthesize matchingContactHandle=_matchingContactHandle;
@property(retain, nonatomic) NSSet *matchingDocumentIds; // @synthesize matchingDocumentIds=_matchingDocumentIds;
@property(retain, nonatomic) NSSet *matchingBundleIds; // @synthesize matchingBundleIds=_matchingBundleIds;
@property(retain, nonatomic) NSDate *toDate; // @synthesize toDate=_toDate;
@property(retain, nonatomic) NSDate *fromDate; // @synthesize fromDate=_fromDate;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSourceQuery:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
