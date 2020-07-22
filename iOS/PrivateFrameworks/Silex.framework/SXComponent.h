//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SXComponentAnchor, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary;

@interface SXComponent
{
    SXComponentAnimation *backingAnimation;
    SXComponentClassification *_classification;
}

+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
@property(retain, nonatomic) SXComponentAnimation *backingAnimation; // @synthesize backingAnimation;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) SXComponentClassification *classification; // @synthesize classification=_classification;
- (unsigned long long)contentRelevanceWithValue:(id)arg1 withType:(int)arg2;
- (id)animationWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *additions; // @dynamic additions;
@property(readonly, nonatomic) SXJSONDictionary *analytics; // @dynamic analytics;
@property(readonly, nonatomic) SXComponentAnchor *anchor; // @dynamic anchor;
@property(readonly, nonatomic) SXComponentAnimation *animation; // @dynamic animation;
@property(readonly, nonatomic) SXJSONArray *behaviors; // @dynamic behaviors;
@property(readonly, nonatomic) SXComponentConditions *conditions; // @dynamic conditions;
@property(readonly, nonatomic) unsigned long long contentRelevance; // @dynamic contentRelevance;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *layout; // @dynamic layout;
@property(readonly, nonatomic) NSString *style; // @dynamic style;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end
