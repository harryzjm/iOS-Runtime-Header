//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TIContact : NSObject
{
    _Bool _hasRelevancyScore;
    float _relevancyScore;
    NSString *_familyName;
    NSString *_phoneticFamilyName;
    NSString *_givenName;
    NSString *_phoneticGivenName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_organizationName;
    NSString *_jobTitle;
    NSString *_nickname;
    NSArray *_relations;
    NSArray *_cities;
}

@property(nonatomic) float relevancyScore; // @synthesize relevancyScore=_relevancyScore;
@property(nonatomic) _Bool hasRelevancyScore; // @synthesize hasRelevancyScore=_hasRelevancyScore;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSArray *relations; // @synthesize relations=_relations;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(retain, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
- (id)flatten;
- (void)dealloc;

@end

