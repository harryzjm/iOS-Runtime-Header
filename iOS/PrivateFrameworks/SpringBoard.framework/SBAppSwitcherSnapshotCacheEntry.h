//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBAppLayout, SBDisplayItem, UIImage, XBApplicationSnapshot;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject
{
    _Bool _fromFullSizeSnapshotRequest;
    _Bool _needsUpdate;
    SBAppLayout *_appLayout;
    SBDisplayItem *_displayItem;
    XBApplicationSnapshot *_snapshot;
    UIImage *_snapshotImage;
}

- (void).cxx_destruct;
- (id)description;

@end
