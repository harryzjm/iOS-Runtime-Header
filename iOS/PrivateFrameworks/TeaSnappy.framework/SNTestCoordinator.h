//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TeaSnappy/SNTestCoordinating-Protocol.h>

@class NSString, UIApplication;

@interface SNTestCoordinator : NSObject <SNTestCoordinating>
{
    UIApplication *_application;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
- (long long)lengthForNumberOfScreens:(long long)arg1 direction:(unsigned long long)arg2 size:(struct CGSize)arg3;
- (unsigned long long)axisForDirection:(unsigned long long)arg1;
- (void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 numberOfScreens:(long long)arg5 direction:(unsigned long long)arg6;
- (void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 direction:(unsigned long long)arg5;
- (void)rotateToOrientation:(long long)arg1 beforeRotation:(CDUnknownBlockType)arg2 afterRotation:(CDUnknownBlockType)arg3;
- (_Bool)requiresRotationForOrientation:(long long)arg1;
- (void)failedTestWithTestName:(id)arg1 failureMessage:(id)arg2;
- (void)finishedTestWithTestName:(id)arg1 waitForCommit:(_Bool)arg2;
- (void)startedTestWithTestName:(id)arg1;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
