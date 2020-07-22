//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, TSDInfoCollectionSelectionHelper;

__attribute__((visibility("hidden")))
@interface TSDDrawableSelection
{
    TSDInfoCollectionSelectionHelper *_selectionHelper;
}

+ (Class)archivedSelectionClass;
@property(retain, nonatomic) TSDInfoCollectionSelectionHelper *selectionHelper; // @synthesize selectionHelper=_selectionHelper;
- (void).cxx_destruct;
- (id)UUIDDescription;
- (id)description;
@property(readonly, nonatomic) NSString *subclassDescription;
- (id)infosOfClass:(Class)arg1;
- (_Bool)containsUnlockedKindOfClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
- (_Bool)containsKindOfClass:(Class)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long infoCount;
@property(readonly, nonatomic) NSSet *nonInteractiveInfos;
@property(readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property(readonly, nonatomic) NSSet *infos;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2;
- (id)initWithInfos:(id)arg1;
- (void)saveToArchive:(struct DrawableSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct DrawableSelectionArchive *)arg1 unarchiver:(id)arg2;

@end

