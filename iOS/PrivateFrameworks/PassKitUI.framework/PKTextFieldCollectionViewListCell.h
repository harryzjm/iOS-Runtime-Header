//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

#import <PassKitUI/PKListTextFieldContentViewDelegate-Protocol.h>

@class NSString;
@protocol PKTextFieldCollectionViewListCellDelegate;

@interface PKTextFieldCollectionViewListCell : UICollectionViewListCell <PKListTextFieldContentViewDelegate>
{
    id <PKTextFieldCollectionViewListCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PKTextFieldCollectionViewListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textFieldDidEndEditing:(id)arg1 forContentView:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 forContentView:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1 forContentView:(id)arg2;
- (id)_textFieldContentView;
- (void)resetTextFieldTextFromLabel;
- (void)endEditing;
- (void)beginEditing;
- (id)textFieldText;
- (void)updateConfigurationUsingState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
