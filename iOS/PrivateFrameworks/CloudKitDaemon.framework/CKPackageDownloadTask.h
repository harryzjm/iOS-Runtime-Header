//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKAsset, CKDCancelTokenGroup, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError, NSIndexSet;
@protocol OS_dispatch_group;

@interface CKPackageDownloadTask : NSObject
{
    NSError *_error;
    CKPackage *_package;
    CKAsset *_manifestAsset;
    NSArray *_sectionAssets;
    id _itemIndices;
    NSIndexSet *_sectionIndices;
    CKDProgressTracker *_progressTracker;
    CKDMMCSRequestOptions *_MMCSRequestOptions;
    NSObject<OS_dispatch_group> *_group;
    CKDCancelTokenGroup *_cancelTokens;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property(retain, nonatomic) NSIndexSet *sectionIndices; // @synthesize sectionIndices=_sectionIndices;
@property(retain, nonatomic) id itemIndices; // @synthesize itemIndices=_itemIndices;
@property(retain, nonatomic) NSArray *sectionAssets; // @synthesize sectionAssets=_sectionAssets;
@property(retain, nonatomic) CKAsset *manifestAsset; // @synthesize manifestAsset=_manifestAsset;
@property(readonly, nonatomic) CKPackage *package; // @synthesize package=_package;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)cancel;
- (id)initWithPackage:(id)arg1 trackProgress:(_Bool)arg2;

@end

