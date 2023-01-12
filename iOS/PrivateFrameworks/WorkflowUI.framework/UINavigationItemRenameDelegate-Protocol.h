//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, UINavigationItem;

@protocol UINavigationItemRenameDelegate <NSObject>
- (void)navigationItem:(UINavigationItem *)arg1 didEndRenamingWithTitle:(NSString *)arg2;

@optional
- (_Bool)navigationItem:(UINavigationItem *)arg1 shouldEndRenamingWithTitle:(NSString *)arg2;
- (NSString *)navigationItem:(UINavigationItem *)arg1 willBeginRenamingWithSuggestedTitle:(NSString *)arg2 selectedRange:(inout struct _NSRange *)arg3;
- (_Bool)navigationItemShouldBeginRenaming:(UINavigationItem *)arg1;
@end

