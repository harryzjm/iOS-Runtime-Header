//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data;

@protocol TSPComponentWriteChannel <NSObject>
- (void)close;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1;
@end

