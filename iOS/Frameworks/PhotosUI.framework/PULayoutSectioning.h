//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PULayoutSectioningDelegate;

@interface PULayoutSectioning : NSObject
{
    _Bool _invalidatingSampling;
    _Bool _invalidatingSections;
    PULayoutSectioning *_baseSectioning;
    id <PULayoutSectioningDelegate> _delegate;
}

@property(retain, nonatomic) PULayoutSectioning *baseSectioning; // @synthesize baseSectioning=_baseSectioning;
@property(nonatomic) id <PULayoutSectioningDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)sectioningHash;
- (id)sectioningHashHasIncorrectSampling:(_Bool *)arg1 hasInvisibleItemsInBaseSectioning:(_Bool *)arg2;
- (id)sectioningDescription;
- (id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(_Bool)arg1 hasIncorrectSampling:(_Bool *)arg2 hasInvisibleItemsInBaseSectioning:(_Bool *)arg3;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath)arg1;
- (id)description;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)visualSectionForRealSection:(long long)arg1;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (struct PUSimpleIndexPath)visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath)arg1 isMainItem:(_Bool *)arg2;
- (struct PUSimpleIndexPath)mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath)arg1;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (void)invalidateSections;
- (void)_baseSectioningDidInvalidateSections:(id)arg1;
- (_Bool)hasSomeSampling;
- (void)invalidateSampling;
- (void)_baseSectioningDidInvalidateSampling:(id)arg1;
- (void)dealloc;

@end

