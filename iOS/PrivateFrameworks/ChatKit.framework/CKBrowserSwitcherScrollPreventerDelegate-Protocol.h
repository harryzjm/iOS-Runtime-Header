//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserSwitcherScrollPreventer, NSDate;

@protocol CKBrowserSwitcherScrollPreventerDelegate <NSObject>
- (void)scrollPreventerDidLayoutSubviews:(CKBrowserSwitcherScrollPreventer *)arg1;
- (void)scrollPreventerDidEndDecelerating:(CKBrowserSwitcherScrollPreventer *)arg1;
- (void)scrollPreventer:(CKBrowserSwitcherScrollPreventer *)arg1 didReceiveTouchAtDate:(NSDate *)arg2;
- (void)scrollPreventer:(CKBrowserSwitcherScrollPreventer *)arg1 scrolledToOffset:(struct CGPoint)arg2;
- (void)scrollPreventerWillBeginDragging:(CKBrowserSwitcherScrollPreventer *)arg1;
@end

