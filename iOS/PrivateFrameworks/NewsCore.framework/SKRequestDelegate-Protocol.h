//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSError, SKRequest;

@protocol SKRequestDelegate <NSObject>

@optional
- (void)request:(SKRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinish:(SKRequest *)arg1;
@end

