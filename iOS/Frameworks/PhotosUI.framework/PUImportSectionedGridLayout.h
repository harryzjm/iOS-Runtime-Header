//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, UIColor;
@protocol PUImportSectionedGridLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUImportSectionedGridLayout
{
    _Bool _delegateSupportsPerSectionHighlight;
    NSMutableDictionary *_sectionDecorationAttributesBySection;
    NSMutableDictionary *_preUpdateSectionDecorationAttributesBySection;
    UIColor *_emphasizedSectionBackgroundColor;
    UIColor *_emphasizedSectionBottomStrokeColor;
    double _emphasizedSectionBottomStrokeWidth;
    NSArray *_sectionIndexPathsBeingDeleted;
}

+ (Class)layoutAttributesClass;
@property(retain, nonatomic) NSArray *sectionIndexPathsBeingDeleted; // @synthesize sectionIndexPathsBeingDeleted=_sectionIndexPathsBeingDeleted;
@property(nonatomic) double emphasizedSectionBottomStrokeWidth; // @synthesize emphasizedSectionBottomStrokeWidth=_emphasizedSectionBottomStrokeWidth;
@property(retain, nonatomic) UIColor *emphasizedSectionBottomStrokeColor; // @synthesize emphasizedSectionBottomStrokeColor=_emphasizedSectionBottomStrokeColor;
@property(retain, nonatomic) UIColor *emphasizedSectionBackgroundColor; // @synthesize emphasizedSectionBackgroundColor=_emphasizedSectionBackgroundColor;
@property(retain, nonatomic) NSMutableDictionary *preUpdateSectionDecorationAttributesBySection; // @synthesize preUpdateSectionDecorationAttributesBySection=_preUpdateSectionDecorationAttributesBySection;
@property(retain, nonatomic) NSMutableDictionary *sectionDecorationAttributesBySection; // @synthesize sectionDecorationAttributesBySection=_sectionDecorationAttributesBySection;
- (void).cxx_destruct;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)createLayoutAttributesForSectionBackgroundAtSection:(unsigned long long)arg1;
- (void)recreateSectionDecorationAttributes;
- (void)prepareLayout;
@property(nonatomic) __weak id <PUImportSectionedGridLayoutDelegate> delegate; // @dynamic delegate;
- (id)init;

@end

