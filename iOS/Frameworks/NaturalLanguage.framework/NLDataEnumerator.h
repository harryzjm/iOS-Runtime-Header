//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLDataProvider;

__attribute__((visibility("hidden")))
@interface NLDataEnumerator : NSObject
{
    NLDataProvider *_dataProvider;
    unsigned long long _idx;
}

- (void).cxx_destruct;
- (id)nextInstance;
- (id)initWithDataProvider:(id)arg1;

@end

