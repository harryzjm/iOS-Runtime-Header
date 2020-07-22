//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKMessageEntryView, NSIndexPath;

@protocol CKMessageEntryViewInputDelegate <NSObject>
- (long long)messageEntryViewHighLightInputButton:(CKMessageEntryView *)arg1;
- (_Bool)messageEntryShouldHideCaret:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidTakeFocus:(CKMessageEntryView *)arg1;
- (void)messageEntryViewHandwritingButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewBrowserButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonHit:(CKMessageEntryView *)arg1;

@optional
- (void)messageEntryViewDidSwipeForJellyfishDemo:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidCollapse:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidExpand:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didSelectPluginAtIndex:(NSIndexPath *)arg2;
@end

