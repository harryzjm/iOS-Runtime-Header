//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FitnessCoaching/NSObject-Protocol.h>

@class NSData;

@protocol FCCTransportInterface <NSObject>
- (void)transportMessage:(unsigned long long)arg1 data:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)transportRequest:(unsigned long long)arg1 data:(NSData *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
@end

