//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDResolvedItem, NSString;

__attribute__((visibility("hidden")))
@interface GEOResolvedItem : NSObject
{
    GEOPDResolvedItem *_resolvedItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int itemType;
@property(readonly, nonatomic) unsigned long long resultIndex;
@property(readonly, nonatomic) NSString *extractedTerm;
- (id)initWithResolvedItem:(id)arg1;

@end

