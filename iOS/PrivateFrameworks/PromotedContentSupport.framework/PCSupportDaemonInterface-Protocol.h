//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol PCSupportDaemonInterface
- (void)fetchSegmentData:(void (^)(NSString *))arg1;
- (void)addClientToSegments:(NSArray *)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;
@end
