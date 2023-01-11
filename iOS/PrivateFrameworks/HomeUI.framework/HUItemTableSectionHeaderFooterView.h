//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSArray, UILabel, UITextView;
@protocol HFStringGenerator;

@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView
{
    id <HFStringGenerator> _message;
    UITextView *_messageTextView;
    unsigned long long _type;
    NSArray *_constraints;
}

+ (id)defaultAttributesForType:(unsigned long long)arg1;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
- (void).cxx_destruct;
- (_Bool)_updateViewContent;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
@property(copy, nonatomic) id <HFStringGenerator> message; // @synthesize message=_message;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @dynamic detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @dynamic textLabel;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

