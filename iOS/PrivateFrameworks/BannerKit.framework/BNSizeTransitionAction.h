//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@class NSUUID;

@interface BNSizeTransitionAction : BSAction
{
}

- (id)_initWithUniqueIdentifier:(id)arg1 state:(long long)arg2 targetSize:(struct CGSize)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)transitionCompleteAction;
@property(readonly, nonatomic) struct CGSize targetSize;
@property(readonly, nonatomic) long long sizeTransitionActionState;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
- (id)initWithTargetSize:(struct CGSize)arg1;

@end
