//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, PHAsset;

@interface PXDraggingItemLocalObject : NSObject
{
    PHAsset *_asset;
    NSIndexPath *_hintIndexPath;
}

@property(readonly, nonatomic) NSIndexPath *hintIndexPath; // @synthesize hintIndexPath=_hintIndexPath;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 hintIndexPath:(id)arg2;

@end
