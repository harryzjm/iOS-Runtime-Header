//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSUIOChannel-Protocol.h>
#import <TSPersistence/TSUStreamReadChannel-Protocol.h>

@protocol TSUReadChannel <TSUIOChannel, TSUStreamReadChannel>
- (void)readFromOffsetAndWait:(long long)arg1 length:(unsigned long long)arg2 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg3;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end

