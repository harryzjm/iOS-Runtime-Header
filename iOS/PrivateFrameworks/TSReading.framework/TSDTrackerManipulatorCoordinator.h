//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;
@protocol TSDTrackerManipulator;

@interface TSDTrackerManipulatorCoordinator : NSObject
{
    NSMutableSet *mRegisteredTMs;
    NSObject<TSDTrackerManipulator> *mControllingTM;
}

+ (void)p_removeDynamicSubclass:(id)arg1;
+ (void)p_dynamicallySubclassGRForNotification:(id)arg1;
@property(readonly, nonatomic) NSObject<TSDTrackerManipulator> *controllingTM; // @synthesize controllingTM=mControllingTM;
- (void)p_notifyControlChange;
- (void)operationDidEnd;
- (void)operationWillEnd;
- (_Bool)relinquishTrackerManipulatorControl:(id)arg1;
- (_Bool)takeControlWithTrackerManipulator:(id)arg1;
- (_Bool)hasRegisteredTrackerManipulator:(id)arg1;
- (void)unregisterTrackerManipulator:(id)arg1;
- (void)registerTrackerManipulator:(id)arg1;
- (void)dealloc;
- (id)init;

@end

