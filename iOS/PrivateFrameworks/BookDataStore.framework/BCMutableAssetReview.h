//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BCAssetReview-Protocol.h>
#import <BookDataStore/NSSecureCoding-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetReview <BCAssetReview, NSSecureCoding>
{
    short _starRating;
    NSString *_assetReviewID;
    NSString *_reviewTitle;
    NSString *_reviewBody;
    NSString *_userID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *reviewBody; // @synthesize reviewBody=_reviewBody;
@property(copy, nonatomic) NSString *reviewTitle; // @synthesize reviewTitle=_reviewTitle;
@property(nonatomic) short starRating; // @synthesize starRating=_starRating;
@property(copy, nonatomic) NSString *assetReviewID; // @synthesize assetReviewID=_assetReviewID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)configuredRecordFromAttributes;
- (id)zoneName;
@property(nonatomic) double normalizedStarRating;
- (id)identifier;
- (id)recordType;
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)initWithAssetReviewID:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end
