//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface HMIPersonTracker : HMFObject <HMFLogging>
{
    NSArray *_previousPersons;
    NSDictionary *_previousPersonIndices;
    NSMutableArray *_motionRecordsQueue;
    struct CGSize _frameDimensions;
    CDStruct_1b6d18a9 _previousTime;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) struct CGSize frameDimensions; // @synthesize frameDimensions=_frameDimensions;
@property CDStruct_1b6d18a9 previousTime; // @synthesize previousTime=_previousTime;
@property(readonly) NSMutableArray *motionRecordsQueue; // @synthesize motionRecordsQueue=_motionRecordsQueue;
@property(retain) NSDictionary *previousPersonIndices; // @synthesize previousPersonIndices=_previousPersonIndices;
@property(retain) NSArray *previousPersons; // @synthesize previousPersons=_previousPersons;
- (id)getUUIDToNextPersonIndexWithPreviousPersonIndex:(id)arg1;
- (id)trackNewPersons:(id)arg1 withMotionDetection:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)handleMotionDetections:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithFrameDimensions:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
