//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class TTYUtteranceCell, TUCall;

@protocol TTYUtteranceCellDelegate <NSObject>
- (TUCall *)callContainingUtterance;
- (void)utteranceCellDidUpdateContent:(TTYUtteranceCell *)arg1;
@end
