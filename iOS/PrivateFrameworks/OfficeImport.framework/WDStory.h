//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDStory : NSObject
{
    OADDrawable *mHead;
    _Bool mOle;
}

- (_Bool)isOle;
- (void)setOle:(_Bool)arg1;
- (id)text;
- (id)head;
- (void)dealloc;
- (id)initWithHead:(id)arg1;

@end

