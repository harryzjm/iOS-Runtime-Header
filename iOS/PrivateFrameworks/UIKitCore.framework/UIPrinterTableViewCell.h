//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPrinterAccessoryViewDelegate-Protocol.h>

@class NSString, PKPrinter, UIGestureRecognizer, UIPrinterAccessoryView;

__attribute__((visibility("hidden")))
@interface UIPrinterTableViewCell <UIPrinterAccessoryViewDelegate>
{
    PKPrinter *_printer;
    id _delegate;
    UIPrinterAccessoryView *_printerAccessoryView;
    UIGestureRecognizer *_expandedAccessoryTapRecognizer;
}

@property(retain, nonatomic) UIGestureRecognizer *expandedAccessoryTapRecognizer; // @synthesize expandedAccessoryTapRecognizer=_expandedAccessoryTapRecognizer;
@property(retain, nonatomic) UIPrinterAccessoryView *printerAccessoryView; // @synthesize printerAccessoryView=_printerAccessoryView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak PKPrinter *printer; // @synthesize printer=_printer;
- (void).cxx_destruct;
- (void)expandedAccessoryAreaTapped;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) int printerState;
- (void)printerAccessoryViewInfoButtonPressed:(id)arg1;
- (void)prepareForReuse;
@property(nonatomic) _Bool checked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
