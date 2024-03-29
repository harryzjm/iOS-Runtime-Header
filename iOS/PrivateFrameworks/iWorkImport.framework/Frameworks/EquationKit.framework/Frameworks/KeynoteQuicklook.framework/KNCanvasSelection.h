//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDCanvasSelection.h>

@class NSSet;

@interface KNCanvasSelection : TSDCanvasSelection
{
    NSSet *_buildChunks;
}

+ (Class)archivedSelectionClass;
+ (id)emptySelection;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *buildChunks; // @synthesize buildChunks=_buildChunks;
- (id)UUIDDescription;
- (id)subclassDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(id)arg1;
@property(readonly, nonatomic) NSSet *drawableInfos;
@property(readonly, nonatomic) NSSet *unlockedDrawableInfos;
@property(readonly, nonatomic) _Bool containsOnlyUnlockedInfosSupportingHyperlinkActions;
@property(readonly, nonatomic) NSSet *unlockedInfosSupportingHyperlinkActions;
- (_Bool)containsBuildChunksOfAnimationType:(long long)arg1;
- (id)copyReplacingChunksWithChunks:(id)arg1;
- (id)copyExcludingBuildChunks:(id)arg1;
- (id)initWithInfos:(id)arg1 buildChunks:(id)arg2;
- (id)initWithPersistableInfos:(id)arg1 drawableToActionGhostIndexPromiseMap:(id)arg2 buildChunks:(id)arg3;
- (id)initWithInfos:(id)arg1;

@end

