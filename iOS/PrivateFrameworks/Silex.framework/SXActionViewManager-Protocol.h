//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class SXAction, UIView;
@protocol SXActionActivityGroup;

@protocol SXActionViewManager <NSObject>
- (void)presentActivityGroup:(id <SXActionActivityGroup>)arg1 action:(SXAction *)arg2 sourceView:(UIView *)arg3 sourceRect:(struct CGRect)arg4 completion:(void (^)(unsigned long long, id <SXActionActivity>))arg5;
@end

