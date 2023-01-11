//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TestFlightCore/UITableViewDataSource-Protocol.h>
#import <TestFlightCore/UITableViewDelegate-Protocol.h>

@class NSString, TFFeedbackFormCellUpdater, TFFeedbackFormPresenter;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    TFFeedbackFormPresenter *_presenter;
    TFFeedbackFormCellUpdater *_cellUpdater;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFFeedbackFormCellUpdater *cellUpdater; // @synthesize cellUpdater=_cellUpdater;
@property(readonly, nonatomic) TFFeedbackFormPresenter *presenter; // @synthesize presenter=_presenter;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)prepareTableViewForDataSource:(id)arg1;
- (id)initWithPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
