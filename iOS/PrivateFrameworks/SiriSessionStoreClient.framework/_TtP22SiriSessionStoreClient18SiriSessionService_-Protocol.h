//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, _TtC22SiriSessionStoreClient14SessionStateId;

@protocol _TtP22SiriSessionStoreClient18SiriSessionService_
- (void)clearSessionStateForId:(_TtC22SiriSessionStoreClient14SessionStateId *)arg1;
- (void)getValueForId:(_TtC22SiriSessionStoreClient14SessionStateId *)arg1 forKey:(NSString *)arg2 withValue:(void (^)(_TtC22SiriSessionStoreClient17SessionStateValue *))arg3;
- (void)getValuesForId:(_TtC22SiriSessionStoreClient14SessionStateId *)arg1 forKeys:(NSArray *)arg2 withValues:(void (^)(NSDictionary *))arg3;
- (void)writeValuesForId:(_TtC22SiriSessionStoreClient14SessionStateId *)arg1 values:(NSDictionary *)arg2;
- (void)getLastCommittedValuesForId:(_TtC22SiriSessionStoreClient14SessionStateId *)arg1 withValues:(void (^)(NSDictionary *))arg2;
@end
