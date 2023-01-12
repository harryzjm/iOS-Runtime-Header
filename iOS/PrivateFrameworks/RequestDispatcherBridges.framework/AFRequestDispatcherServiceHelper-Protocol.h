//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RequestDispatcherBridges/AFServiceHelper-Protocol.h>

@class AFCommandExecutionInfo, NSSet, NSString, SABaseCommand;

@protocol AFRequestDispatcherServiceHelper <AFServiceHelper>
- (void)handleCommand:(SABaseCommand *)arg1 withExecutionContextMatchingInfo:(AFCommandExecutionInfo *)arg2 completion:(void (^)(SABaseCommand *, NSError *))arg3;

@optional
- (void)fetchContextsForKeys:(NSSet *)arg1 forRequestID:(NSString *)arg2 includesNearbyDevices:(_Bool)arg3 completion:(void (^)(NSArray *))arg4;
@end
