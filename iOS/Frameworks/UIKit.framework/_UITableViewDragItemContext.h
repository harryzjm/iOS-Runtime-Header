//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewDragItemContext : NSObject
{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)initWithIndexPath:(id)arg1 forTableView:(id)arg2;

@end
