//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AUAudioUnit, MISSING_TYPE, UIViewController;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit21AUGenericViewInternal : UIView
{
    MISSING_TYPE *auAudioUnit;
    MISSING_TYPE *owningController;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *collectionView;
    MISSING_TYPE *hasGroups;
    MISSING_TYPE *pathsNeedingPeriodicUpdates;
    MISSING_TYPE *scheduledUpdatesTimer;
    MISSING_TYPE *paramObserverToken;
    MISSING_TYPE *showSingleClumpIndex;
    MISSING_TYPE *paramDictionary;
    MISSING_TYPE *widthInfo;
}

- (void).cxx_destruct;
- (void)removeScheduledUpdatesTimer;
- (void)removeFromSuperview;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) void *paramObserverToken; // @synthesize paramObserverToken;
@property(nonatomic, retain) UIViewController *owningController; // @synthesize owningController;
@property(nonatomic, retain) AUAudioUnit *auAudioUnit; // @synthesize auAudioUnit;

@end

