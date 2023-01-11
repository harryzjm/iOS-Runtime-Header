//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, NSUUID;
@protocol APPCPromotableContentDepiction;

@interface APPCBaseContext : NSObject
{
    MISSING_TYPE *adjacentInternal;
    MISSING_TYPE *identifier;
    MISSING_TYPE *maxSize;
    MISSING_TYPE *current;
    MISSING_TYPE *next;
    MISSING_TYPE *adjacent;
    MISSING_TYPE *requestedAd;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMaxSize:(struct CGSize)arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4;
- (id)initWithMaxSize:(struct CGSize)arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4;
@property(nonatomic, copy) NSString *requestedAd;
@property(nonatomic, readonly) NSArray *adjacent;
@property(nonatomic, readonly) NSArray *next;
@property(nonatomic, readonly) id <APPCPromotableContentDepiction> current; // @synthesize current;
@property(nonatomic, readonly) struct CGSize maxSize; // @synthesize maxSize;
@property(nonatomic, readonly) NSUUID *identifier;

@end
