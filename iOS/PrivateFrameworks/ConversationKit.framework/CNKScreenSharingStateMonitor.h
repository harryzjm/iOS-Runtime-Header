//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, TUCall;

@interface CNKScreenSharingStateMonitor : NSObject
{
    MISSING_TYPE *conversationController;
    MISSING_TYPE *observations;
    MISSING_TYPE *isBroadcastingScreenSharing;
    MISSING_TYPE *currentlySharingParticipant;
    MISSING_TYPE *call;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic, retain) TUCall *call; // @synthesize call;
@property(nonatomic) _Bool isBroadcastingScreenSharing; // @synthesize isBroadcastingScreenSharing;

@end
