//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NSData;

@protocol NTKArgonFetcherProviding <NSObject>
- (void)fetchNewRecordsSinceChangeToken:(NSData *)arg1 forReason:(long long)arg2 completion:(void (^)(NSSet *, NSData *, NSError *))arg3;
@end

