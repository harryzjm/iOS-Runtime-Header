//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/UICollectionViewDataSource-Protocol.h>
#import <PencilKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, UICollectionView, UILabel, UIScrollView;

@interface PKRecognitionDataCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray *_drawings;
    NSArray *_drawingImages;
    NSDictionary *_metadata;
    UIScrollView *_scrollView;
    UILabel *_descriptionLabel;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSArray *drawingImages; // @synthesize drawingImages=_drawingImages;
@property(retain, nonatomic) NSArray *drawings; // @synthesize drawings=_drawings;
- (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)synchronousImageForDrawing:(id)arg1;
- (id)saveDataForDrawings:(id)arg1 baseURL:(id)arg2 shouldSaveRecognitionData:(_Bool)arg3;
- (void)openTapToRadarWithTempDirectoryURL:(id)arg1;
- (void)openAppleFeedbackAssistantWithTempDirectoryURL:(id)arg1;
- (void)sendRadarButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)adjustCollectionViewHeight;
- (void)viewDidLoad;
- (id)initWithDrawings:(id)arg1 metadata:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

