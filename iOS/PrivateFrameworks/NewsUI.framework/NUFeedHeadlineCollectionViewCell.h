//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, NUViewNode;

@interface NUFeedHeadlineCollectionViewCell : UICollectionViewCell
{
    NUViewNode *_thumbnailImageViewNode;
    NUViewNode *_publisherLogoImageViewNode;
    NUViewNode *_titleLabelNode;
    NUViewNode *_dateLabelNode;
    NSString *_headlineIdentifier;
}

+ (id)titleLabelFont;
+ (id)dateLabelFont;
@property(copy, nonatomic) NSString *headlineIdentifier; // @synthesize headlineIdentifier=_headlineIdentifier;
@property(readonly, nonatomic) NUViewNode *dateLabelNode; // @synthesize dateLabelNode=_dateLabelNode;
@property(readonly, nonatomic) NUViewNode *titleLabelNode; // @synthesize titleLabelNode=_titleLabelNode;
@property(readonly, nonatomic) NUViewNode *publisherLogoImageViewNode; // @synthesize publisherLogoImageViewNode=_publisherLogoImageViewNode;
@property(readonly, nonatomic) NUViewNode *thumbnailImageViewNode; // @synthesize thumbnailImageViewNode=_thumbnailImageViewNode;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
