//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class UIInteractionProgress;

@protocol UIInteractionProgressObserver <NSObject>

@optional
- (void)interactionProgress:(UIInteractionProgress *)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(UIInteractionProgress *)arg1;
@end

