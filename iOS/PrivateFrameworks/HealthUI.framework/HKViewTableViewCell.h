//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface HKViewTableViewCell : UITableViewCell
{
    UIView *_hostedView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;
- (void)_pinViewToContent:(id)arg1;
- (void)prepareForReuse;
- (void)setHostedView:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end
