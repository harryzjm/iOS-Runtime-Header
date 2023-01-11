//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HULinkedApplicationView, NSString;
@protocol HUResizableCellDelegate;

@interface HULinkedApplicationTableViewCell : UITableViewCell <HUCellProtocol>
{
    HULinkedApplicationView *_linkedApplicationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HULinkedApplicationView *linkedApplicationView; // @synthesize linkedApplicationView=_linkedApplicationView;
- (void)updateUIWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) HFItem *item;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
