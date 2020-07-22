//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TSKSearch : NSObject
{
    _Bool _isComplete;
    NSString *_string;
    unsigned long long _options;
    CDUnknownBlockType _hitBlock;
}

@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(copy, nonatomic) CDUnknownBlockType hitBlock; // @synthesize hitBlock=_hitBlock;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void)dealloc;
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3;

@end

