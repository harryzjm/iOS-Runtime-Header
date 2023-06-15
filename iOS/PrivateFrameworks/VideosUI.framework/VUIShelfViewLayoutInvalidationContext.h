//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface VUIShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _invalidateLayout;
    _Bool _invalidateVerticalBumps;
    NSIndexPath *_focusedItemIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *focusedItemIndexPath; // @synthesize focusedItemIndexPath=_focusedItemIndexPath;
@property(nonatomic) _Bool invalidateVerticalBumps; // @synthesize invalidateVerticalBumps=_invalidateVerticalBumps;
@property(nonatomic) _Bool invalidateLayout; // @synthesize invalidateLayout=_invalidateLayout;

@end

