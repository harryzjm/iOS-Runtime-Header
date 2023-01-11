//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTestRecipe-Protocol.h>

@class BKSProcessAssertion, FBApplicationUpdateScenesTransaction, NSString;

@interface SBWindowManagerWithActionTestRecipe : NSObject <SBTestRecipe>
{
    BKSProcessAssertion *_assertion;
    FBApplicationUpdateScenesTransaction *_currentTransaction;
}

+ (void)load;
@property(retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)takeProcessAssertionWithSequenceNumber:(int)arg1;
- (void)invalidateProcessAssertion;
- (void)handleVolumeIncrease;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
