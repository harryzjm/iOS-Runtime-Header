//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSString;

@interface FRPersonalizationFeature : NSObject <NSCopying>
{
    NSString *_personalizationIdentifier;
    NSString *_tagID;
}

+ (id)featureObserver;
+ (id)featureForFreeValuedIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1 allowFreeValued:(_Bool)arg2;
+ (id)featureForIdentifier:(id)arg1;
+ (id)featureFromTagID:(id)arg1;
+ (id)featuresFromTagIDs:(id)arg1;
+ (id)featuresFromTag:(id)arg1;
+ (id)featuresFromPersonalizingArticle:(id)arg1;
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;
+ (id)featuresFromHeadline:(id)arg1;
+ (CDUnknownBlockType)featureGeneratorForVideoWithPublisher:(id)arg1;
+ (CDUnknownBlockType)featureGeneratorForGroupType:(long long)arg1;
+ (CDUnknownBlockType)featureGeneratorForTagID:(id)arg1;
+ (CDUnknownBlockType)featureGeneratorForTag:(id)arg1;
+ (CDUnknownBlockType)featureGeneratorForHeadline:(id)arg1 groupType:(long long)arg2;
+ (CDUnknownBlockType)featureGeneratorForHeadline:(id)arg1;
+ (CDUnknownBlockType)concatFeatureGenerator:(CDUnknownBlockType)arg1 withGenerator:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(retain, nonatomic) NSString *personalizationIdentifier; // @synthesize personalizationIdentifier=_personalizationIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fr_description;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

