//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PairedSync/NSObject-Protocol.h>

@class PSYSyncOptions;

@protocol PSYActivity <NSObject>
- (oneway void)abortSyncWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)beginSyncWithOptions:(PSYSyncOptions *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
