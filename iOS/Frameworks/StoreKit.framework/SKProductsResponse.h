//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SKProductsResponse : NSObject
{
    id _internal;
}

- (void).cxx_destruct;
- (void)_setProducts:(id)arg1;
- (void)_setInvalidIdentifiers:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
@property(readonly, nonatomic) NSArray *products;
@property(readonly, nonatomic) NSArray *invalidProductIdentifiers;
- (id)init;

@end

