//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSXPCListenerEndpoint, PBItemCollection, _DUITouchRoutingPolicy;
@protocol _DUIClientSessionSource;

@protocol _DUIServerSource
- (oneway void)beginDragWithTouchIdentifiers:(NSArray *)arg1 touchRoutingPolicy:(_DUITouchRoutingPolicy *)arg2 itemCollection:(PBItemCollection *)arg3 itemDetails:(NSArray *)arg4 dataProviderEndpoint:(NSXPCListenerEndpoint *)arg5 source:(id <_DUIClientSessionSource>)arg6 accessibilityEndpoint:(NSXPCListenerEndpoint *)arg7 centroid:(struct CGPoint)arg8 reply:(void (^)(unsigned int, id <_DUIServerSessionSource>))arg9;
- (oneway void)warmUp;
@end

