//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC13PhotoAnalysis11TestService : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;
    MISSING_TYPE *worker;
    MISSING_TYPE *identifier;
    MISSING_TYPE *stateHolder;
    MISSING_TYPE *operationManager;
}

- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)performLongOperationWithOperationID:(long long)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)performGetStringWithOperationID:(long long)arg1 reply:(void (^)(NSString *, NSError *))arg2;

@end

