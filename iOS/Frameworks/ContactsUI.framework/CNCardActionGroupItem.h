//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface CNCardActionGroupItem
{
    NSMutableArray *_actions;
}

+ (id)actionGroupItemWithActions:(id)arg1;
+ (id)actionGroupItemWithAction:(id)arg1;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (Class)cellClass;
- (id)initWithAction:(id)arg1;
- (id)init;

@end

