//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class GKLabel, NSString;

@interface GKMoreExistSectionFooterView : UICollectionReusableView
{
    GKLabel *_label;
}

+ (double)defaultHeight;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) GKLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *text;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

