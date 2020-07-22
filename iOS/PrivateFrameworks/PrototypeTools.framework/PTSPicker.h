//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PrototypeTools/PTSHUDControl-Protocol.h>
#import <PrototypeTools/UITableViewDataSource-Protocol.h>
#import <PrototypeTools/UITableViewDelegate-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSArray, NSString, UILabel, UITableView, _UISettings;

@interface PTSPicker : UIView <UITableViewDelegate, UITableViewDataSource, PTSHUDControl, _UISettingsKeyPathObserver>
{
    int _alignment;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    UILabel *_titleLabel;
    NSArray *_choices;
    UITableView *_tableView;
    NSArray *_subviewConstraints;
}

+ (id)pickerForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3 choices:(id)arg4;
+ (id)picker;
+ (struct CGRect)defaultFrame;
@property(retain, nonatomic) NSArray *subviewConstraints; // @synthesize subviewConstraints=_subviewConstraints;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)makeTitleLabel;
- (id)makeTableView;
- (void)layoutSubviews;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

