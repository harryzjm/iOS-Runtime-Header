//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOPhoneNumberResolving <NSObject>
- (void)resolvePhoneNumbers:(NSArray *)arg1 handler:(void (^)(GEOPhoneNumberResolutionResultSet *))arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
@end

