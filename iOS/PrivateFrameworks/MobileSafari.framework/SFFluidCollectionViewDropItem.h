//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface SFFluidCollectionViewDropItem : NSObject
{
    UIDragItem *_dragItem;
    NSIndexPath *_sourceIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

