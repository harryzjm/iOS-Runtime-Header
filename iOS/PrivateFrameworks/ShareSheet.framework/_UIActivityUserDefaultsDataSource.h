//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _UIActivityUserDefaultsDataSourceProxy;

@interface _UIActivityUserDefaultsDataSource : UITableViewDiffableDataSource
{
    id <_UIActivityUserDefaultsDataSourceProxy> _dataSourceProxy;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_UIActivityUserDefaultsDataSourceProxy> dataSourceProxy; // @synthesize dataSourceProxy=_dataSourceProxy;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;

@end
