//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class DOCStackedThumbnailView, DOCTagsLineView, NSArray, NSLayoutConstraint, NSString, UIButton, UILabel;
@protocol DOCTagViewDelegate;

@interface DOCShareHeaderView : UIView
{
    NSArray *_tags;
    UIButton *_addTagButton;
    UILabel *_displayNameLabel;
    UILabel *_providerNameLabel;
    DOCStackedThumbnailView *_thumbnailView;
    DOCTagsLineView *_tagsView;
    NSArray *_addTagButtonIsNextToProviderNameConstraints;
    NSArray *_addTagButtonIsNextToTagsConstraints;
    NSArray *_addTagButtonIsHiddenConstraints;
    NSArray *_hasTagsConstraints;
    NSArray *_noTagsConstraints;
    NSLayoutConstraint *_thumbnailWidthConstraint;
    NSLayoutConstraint *_thumbnailHeightConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *thumbnailHeightConstraint; // @synthesize thumbnailHeightConstraint=_thumbnailHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *thumbnailWidthConstraint; // @synthesize thumbnailWidthConstraint=_thumbnailWidthConstraint;
@property(readonly, nonatomic) NSArray *noTagsConstraints; // @synthesize noTagsConstraints=_noTagsConstraints;
@property(readonly, nonatomic) NSArray *hasTagsConstraints; // @synthesize hasTagsConstraints=_hasTagsConstraints;
@property(readonly, nonatomic) NSArray *addTagButtonIsHiddenConstraints; // @synthesize addTagButtonIsHiddenConstraints=_addTagButtonIsHiddenConstraints;
@property(readonly, nonatomic) NSArray *addTagButtonIsNextToTagsConstraints; // @synthesize addTagButtonIsNextToTagsConstraints=_addTagButtonIsNextToTagsConstraints;
@property(readonly, nonatomic) NSArray *addTagButtonIsNextToProviderNameConstraints; // @synthesize addTagButtonIsNextToProviderNameConstraints=_addTagButtonIsNextToProviderNameConstraints;
@property(readonly, nonatomic) DOCTagsLineView *tagsView; // @synthesize tagsView=_tagsView;
@property(readonly, nonatomic) DOCStackedThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, nonatomic) UILabel *providerNameLabel; // @synthesize providerNameLabel=_providerNameLabel;
@property(readonly, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(readonly, nonatomic) UIButton *addTagButton; // @synthesize addTagButton=_addTagButton;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *providerName;
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSArray *items;
@property(nonatomic) _Bool showAddTagButton;
@property(nonatomic) __weak id <DOCTagViewDelegate> delegate; // @dynamic delegate;
- (void)updateThumbnailSize;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

