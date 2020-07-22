//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, QLItem, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QLListCell : UITableViewCell
{
    NSLayoutConstraint *_leftConstraint;
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_thumbnailView;
    long long _loadingID;
    QLItem *_item;
    NSString *_folderName;
    long long _fileDepthLevel;
    NSString *_subtitleString;
    UIImage *_thumbnail;
    unsigned long long _row;
}

+ (id)listCell;
@property unsigned long long row; // @synthesize row=_row;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(nonatomic) long long fileDepthLevel; // @synthesize fileDepthLevel=_fileDepthLevel;
@property(retain, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(retain, nonatomic) QLItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)_folderImage;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

