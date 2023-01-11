//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSDictionary, NSError, NSURL, PHVideoChoosingAndAvailabilityRequest;

@protocol PHVideoChoosingAndAvailabilityRequestDelegate <NSObject>
- (void)videoChoosingAndAvailabilityRequest:(PHVideoChoosingAndAvailabilityRequest *)arg1 didFinishWithVideoURL:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)videoChoosingAndAvailabilityRequest:(PHVideoChoosingAndAvailabilityRequest *)arg1 didReportProgress:(double)arg2 completed:(_Bool)arg3 error:(NSError *)arg4;
@end

