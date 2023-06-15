//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreEmbeddedSpeechRecognition/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol CESRSpeechProfileBuilderService <NSObject>
- (oneway void)finishAndSaveProfile:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)cancelWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)addVocabularyItems:(NSArray *)arg1 isBoosted:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)beginWithCategoriesAndVersions:(NSDictionary *)arg1 bundleId:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)getVersionForCategory:(NSString *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (oneway void)getExperimentIdsWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)removeExperimentId:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)addExperimentId:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)setProfileConfigWithLanguage:(NSString *)arg1 profileDir:(NSString *)arg2 userId:(NSString *)arg3 dataProtectionClass:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
@end

