//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSDictionary;

@interface CKDRemoveAnonymousShareFromSharedDBOperationInfo : CKDatabaseOperationInfo
{
    NSDictionary *_encryptedAnonymousSharesToRemove;
    CDUnknownBlockType _anonymousShareRemovedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType anonymousShareRemovedBlock; // @synthesize anonymousShareRemovedBlock=_anonymousShareRemovedBlock;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove; // @synthesize encryptedAnonymousSharesToRemove=_encryptedAnonymousSharesToRemove;

@end
