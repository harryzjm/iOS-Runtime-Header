//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface UIKBViewTreeSnapshotter : NSObject
{
    NSMutableArray *_inputViews;
    UIView *_snapshotView;
}

+ (id)snapshotterForKeyboardView:(id)arg1 afterScreenUpdates:(_Bool)arg2;
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void)dealloc;

@end

