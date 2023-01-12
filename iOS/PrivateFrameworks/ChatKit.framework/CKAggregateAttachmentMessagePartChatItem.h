//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKMediaObjectAssetDataSource, NSArray, NSURL, UITraitCollection;

@interface CKAggregateAttachmentMessagePartChatItem
{
    long long _numberOfPhotoAttachments;
    long long _numberOfVideoAttachments;
    long long _numberOfOtherAttachments;
    _Bool _hasCheckedForMomentShareURL;
    UITraitCollection *_transcriptTraitCollection;
    NSArray *_aggregateChatItems;
    NSArray *_mediaObjects;
    NSArray *_aggregatedNonTapbackVisibleAssociatedMessageChatItems;
    CKMediaObjectAssetDataSource *_dataSource;
    NSURL *_momentShareURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *momentShareURL; // @synthesize momentShareURL=_momentShareURL;
@property(retain, nonatomic) CKMediaObjectAssetDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSArray *aggregatedNonTapbackVisibleAssociatedMessageChatItems; // @synthesize aggregatedNonTapbackVisibleAssociatedMessageChatItems=_aggregatedNonTapbackVisibleAssociatedMessageChatItems;
@property(retain, nonatomic) NSArray *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(retain, nonatomic) NSArray *aggregateChatItems; // @synthesize aggregateChatItems=_aggregateChatItems;
- (id)transcriptTraitCollection;
- (CDStruct_15189878)_additionalCountInMomentShare:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *transferGUIDs;
- (_Bool)shouldCacheSize;
- (Class)balloonViewClass;
- (_Bool)canQuickSave;
- (void)setTranscriptTraitCollection:(id)arg1;
- (_Bool)canExport;
- (_Bool)canDelete;
- (_Bool)canForward;
- (_Bool)canCopy;
- (Class)cellClass;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (void)_generateMediaObjects;
- (id)visibleAssociatedMessageChatItems;
@property(readonly, nonatomic) NSArray *firstItemVisibleAssociatedChatItems;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (unsigned long long)layoutType;

@end
