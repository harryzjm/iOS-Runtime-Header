//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveML/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, PMLSessionDescriptor, PMLSparseVector, PMLSpotlightReference, _PASTuple2;

@protocol PMLTrainingProtocol <NSObject>
- (void)setSourceRecoverer:(id (^)(NSData *))arg1;
- (NSDictionary *)planReceivedWithRecipe:(NSDictionary *)arg1 attachments:(NSArray *)arg2 error:(id *)arg3;
- (NSDictionary *)planReceivedWithPayload:(NSData *)arg1 error:(id *)arg2;
- (void)trimDbWithDeferralBlock:(_Bool (^)(void))arg1;
- (void)updateLastTrainingFeaturizationForModel:(PMLSessionDescriptor *)arg1 andData:(NSData *)arg2;
- (_PASTuple2 *)lastTrainingFeaturizationForModelName:(NSString *)arg1 andLocale:(NSString *)arg2;
- (void)updateSessionsAndLabelForModel:(PMLSessionDescriptor *)arg1 block:(void (^)(long long, NSData *, void (^)(long long, PMLSparseVector *, PMLSessionDescriptor *)))arg2;
- (void)deleteSessionsWithBundleID:(NSString *)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSessionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 label:(long long)arg2 sessionDescriptor:(PMLSessionDescriptor *)arg3 spotlightReference:(PMLSpotlightReference *)arg4 isInternal:(_Bool)arg5;
- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 source:(NSData *)arg2 label:(long long)arg3 sessionDescriptor:(PMLSessionDescriptor *)arg4 spotlightReference:(PMLSpotlightReference *)arg5 isInternal:(_Bool)arg6;
@end
