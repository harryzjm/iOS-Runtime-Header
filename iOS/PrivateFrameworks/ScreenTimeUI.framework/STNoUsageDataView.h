//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class STUser, UILabel;

@interface STNoUsageDataView : UIView
{
    STUser *_user;
    UILabel *_noDataDetailTextLabel;
}

@property(readonly, nonatomic) UILabel *noDataDetailTextLabel; // @synthesize noDataDetailTextLabel=_noDataDetailTextLabel;
@property(retain, nonatomic) STUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)initWithPreferredFontTextStyle:(id)arg1 isWidget:(_Bool)arg2;

@end

