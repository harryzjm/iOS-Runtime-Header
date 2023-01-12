//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class NSDate;
@protocol PRDateObserving;

@protocol PRDateProviding <NSObject>
@property(readonly, nonatomic) NSDate *date;
- (void)removeMinuteUpdateObserver:(id <PRDateObserving>)arg1;
- (void)addMinuteUpdateObserver:(id <PRDateObserving>)arg1;
@end

