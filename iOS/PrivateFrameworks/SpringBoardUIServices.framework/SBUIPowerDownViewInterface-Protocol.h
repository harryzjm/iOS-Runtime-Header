//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@protocol SBUIPowerDownViewDelegate;

@protocol SBUIPowerDownViewInterface <NSObject>
@property(nonatomic) __weak id <SBUIPowerDownViewDelegate> delegate;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
@end

