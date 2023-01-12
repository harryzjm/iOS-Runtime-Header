//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPrintOptionListDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIPrintMediaTypeOption <UIPrintOptionListDelegate>
{
    NSArray *_mediaTypes;
    NSMutableArray *_mediaTypeNames;
    NSIndexPath *_selectedIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSMutableArray *mediaTypeNames; // @synthesize mediaTypeNames=_mediaTypeNames;
@property(retain, nonatomic) NSArray *mediaTypes; // @synthesize mediaTypes=_mediaTypes;
- (void)didSelectPrintOption;
- (id)summary;
- (id)shortSummary;
- (id)selectedMediaTypeName;
- (id)printOptionTableViewCell;
- (void)listItemSelected:(id)arg1;
- (id)selectedItem;
- (id)itemList;
- (_Bool)shouldShow;
- (void)setCurrentPrinter:(id)arg1;
- (void)updatePrinterInfo;
- (id)getMediaTypesList;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
