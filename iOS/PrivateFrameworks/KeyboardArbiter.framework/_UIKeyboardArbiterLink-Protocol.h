//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KeyboardArbiter/NSObject-Protocol.h>

@class FBSSceneLayer, NSObject, NSString, _UIKeyboardArbiter;
@protocol OS_dispatch_queue;

@protocol _UIKeyboardArbiterLink <NSObject>
@property(readonly, nonatomic) _Bool isAvailable;
@property(nonatomic) __weak _UIKeyboardArbiter *owner;
@property(readonly, nonatomic) NSString *serviceName;
- (void)detach:(FBSSceneLayer *)arg1;
- (void)attach:(FBSSceneLayer *)arg1;
- (void)updateSceneSettings;
- (void)createSceneWithCompletion:(void (^)(_Bool))arg1;
- (void)connectWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
@end

