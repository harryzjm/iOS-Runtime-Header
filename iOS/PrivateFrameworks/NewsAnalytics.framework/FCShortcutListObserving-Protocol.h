//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsAnalytics/NSObject-Protocol.h>

@class FCShortcutList, NSArray;

@protocol FCShortcutListObserving <NSObject>
- (void)shortcutList:(FCShortcutList *)arg1 didAddShortcuts:(NSArray *)arg2 changedShortcuts:(NSArray *)arg3 removedShortcuts:(NSArray *)arg4;
@end

