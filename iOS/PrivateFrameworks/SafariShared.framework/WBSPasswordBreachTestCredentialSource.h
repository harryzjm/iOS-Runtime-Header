//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSPasswordBreachCredentialSource-Protocol.h>

@class NSArray;

@interface WBSPasswordBreachTestCredentialSource : NSObject <WBSPasswordBreachCredentialSource>
{
    NSArray *_credentials;
}

- (void).cxx_destruct;
- (id)savedPasswordsForPersistentIdentifiers:(id)arg1;
@property(readonly, nonatomic) NSArray *credentials;
- (id)initWithPasswords:(id)arg1;

@end
