//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STIntroDowntimeTableViewController, STIntroductionViewModel;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeViewController
{
    STIntroductionViewModel *_model;
    CDUnknownBlockType _continueHandler;
}

- (void).cxx_destruct;
@property(readonly, copy) CDUnknownBlockType continueHandler; // @synthesize continueHandler=_continueHandler;
@property(readonly) STIntroductionViewModel *model; // @synthesize model=_model;
- (void)_notNow:(id)arg1;
- (void)_setDowntime:(id)arg1;
- (void)loadView;
@property(retain, nonatomic) STIntroDowntimeTableViewController *tableViewController;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;

@end

