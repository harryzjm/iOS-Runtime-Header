//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, VNTracker;

@protocol VNTrackerProviding
- (void)releaseTracker:(VNTracker *)arg1;
- (VNTracker *)trackerWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (Class)trackerClassForOptions:(NSDictionary *)arg1 error:(id *)arg2;
@end

