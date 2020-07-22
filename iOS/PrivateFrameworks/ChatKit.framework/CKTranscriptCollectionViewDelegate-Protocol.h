//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKEditableCollectionViewDelegate-Protocol.h>

@class CKTranscriptCollectionView;

@protocol CKTranscriptCollectionViewDelegate <CKEditableCollectionViewDelegate>
- (void)collectionViewDidInset:(CKTranscriptCollectionView *)arg1;
- (void)collectionViewWillInset:(CKTranscriptCollectionView *)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)collectionViewWillProgrammaticallyScroll:(CKTranscriptCollectionView *)arg1 animated:(_Bool)arg2;
- (void)collectionViewWillScroll:(CKTranscriptCollectionView *)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
@end

