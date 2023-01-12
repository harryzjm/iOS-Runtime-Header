//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/PXMessagesStackViewDelegate-Protocol.h>

@class CKMediaObjectAssetDataSourceManager, CKMediaObjectImageProvider, NSString;
@protocol CKPhotoStackBalloonViewDelegate;

@interface CKPhotoStackBalloonView <PXMessagesStackViewDelegate>
{
}

- (void)prepareForReuse;
- (void)removeTransitionView;
- (id)transitionViewForCurrentItem:(id)arg1 sourceFrame:(struct CGRect *)arg2;
- (void)stackViewDidSelectAdditionalItemsCard:(id)arg1;
- (_Bool)stackView:(id)arg1 shouldAutoplayAsset:(id)arg2;
- (void)stackView:(id)arg1 didChangeCurrentAssetReference:(id)arg2 isProgrammaticChange:(_Bool)arg3 didChangeIndex:(_Bool)arg4;
- (void)stackView:(id)arg1 didSelectAssetReference:(id)arg2;
- (id)_createStackView;
- (void)prepareForDisplay;
- (void)configureForMessagePart:(id)arg1;

// Remaining properties
@property(retain, nonatomic) CKMediaObjectAssetDataSourceManager *dataSourceManager; // @dynamic dataSourceManager;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CKPhotoStackBalloonViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CKMediaObjectImageProvider *mediaProvider; // @dynamic mediaProvider;
@property(readonly) Class superclass;

@end
