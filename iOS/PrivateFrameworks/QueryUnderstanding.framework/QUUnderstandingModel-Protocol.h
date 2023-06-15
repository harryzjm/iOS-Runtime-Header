//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QueryUnderstanding/NSObject-Protocol.h>

@class NSLocale, NSString;

@protocol QUUnderstandingModel <NSObject>
@property(readonly, nonatomic) NSLocale *locale;
- (void)getUnderstandingForQueryString:(NSString *)arg1 withCompletionHandler:(void (^)(id <QUUnderstandingOutput>, NSError *))arg2;
- (void)loadWithCompletionHandler:(void (^)(id <QUUnderstandingModel>, NSError *))arg1;
@end

