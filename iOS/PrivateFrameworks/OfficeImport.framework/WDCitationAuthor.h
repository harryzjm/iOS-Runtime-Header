//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDCitationAuthor : NSObject
{
    NSString *mFirst;
    NSString *mLast;
}

@property(retain, nonatomic) NSString *last; // @synthesize last=mLast;
@property(retain, nonatomic) NSString *first; // @synthesize first=mFirst;
- (id)initWithFirst:(id)arg1 last:(id)arg2;
- (void)dealloc;

@end

