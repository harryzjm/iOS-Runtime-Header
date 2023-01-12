//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIPrintOptionListDelegate-Protocol.h>

@class NSArray, NSString, UIPrintPanelViewController, UITableView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UIPrintFinishingTemplatesOption : NSObject <UIPrintOptionListDelegate>
{
    UIPrintPanelViewController *_printPanelViewController;
    UITableView *_finishingOptionsTableView;
    NSArray *_finishingTemplates;
    NSArray *_finishingTemplateNames;
    long long _value;
    UITableViewCell *_finishingTemplatesCell;
    NSString *_summary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) UITableViewCell *finishingTemplatesCell; // @synthesize finishingTemplatesCell=_finishingTemplatesCell;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(retain, nonatomic) NSArray *finishingTemplateNames; // @synthesize finishingTemplateNames=_finishingTemplateNames;
@property(retain, nonatomic) NSArray *finishingTemplates; // @synthesize finishingTemplates=_finishingTemplates;
@property(nonatomic) __weak UITableView *finishingOptionsTableView; // @synthesize finishingOptionsTableView=_finishingOptionsTableView;
@property(nonatomic) __weak UIPrintPanelViewController *printPanelViewController; // @synthesize printPanelViewController=_printPanelViewController;
- (void)listItemSelected:(id)arg1;
- (id)selectedItem;
- (id)itemList;
- (id)title;
- (id)initWithTemplates:(id)arg1 finishingTemplateNames:(id)arg2 printPanelViewController:(id)arg3 finishingOptionsTableView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
