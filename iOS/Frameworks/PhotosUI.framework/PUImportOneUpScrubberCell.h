//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUImportItemViewModel, UIActivityIndicatorView;
@protocol PUImportOneUpScrubberCellDisplayDelegate;

__attribute__((visibility("hidden")))
@interface PUImportOneUpScrubberCell <PXChangeObserver>
{
    _Bool _selectable;
    _Bool _needsBadgeUpdate;
    id <PUImportOneUpScrubberCellDisplayDelegate> _displayDelegate;
    PUImportItemViewModel *_importItem;
    long long _badgeType;
    UIActivityIndicatorView *_spinner;
    long long _thumbnailRequestID;
}

+ (id)emptyThumbnailBackgroundColor;
@property(nonatomic) long long thumbnailRequestID; // @synthesize thumbnailRequestID=_thumbnailRequestID;
@property(nonatomic) _Bool needsBadgeUpdate; // @synthesize needsBadgeUpdate=_needsBadgeUpdate;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property(retain, nonatomic) PUImportItemViewModel *importItem; // @synthesize importItem=_importItem;
@property(nonatomic) __weak id <PUImportOneUpScrubberCellDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_createSpinnerIfNecessary;
- (void)updateToThumbnail:(id)arg1;
- (void)refreshThumbnail;
- (void)updateBadgeUIIfNeeded;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonPUImportOneUpScrubberCellInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

