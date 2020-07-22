//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, PLFaceRebuildHelper, PLManagedAsset;

@interface PLCPLFaceRebuildSupport : NSObject
{
    PLManagedAsset *_asset;
    NSManagedObjectContext *_context;
    PLFaceRebuildHelper *_rebuildHelper;
    int _detectedFaceCount;
    int _rejectedFaceCount;
    int _hiddenFaceCount;
}

+ (void)rebuildDeferredFacesForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)fetchPersonForDeferredFace:(id)arg1;
- (id)fetchDeferredFacesToRebuild;
- (void)rebuildHiddenFace:(id)arg1;
- (void)rebuildRejectedFace:(id)arg1;
- (void)rebuildDetectedFace:(id)arg1;
- (void)rebuildFace:(id)arg1;
- (void)rebuildAllFaces;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2;

@end

