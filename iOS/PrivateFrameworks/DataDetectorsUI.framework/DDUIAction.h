//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAction.h>

@class DDAction;

@interface DDUIAction : UIAction
{
    DDAction *_dd_action;
    CDUnknownBlockType _dd_handler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dd_handler; // @synthesize dd_handler=_dd_handler;
@property(retain, nonatomic) DDAction *dd_action; // @synthesize dd_action=_dd_action;
- (void)dd_performAction;

@end
