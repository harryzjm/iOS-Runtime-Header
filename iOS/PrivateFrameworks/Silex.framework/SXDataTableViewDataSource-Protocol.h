//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXDataTableDrawView, SXDataTableView, UIView;

@protocol SXDataTableViewDataSource <NSObject>
- (UIView *)dataTableView:(SXDataTableView *)arg1 viewForCellAtIndexPath:(CDStruct_4bcfbbae)arg2 constraintToSize:(struct CGSize)arg3;

@optional
- (SXDataTableDrawView *)dataTableView:(SXDataTableView *)arg1 drawViewForColumnAtIndex:(unsigned long long)arg2;
- (SXDataTableDrawView *)dataTableView:(SXDataTableView *)arg1 drawViewForRowAtIndex:(unsigned long long)arg2;
@end

