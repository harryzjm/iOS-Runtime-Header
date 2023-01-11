//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>

@class NSArray, NSString;

@interface ARFaceTrackingResults : NSObject <ARResultData>
{
    NSArray *_trackedFaces;
}

@property(copy, nonatomic) NSArray *trackedFaces; // @synthesize trackedFaces=_trackedFaces;
- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
