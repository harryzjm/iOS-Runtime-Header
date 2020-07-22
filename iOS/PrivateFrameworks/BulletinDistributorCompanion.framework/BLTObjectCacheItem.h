//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSSecureCoding;

@interface BLTObjectCacheItem : NSObject
{
    id <NSSecureCoding> _object;
    double _lastAccessedDate;
}

+ (id)cacheItemWithObject:(id)arg1;
@property(readonly, nonatomic) double lastAccessedDate; // @synthesize lastAccessedDate=_lastAccessedDate;
@property(readonly, nonatomic) id <NSSecureCoding> object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)description;
- (void)touch;
- (id)initWithObject:(id)arg1;

@end
