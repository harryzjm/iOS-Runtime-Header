//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString, PARBag;

@protocol PARClientXPC
- (void)didDeleteResource:(NSString *)arg1;
- (void)didDownloadResource:(NSString *)arg1;
- (void)bagDidLoad:(PARBag *)arg1 error:(NSError *)arg2;
@end

