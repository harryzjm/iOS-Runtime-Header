//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CKAbstractReviewTableViewCell : UITableViewCell
{
    unsigned long long _size;
    UILabel *_nameLabel;
    UILabel *_lastModifiedLabel;
    UILabel *_sizeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *lastModifiedLabel; // @synthesize lastModifiedLabel=_lastModifiedLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *subheadingText;
@property(retain, nonatomic) NSString *mainText;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

