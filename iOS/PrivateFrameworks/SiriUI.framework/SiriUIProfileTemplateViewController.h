//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUILabelStackTemplateViewDelegate-Protocol.h>

@class NSString, SiriUIProfileTemplateView;
@protocol SiriUIProfileTemplateModel;

@interface SiriUIProfileTemplateViewController <SiriUILabelStackTemplateViewDelegate>
{
}

- (_Bool)labelStackTemplateViewShouldLayoutCompressed:(id)arg1;
- (void)loadView;
- (Class)templateViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <SiriUIProfileTemplateModel> templateModel; // @dynamic templateModel;
@property(retain, nonatomic) SiriUIProfileTemplateView *view; // @dynamic view;

@end

