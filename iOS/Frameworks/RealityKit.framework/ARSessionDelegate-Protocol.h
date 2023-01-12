//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RealityKit/ARSessionObserver-Protocol.h>

@class ARFrame, ARSession, NSArray;

@protocol ARSessionDelegate <ARSessionObserver>

@optional
- (void)session:(ARSession *)arg1 didRemoveAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didUpdateAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didAddAnchors:(NSArray *)arg2;
- (void)session:(ARSession *)arg1 didUpdateFrame:(ARFrame *)arg2;
@end
