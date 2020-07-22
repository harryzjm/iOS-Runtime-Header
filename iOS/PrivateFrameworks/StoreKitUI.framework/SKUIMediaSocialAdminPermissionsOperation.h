//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (id)_lookupResponseForMissingAuthors:(id)arg1 error:(id *)arg2;
- (id)_authorsWithResponseDictionary:(id)arg1;
- (void)main;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithClientContext:(id)arg1;

@end

