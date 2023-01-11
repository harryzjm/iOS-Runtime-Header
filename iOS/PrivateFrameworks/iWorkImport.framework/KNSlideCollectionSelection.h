//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KNSlideNode, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface KNSlideCollectionSelection
{
    NSOrderedSet *_slideNodes;
    KNSlideNode *_slideNodeToEdit;
}

+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) KNSlideNode *slideNodeToEdit; // @synthesize slideNodeToEdit=_slideNodeToEdit;
@property(readonly, nonatomic) NSOrderedSet *slideNodes; // @synthesize slideNodes=_slideNodes;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)UUIDDescription;
- (id)description;
- (id)init;
- (id)initWithSlideNode:(id)arg1;
- (id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2;
- (void)saveToArchive:(struct SlideCollectionSelectionArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct SlideCollectionSelectionArchive *)arg1 unarchiver:(id)arg2;

@end

