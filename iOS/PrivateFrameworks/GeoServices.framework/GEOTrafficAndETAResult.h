//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEOTrafficAndETAResult : NSObject
{
    _Bool _isSuccess;
    double _seconds;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
}

@property(copy, nonatomic) NSString *longTrafficString; // @synthesize longTrafficString=_longTrafficString;
@property(copy, nonatomic) NSString *shortTrafficString; // @synthesize shortTrafficString=_shortTrafficString;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;

@end
