//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UICalendarViewDecorationSystem : NSObject
{
    NSMutableDictionary *_decorationViewFeed;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *decorationViewFeed; // @synthesize decorationViewFeed=_decorationViewFeed;
- (void)_prepareDecorationFeedForKey:(id)arg1;
- (void)reset;
- (void)invalidateDecoration:(id)arg1;
- (void)configureDecoration:(id)arg1;
- (id)init;

@end

