//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXVideoProviding-Protocol.h>

@protocol SXVideoAdProviding <SXVideoProviding>
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, nonatomic) unsigned long long skipThreshold;
- (void)presentPrivacyStatement;
- (void)presentAction;
- (void)skipped;
@end
