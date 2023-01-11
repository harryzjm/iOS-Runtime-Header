//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface FCArticleLengthFeature
{
    NSString *_lengthID;
}

+ (id)longLengthFeature;
+ (id)mediumLengthFeature;
+ (id)shortLengthFeature;
@property(retain, nonatomic) NSString *lengthID; // @synthesize lengthID=_lengthID;
- (void).cxx_destruct;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (id)fr_description;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)initWithLengthIdentifier:(id)arg1;
- (id)init;

@end
