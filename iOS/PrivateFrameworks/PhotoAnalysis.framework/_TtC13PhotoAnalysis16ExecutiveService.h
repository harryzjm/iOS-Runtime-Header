//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC13PhotoAnalysis16ExecutiveService : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;
    MISSING_TYPE *identifier;
    MISSING_TYPE *executive;
    MISSING_TYPE *stateHolder;
    MISSING_TYPE *operationManager;
}

- (void)requestAnalysisStatusWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)performOnDemandTaskWithName:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

