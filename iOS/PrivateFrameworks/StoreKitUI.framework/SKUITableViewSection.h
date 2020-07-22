//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SKUITableViewSectionDelegate;

@interface SKUITableViewSection : NSObject
{
    id <SKUITableViewSectionDelegate> _delegate;
    _Bool _hidesHeaderView;
    long long _sectionIndex;
}

@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool hidesHeaderView; // @synthesize hidesHeaderView=_hidesHeaderView;
@property(nonatomic) __weak id <SKUITableViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
@property(readonly, nonatomic) long long numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (id)footerViewForTableView:(id)arg1;

@end

