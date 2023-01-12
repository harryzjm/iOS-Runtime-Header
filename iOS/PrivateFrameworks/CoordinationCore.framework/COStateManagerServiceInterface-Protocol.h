//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/COStateManagerLegacyServiceInterface-Protocol.h>
#import <CoordinationCore/NSObject-Protocol.h>

@class NSDictionary, NSPredicate, NSSet, NSString;

@protocol COStateManagerServiceInterface <NSObject, COStateManagerLegacyServiceInterface>
- (void)doorbellDelayWithCallback:(void (^)(double))arg1;
- (void)removeKeyPaths:(NSSet *)arg1 targetClusters:(NSSet *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)setDictionary:(NSDictionary *)arg1 suite:(NSString *)arg2 interestClusters:(NSSet *)arg3 targetCluster:(NSSet *)arg4 withCallback:(void (^)(NSError *))arg5;
- (void)removeObserverWithPredicate:(NSPredicate *)arg1;
- (void)addObserverWithPredicate:(NSPredicate *)arg1 suite:(NSString *)arg2 interestClusters:(NSSet *)arg3;
@end

