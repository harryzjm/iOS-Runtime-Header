//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KGPerformChangesRequest : NSObject
{
}

- (_Bool)commitRequestInGraph:(id)arg1 error:(id *)arg2;
- (_Bool)_applyChangesForGraph:(id)arg1 error:(id *)arg2;
- (void)recordEdgeRequest:(id)arg1;
- (void)recordNodeRequest:(id)arg1;
- (void)removeAllObjects;
@property(readonly, nonatomic) unsigned long long count;

@end
