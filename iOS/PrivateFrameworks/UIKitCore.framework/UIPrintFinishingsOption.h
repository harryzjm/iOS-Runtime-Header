//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIPrintFinishingTemplatesOption, UITableView;

__attribute__((visibility("hidden")))
@interface UIPrintFinishingsOption <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_printerFinishingOptions;
    NSArray *_finishingTemplates;
    UITableView *_finishingOptionsTableView;
    NSMutableArray *_finishingTemplateNames;
    UIPrintFinishingTemplatesOption *_finishingTemplatesOption;
    long long _finishingOptionSelection;
}

- (void).cxx_destruct;
@property(nonatomic) long long finishingOptionSelection; // @synthesize finishingOptionSelection=_finishingOptionSelection;
@property(retain, nonatomic) UIPrintFinishingTemplatesOption *finishingTemplatesOption; // @synthesize finishingTemplatesOption=_finishingTemplatesOption;
@property(retain, nonatomic) NSMutableArray *finishingTemplateNames; // @synthesize finishingTemplateNames=_finishingTemplateNames;
@property(retain, nonatomic) UITableView *finishingOptionsTableView; // @synthesize finishingOptionsTableView=_finishingOptionsTableView;
@property(retain, nonatomic) NSArray *finishingTemplates; // @synthesize finishingTemplates=_finishingTemplates;
@property(retain, nonatomic) NSArray *printerFinishingOptions; // @synthesize printerFinishingOptions=_printerFinishingOptions;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)summary;
- (id)title;
- (void)clearFinishingOptions;
- (id)preparepPrinterFinishingOptions;
- (void)setCurrentPrinter:(id)arg1;
- (void)updatePrinterInfo;
- (_Bool)shouldShow;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
