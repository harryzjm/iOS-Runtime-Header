//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol TSDErrorPresenter <NSObject>
- (void)presentErrors:(NSArray *)arg1 withLocalizedDescription:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)presentError:(NSError *)arg1 completionHandler:(void (^)(_Bool))arg2;
@end

