//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateView
{
    id _textBalloonView;
}

- (void).cxx_destruct;
- (struct CGSize)_textBalloonViewBoundingSize;
- (void)reloadData;
- (double)desiredHeight;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SiriUIMessageContentTemplateModel> dataSource; // @dynamic dataSource;

@end

