//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class ENNotebook, ENNotebookTypeView, UIButton;

@interface ENNotebookCell : UITableViewCell
{
    _Bool _isCurrentNotebook;
    _Bool _isReadOnlyNotebook;
    ENNotebook *_notebook;
    UIButton *_checkButton;
    ENNotebookTypeView *_notebookTypeView;
}

@property(retain, nonatomic) ENNotebookTypeView *notebookTypeView; // @synthesize notebookTypeView=_notebookTypeView;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) ENNotebook *notebook; // @synthesize notebook=_notebook;
@property(nonatomic) _Bool isReadOnlyNotebook; // @synthesize isReadOnlyNotebook=_isReadOnlyNotebook;
@property(nonatomic) _Bool isCurrentNotebook; // @synthesize isCurrentNotebook=_isCurrentNotebook;
- (void).cxx_destruct;
- (void)configureTextLabelColor;
- (id)sharedAccessoryView;
- (id)businessAccessoryView;
- (id)initWithReuseIdentifier:(id)arg1;

@end
