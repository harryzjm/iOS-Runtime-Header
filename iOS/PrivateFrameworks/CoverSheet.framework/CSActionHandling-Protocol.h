//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSAction;
@protocol CSCoverSheetParticipating;

@protocol CSActionHandling <NSObject>
- (void)handleAction:(CSAction *)arg1 fromSender:(id <CSCoverSheetParticipating>)arg2;
@end
