//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _DUIServerSessionSystemApp
- (oneway void)requestDragContinuationEndpointWithReply:(void (^)(NSXPCListenerEndpoint *))arg1;
- (oneway void)loadUserActivityDataForItemAtIndex:(unsigned long long)arg1 reply:(void (^)(NSData *))arg2;
- (oneway void)loadURLForItemAtIndex:(unsigned long long)arg1 reply:(void (^)(NSURL *))arg2;
- (oneway void)surrenderDragSession;
- (oneway void)commandeerDragSession;
@end

