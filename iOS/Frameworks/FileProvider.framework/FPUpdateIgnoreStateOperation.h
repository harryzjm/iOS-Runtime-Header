//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface FPUpdateIgnoreStateOperation
{
    NSArray *_items;
    _Bool _ignoreState;
}

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)actionMain;
- (void)presendNotifications;
- (id)initWithItems:(id)arg1 ignoreState:(_Bool)arg2 action:(id)arg3;
- (id)replicateForItems:(id)arg1;

@end
