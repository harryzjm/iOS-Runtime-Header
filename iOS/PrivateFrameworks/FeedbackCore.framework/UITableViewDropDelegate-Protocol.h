//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FeedbackCore/NSObject-Protocol.h>

@class NSIndexPath, UIDragPreviewParameters, UITableView, UITableViewDropProposal;
@protocol UIDropSession, UITableViewDropCoordinator;

@protocol UITableViewDropDelegate <NSObject>
- (void)tableView:(UITableView *)arg1 performDropWithCoordinator:(id <UITableViewDropCoordinator>)arg2;

@optional
- (UIDragPreviewParameters *)tableView:(UITableView *)arg1 dropPreviewParametersForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)tableView:(UITableView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UITableViewDropProposal *)tableView:(UITableView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)tableView:(UITableView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
@end

