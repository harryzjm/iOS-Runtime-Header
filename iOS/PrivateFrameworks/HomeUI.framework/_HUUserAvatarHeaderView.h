//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class HUContactView, NSAttributedString;

@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView
{
    HUContactView *_contactView;
}

@property(readonly, nonatomic) HUContactView *contactView; // @synthesize contactView=_contactView;
- (void).cxx_destruct;
- (id)_keyDescriptors;
@property(retain, nonatomic) NSAttributedString *message;
- (id)initWithUserHandle:(id)arg1;

@end

