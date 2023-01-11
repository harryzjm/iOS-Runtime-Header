//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TLKLabel, TLKMultilineText, TLKProminenceView;

@interface TLKSectionHeaderView
{
    TLKMultilineText *_headerText;
    TLKLabel *_headerTextLabel;
    TLKProminenceView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TLKProminenceView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TLKLabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(retain, nonatomic) TLKMultilineText *headerText; // @synthesize headerText=_headerText;
- (id)headerLabelText;
- (void)observedPropertiesChanged;
- (_Bool)usesDefaultLayoutMargins;
- (id)setupContentView;

@end
