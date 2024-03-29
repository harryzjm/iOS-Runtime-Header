//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSString, NSURL, PHContentEditingOutput, PUReviewAsset;
@protocol PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewAdjustmentURLNode : PXRunNode
{
    NSURL *_adjustmentURL;
    NSURL *_directory;
    PUReviewAsset *_reviewAsset;
    PHContentEditingOutput *_contentEditingOutput;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property(readonly, nonatomic) PUReviewAsset *reviewAsset; // @synthesize reviewAsset=_reviewAsset;
@property(readonly, nonatomic) NSURL *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) NSURL *adjustmentURL; // @synthesize adjustmentURL=_adjustmentURL;
- (void)run;
- (id)initWithReviewAsset:(id)arg1 directory:(id)arg2 contentEditingOutput:(id)arg3;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

