//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSSet, TPPolicyVersion;

@interface TPPolicyDocument : NSObject
{
    NSArray *_modelToCategory;
    NSDictionary *_categoriesByView;
    NSDictionary *_introducersByCategory;
    NSDictionary *_redactions;
    NSArray *_keyViewMapping;
    NSSet *_userControllableViewList;
    NSSet *_piggybackViews;
    TPPolicyVersion *_version;
    NSData *_protobuf;
}

+ (_Bool)isEqualKeyViewMapping:(id)arg1 other:(id)arg2;
+ (id)redactionWithEncrypter:(id)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 keyViewMapping:(id)arg5 error:(id *)arg6;
+ (id)policyDocumentWithInternalVersion:(unsigned long long)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 redactions:(id)arg5 keyViewMapping:(id)arg6 userControllableViewList:(id)arg7 piggybackViews:(id)arg8 hashAlgo:(long long)arg9 error:(id *)arg10;
+ (id)policyDocumentWithVersion:(unsigned long long)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 redactions:(id)arg5 keyViewMapping:(id)arg6 userControllableViewList:(id)arg7 piggybackViews:(id)arg8 hashAlgo:(long long)arg9 error:(id *)arg10;
+ (id)policyDocWithHash:(id)arg1 data:(id)arg2;
+ (void)addKeyViewMapping:(id)arg1 toPB:(id)arg2;
+ (void)addRedactions:(id)arg1 toPB:(id)arg2;
+ (void)addIntroducersByCategory:(id)arg1 toPB:(id)arg2;
+ (void)addCategoriesByView:(id)arg1 toPB:(id)arg2;
+ (void)addModelToCategory:(id)arg1 toPB:(id)arg2;
+ (id)redactionsFromPb:(id)arg1;
+ (id)introducersByCategoryFromPb:(id)arg1;
+ (id)categoriesByViewFromPb:(id)arg1;
+ (id)modelToCategoryFromPb:(id)arg1;
+ (id)dictionaryOfSetsFromDictionaryOfArrays:(id)arg1;
+ (id)modelToCategoryRulesFromArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *protobuf; // @synthesize protobuf=_protobuf;
@property(retain, nonatomic) TPPolicyVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSSet *piggybackViews; // @synthesize piggybackViews=_piggybackViews;
@property(retain, nonatomic) NSSet *userControllableViewList; // @synthesize userControllableViewList=_userControllableViewList;
@property(retain, nonatomic) NSArray *keyViewMapping; // @synthesize keyViewMapping=_keyViewMapping;
@property(retain, nonatomic) NSDictionary *redactions; // @synthesize redactions=_redactions;
@property(retain, nonatomic) NSDictionary *introducersByCategory; // @synthesize introducersByCategory=_introducersByCategory;
@property(retain, nonatomic) NSDictionary *categoriesByView; // @synthesize categoriesByView=_categoriesByView;
@property(retain, nonatomic) NSArray *modelToCategory; // @synthesize modelToCategory=_modelToCategory;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)cloneWithVersionNumber:(unsigned long long)arg1;
- (_Bool)isEqualToPolicyDocument:(id)arg1;
- (id)description;
- (id)policyWithSecrets:(id)arg1 decrypter:(id)arg2 error:(id *)arg3;
- (id)encodeProtobufWithVersion:(unsigned long long)arg1;
- (id)encodeProtobuf;

@end
