//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol SiriUITemplatedView, SiriUITextTemplateModel;

@interface SiriUITextTemplateView <SiriUITemplateView>
{
    UIImageView *_chevronView;
    UILabel *_detailTextLabel;
    UIButton *_disclosureButton;
}

@property(retain, nonatomic) UIButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
- (void).cxx_destruct;
- (void)reloadData;
- (void)layoutDetailText;
- (void)removeTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (void)addTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (void)_setupDisclosureButton;
- (void)setupDisclosureIndicator;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property __weak id <SiriUITextTemplateModel> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <SiriUITemplatedView> templatedSuperview;

@end

