//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIBarButtonItem;

@interface RUIBarButtonItem
{
    UIBarButtonItem *_barButtonItem;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
- (void)_buttonPressed:(id)arg1;

@end

