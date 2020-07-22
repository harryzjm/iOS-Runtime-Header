//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class FBSceneHostManager, NSString;

@protocol FBSceneHostManagerObserver <NSObject>

@optional
- (void)sceneHostManager:(FBSceneHostManager *)arg1 willDeactivateRequester:(NSString *)arg2;
- (void)sceneHostManager:(FBSceneHostManager *)arg1 willActivateRequester:(NSString *)arg2;
- (void)sceneHostManagerDidInvalidate:(FBSceneHostManager *)arg1;
- (void)sceneHostManagerContentStateDidChange:(FBSceneHostManager *)arg1;
@end

