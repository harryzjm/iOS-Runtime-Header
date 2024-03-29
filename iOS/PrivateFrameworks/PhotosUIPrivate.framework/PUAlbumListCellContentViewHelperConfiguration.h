//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUPhotoDecoration;

__attribute__((visibility("hidden")))
@interface PUAlbumListCellContentViewHelperConfiguration : NSObject
{
    _Bool _allowsEmailInSubtitle;
    _Bool _showsDeleteButtonOnCellContentView;
    _Bool _hasRoundedCorners;
    _Bool _shouldUseTableView;
    _Bool _shouldCenterTextHorizontally;
    _Bool _hasClearBackgroundColor;
    _Bool _cornerOverlaysDisabled;
    long long _cellContentViewLayout;
    unsigned long long _stackViewStyle;
    unsigned long long _folderStackViewStyle;
    long long _imageContentMode;
    NSString *_albumSubtitleFormat;
    NSString *_nameOfEmptyPeopleAlbumPlaceholderImage;
    NSString *_nameOfEmptyAlbumPlaceholderImage;
    NSString *_nameOfEmptySharedAlbumPlaceholderImage;
    PUPhotoDecoration *_photoDecoration;
    double _gridMargin;
    double _gridItemSpacing;
    double _posterSquareCornerRadius;
    double _posterSubitemCornerRadius;
    double _dynamicTitleLeading;
    double _dynamicSubtitleleading;
    double _dynamicTopLeading;
    struct CGSize _stackSize;
    struct CGSize _pixelSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct UIEdgeInsets _stackPerspectiveInsets;
    struct UIEdgeInsets _previewInsets;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(nonatomic) double dynamicTopLeading; // @synthesize dynamicTopLeading=_dynamicTopLeading;
@property(nonatomic) double dynamicSubtitleleading; // @synthesize dynamicSubtitleleading=_dynamicSubtitleleading;
@property(nonatomic) double dynamicTitleLeading; // @synthesize dynamicTitleLeading=_dynamicTitleLeading;
@property(nonatomic) struct UIEdgeInsets previewInsets; // @synthesize previewInsets=_previewInsets;
@property(nonatomic) _Bool cornerOverlaysDisabled; // @synthesize cornerOverlaysDisabled=_cornerOverlaysDisabled;
@property(nonatomic) double posterSubitemCornerRadius; // @synthesize posterSubitemCornerRadius=_posterSubitemCornerRadius;
@property(nonatomic) double posterSquareCornerRadius; // @synthesize posterSquareCornerRadius=_posterSquareCornerRadius;
@property(nonatomic) double gridItemSpacing; // @synthesize gridItemSpacing=_gridItemSpacing;
@property(nonatomic) double gridMargin; // @synthesize gridMargin=_gridMargin;
@property(nonatomic) struct UIEdgeInsets stackPerspectiveInsets; // @synthesize stackPerspectiveInsets=_stackPerspectiveInsets;
@property(nonatomic) struct UIOffset stackPerspectiveOffset; // @synthesize stackPerspectiveOffset=_stackPerspectiveOffset;
@property(nonatomic) struct UIOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property(retain, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property(copy, nonatomic) NSString *nameOfEmptySharedAlbumPlaceholderImage; // @synthesize nameOfEmptySharedAlbumPlaceholderImage=_nameOfEmptySharedAlbumPlaceholderImage;
@property(copy, nonatomic) NSString *nameOfEmptyAlbumPlaceholderImage; // @synthesize nameOfEmptyAlbumPlaceholderImage=_nameOfEmptyAlbumPlaceholderImage;
@property(copy, nonatomic) NSString *nameOfEmptyPeopleAlbumPlaceholderImage; // @synthesize nameOfEmptyPeopleAlbumPlaceholderImage=_nameOfEmptyPeopleAlbumPlaceholderImage;
@property(copy, nonatomic) NSString *albumSubtitleFormat; // @synthesize albumSubtitleFormat=_albumSubtitleFormat;
@property(nonatomic) long long imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(nonatomic) unsigned long long folderStackViewStyle; // @synthesize folderStackViewStyle=_folderStackViewStyle;
@property(nonatomic) unsigned long long stackViewStyle; // @synthesize stackViewStyle=_stackViewStyle;
@property(nonatomic) long long cellContentViewLayout; // @synthesize cellContentViewLayout=_cellContentViewLayout;
@property(nonatomic) _Bool hasClearBackgroundColor; // @synthesize hasClearBackgroundColor=_hasClearBackgroundColor;
@property(nonatomic) _Bool shouldCenterTextHorizontally; // @synthesize shouldCenterTextHorizontally=_shouldCenterTextHorizontally;
@property(nonatomic) _Bool shouldUseTableView; // @synthesize shouldUseTableView=_shouldUseTableView;
@property(nonatomic) _Bool hasRoundedCorners; // @synthesize hasRoundedCorners=_hasRoundedCorners;
@property(nonatomic) _Bool showsDeleteButtonOnCellContentView; // @synthesize showsDeleteButtonOnCellContentView=_showsDeleteButtonOnCellContentView;
@property(nonatomic) _Bool allowsEmailInSubtitle; // @synthesize allowsEmailInSubtitle=_allowsEmailInSubtitle;
- (void)configureWithSpec:(id)arg1;

@end

